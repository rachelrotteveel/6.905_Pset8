#|
Rachel Rotteveel
6.905 Problem Set 8
May 12, 2017
|#

(cd "~/Documents/MIT Senior Year/6.905/6.905_Pset8/propagator/")
(load "load")
(cd "~/Documents/MIT Senior Year/6.905/6.905_Pset8/")
(load "load")

;;;;;;;;;;;;;;;;;;;
;;; Problem 8.1 ;;;
;;;;;;;;;;;;;;;;;;;

(initialize-scheduler)    

(define (cell-name name property)
  (symbol name '- property))

(define (determine-living-beyond-means name)
  (let ((cell-name (cell-name name 'living-beyond-means)))
    (define-cell cell-name)
    (eq-put! name 'living-beyond-means cell-name)
    (display (e:interval-high (eq-get name 'income)))
    (display (e:interval-low (eq-get name 'expenses)))
    (p:<
      (e:interval-high (eq-get name 'income))
      (e:interval-low (eq-get name 'expenses))
      cell-name)))

(define (determine-profligate name)
  (let ((cell-name (cell-name name 'profligate)))
    (define-cell cell-name)
    (eq-put! name 'profligate cell-name)
    (p:and
      (e:id (eq-get name 'living-beyond-means))
      (e:or
        (e:id ((eq-path '(upper-middle-class income)) name))
        (e:id ((eq-path '(wealthy income)) name)))
      cell-name)))

(define (determine-bmi name)
  (let ((cell-name (cell-name name 'bmi)))
    (define-cell cell-name)
    (eq-put! name 'bmi cell-name)
    (p:*
      (e:/
        (e:id (eq-get name 'weight))
        (e:square (eq-get name 'height)))
      45.5
      cell-name)))

(define (create-people people)
  (for-each
    (lambda (person)
      (for-each
        (lambda (property)
          (let ((cell-name (cell-name person property)))
            (define-cell cell-name)
            (eq-put! person property cell-name)))
        '(height weight income expenses))

      ((c:bins
	(named-ranges 'premise-height
		      `(short ,(make-interval 0 100))
		      `(average ,(make-interval 100 150))
		      `(tall ,(make-interval 150 250))))
       (eq-get person 'height))

      ((c:bins
	(named-ranges 'premise-weight
		      `(skinny ,(make-interval 0 100))
		      `(average ,(make-interval 100 150))
		      `(large ,(make-interval 150 250))
		      `(obese ,(make-interval 250 1000))))
       (eq-get person 'weight))
      
      ((c:bins
	(named-ranges 'premise-income
		      `(poor ,(make-interval 0 20000))
		      `(middle-class ,(make-interval 20000 80000))
		      `(upper-middle-class ,(make-interval 80000 120000))
		      `(wealthy ,(make-interval 120000 1000000000))))
       (eq-get person 'income))

      ((c:bins
	(named-ranges 'premise-expenses
		      `(frugal ,(make-interval 0 20000))
		      `(average ,(make-interval 20000 50000))
		      `(big-spender ,(make-interval 50000 100000000))))
       (eq-get person 'expenses))

      (determine-living-beyond-means person)
      (determine-profligate person)
      (determine-bmi person)
      
      ((c:bins
        (named-ranges 'premise-bmi
		      `(underweight ,(make-interval 0 18.5))
		      `(normal      ,(make-interval 18.5 25))
		      `(overweight  ,(make-interval 25 30))
		      `(obese       ,(make-interval 30 99))))
       (eq-get person 'bmi)))

    people))

;;; Create some interesting people
(create-people '(Martin John Melissa Eric Rachel))
(tell! (eq-get 'Melissa 'height) 125 'melissa-estimate)
(tell! (eq-get 'Melissa 'weight) 190 'rachel-estimate)
(tell! (eq-get 'Martin 'expenses) (make-interval 150000 200000) 'martin-estimate)
(tell! (eq-get 'Martin 'income) (make-interval 130000 140000) 'company-estimate)

#|
(inquire (eq-get 'Martin 'living-beyond-means))
;Value: #(value=#t,
   premises=(martin-estimate company-estimate),
   informants=((<:p cell990 cell989)))

(inquire (eq-get 'Martin 'profligate))
;Value: #(value=#t,
   premises=(premise-income martin-estimate company-estimate),
   informants=((and:p cell994 cell993)))

(inquire (eq-get 'Melissa 'bmi))
;Value: #(value=26714/3125,
   premises=(melissa-estimate rachel-estimate),
   informants=((*:p cell997 703)))

(inquire ((eq-path '(underweight bmi)) 'Melissa))
;Value: #(value=#t,
   premises=(rachel-estimate melissa-estimate premise-bmi),
   informants=((and:p cell1007 cell1005)))
|#


;;;;;;;;;;;;;;;;;;;
;;; Problem 8.2 ;;;
;;;;;;;;;;;;;;;;;;;

(define (breakdown sum-node . part-names)
  (for-each
    (lambda (part-name)
      (let-cell part
        (add-branch! sum-node part part-name)))
    part-names)
  (c:id
    (let lp ((names part-names))
      (ce:+
        (eq-get sum-node (car names))
        (cond
          ((= (length names) 2)
            (eq-get sum-node (cadr names)))
          (else
            (lp (cdr names))))))
    sum-node)
  'done)

(define (c:sum part-nodes sum-node)
  (let loop ((part-nodes part-nodes) (entity (e:constant 0)))
    (if (null? part-nodes)
        (c:== entity sum-node)
        (let ((new-entity (make-cell)))
          (c:+ (car part-nodes) entity new-entity)
          (loop (cdr part-nodes) new-entity)))))

(define (combine-financial-entities compound . parts)
  (assert (every financial-entity? parts))
  (define (combine f) (c:sum (map f parts) (f compound)))
  (combine gross-income)
  (combine net-income)
  (combine expenses)
  'done)

#|
(initialize-scheduler)

(make-financial-entity 'Alyssa)
(make-financial-entity 'Ben)
(make-financial-entity 'baby)

;;; Ben and Alyssa are married
(make-financial-entity 'Ben-Alyssa)
(combine-financial-entities 'Ben-Alyssa 'Ben 'Alyssa)

;;; Ben, Alyssa, and their baby are one financial entity
(make-financial-entity 'Ben-Alyssa-baby)
(combine-financial-entities 'Ben-Alyssa-baby 'Ben 'Alyssa 'baby)

;;; Ben and Alyssa file income tax jointly
(tell! (gross-income 'Ben-Alyssa-baby) 427000 'IRS)

;;; Ben works at Gaggle as a software engineer.
(breakdown (gross-income 'Ben) 'Gaggle-salary 'investments)

;;; He gets paid a lot to make good apps.
(tell! (thing-of '(Gaggle-salary gross-income Ben)) 200000 'Gaggle)

;;; Alyssa works as a PhD biochemist in big pharma.
(breakdown (gross-income 'Alyssa) 'GeneScam-salary 'investments)

;;; Ben and Alyssa's baby makes money as a model for Pampers
(breakdown (gross-income 'baby) 'Pampers-salary 'investments)

;;; Biochemists are paid poorly.
(tell! (thing-of '(GeneScam-salary gross-income Alyssa)) 70000 'GeneScam)

(tell! (thing-of '(investments gross-income Alyssa))
       (make-interval 30000 40000) 'Alyssa)

(inquire (thing-of '(investments gross-income Ben)))
;Value: #(value=#[interval 117000 127000],
;   premises=(alyssa gaggle genescam irs),
;   informants=((-:p gross-income part)))

|#


;;;;;;;;;;;;;;;;;;;
;;; Problem 8.3 ;;;
;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;
;;; Problem 8.4 ;;;
;;;;;;;;;;;;;;;;;;;
