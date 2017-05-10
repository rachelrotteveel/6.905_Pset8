#|
Rachel Rotteveel
6.905 Problem Set 7
May 5, 2017
|#

(cd "~/6.905_Pset8/propagator/")
(load "load")
(cd "~/6.905_Pset8")
(load "load")
(initialize-scheduler) ; initializes propagator system

(define-cell john-earnings)
(tell! john-earnings (make-interval 20 27) 'Harry-estimate)

(content john-earnings)
#|
#(tms (#(value=#[interval 20 27],
	       premises=(harry-estimate),
	       informants=(user))))
|#

(tell! john-earnings (make-interval 15 21) 'Mary-estimate)
(pp (content john-earnings))
#|
#(tms
  (#(value=#[interval 20 21],
   premises=(harry-estimate mary-estimate),
   informants=(user))
   #(value=#[interval 15 21],
   premises=(mary-estimate),
   informants=(user))
   #(value=#[interval 20 27],
   premises=(harry-estimate),
   informants=(user))))
|#

;; best estimate based on both sources of information
(inquire john-earnings) 
#|
#(value=#[interval 20 21],
   premises=(harry-estimate mary-estimate),
   informants=(user))
|#

(tell! john-earnings (make-interval 25 30) 'bank-estimate)
;;(contradiction (mary-estimate harry-estimate bank-estimate))

(content john-earnings)
#|
#(tms (#(value=#[contradictory-interval 25 21],
   premises=(mary-estimate harry-estimate bank-estimate),
   informants=(user)) #(value=#[interval 25 30],
   premises=(bank-estimate),
   informants=(user)) #(value=#[interval 20 21],
   premises=(harry-estimate mary-estimate),
   informants=(user)) #(value=#[interval 15 21],
   premises=(mary-estimate),
   informants=(user)) #(value=#[interval 20 27],
   premises=(harry-estimate),
   informants=(user))))
|#

(inquire john-earnings)
#|
(contradiction (mary-estimate harry-estimate bank-estimate))
;Value: #(value=#[contradictory-interval 25 21],
   premises=(mary-estimate harry-estimate bank-estimate),
   informants=(user))
|#

(retract! 'Harry-estimate)

(inquire john-earnings)
#|
#(value=#[contradictory-interval 25 21],
   premises=(mary-estimate bank-estimate),
   informants=(user))
|#

(assert! 'Harry-estimate) ;; contradiction did not depend on Harry

(inquire john-earnings) ;; system now knows cont did not depend on Harry
#|
#(value=#[contradictory-interval 25 21],
   premises=(mary-estimate bank-estimate),
   informants=(user))
|#

(retract! 'Mary-estimate)

(inquire john-earnings)
#|
#(value=#[interval 25 27],
   premises=(harry-estimate bank-estimate),
   informants=(user))
|#


(add-interval-property john-earnings (make-interval 0 20) 'loan-eligible)

(tell! (eq-get john-earnings 'loan-eligible) #t 'mit-financial)
;; (contradiction (bank-estimate harry-estimate mit-financial))

(for-each retract! '(harry-estimate bank-estimate))

(inquire john-earnings)
#|
#(value=#[interval 0 20],
   premises=(mit-financial),
   informants=((switch:p status-cell range)))
|#

(retract! 'mit-financial)

(inquire john-earnings)
;; #(*the-nothing*)

(inquire (eq-get john-earnings 'loan-eligible))
;; #(*the-nothing*)

(assert! 'Mary-estimate)

(inquire john-earnings)
#|
#(value=#[interval 15 21],
   premises=(mary-estimate),
   informants=(user))
|#

(inquire (eq-get john-earnings 'loan-eligible))
;; #(*the-nothing*)

(tell! john-earnings (make-interval 5 18) 'Debby-estimate)
(inquire john-earnings)
#|
#(value=#[interval 15 18],
   premises=(mary-estimate debby-estimate),
   informants=(user))
|#

(inquire (eq-get john-earnings 'loan-eligible))
#|
#(value=#t,
   premises=(debby-estimate mary-estimate),
   informants=((and:p cell19 cell17)))
|#


(define-cell foo)

((c:bins (named-ranges 'gjs
		       '(low ,(make-interval 3 6))
		       '(medium ,(make-interval 5 8))
		       '(high ,(make-interval 7 9))))
 foo)
#|
The intervals will depend on the GJS premise. If GJS is retracted,
the intervals will become unknown, but the named cells will remain,
and new intervals can be placed in them.
|#

(draw:show-graph)

;;;;;;;;;;;;;;;;;;;
;;; Problem 8.1 ;;;
;;;;;;;;;;;;;;;;;;;

(initialize-scheduler)    


(define (create-people people)
  (for-each
   (lambda (person)
     (display person)
     (define-cell person)
     ;; add properties to person cell
     (define-cell height)
     (eq-put! person 'height height)
     (define-cell weight)
     (eq-put! person 'weight weight)
     (define-cell income)
     (eq-put! person 'income income)
     (define-cell expenses)
     (eq-put! person 'expenses expenses)) 
   people))


#|
(define (create-people people)
  (display people)
  (for-each 
   (lambda (p)
     (display p)
     (define-cell p)
     (let-cells (height-cell weight-cell income-cell expenses-cell)  
                ((eq-put! p 'height height-cell)
                 (eq-put! p 'weight weight-cell)
                 (eq-put! p 'income income-cell)
                 (eq-put! p 'expenses expenses-cell))))
   people))
|#
               
(create-people '('martin 'joey 'melinda 'barb 'rob))
(tell! (eq-get 'joey 'height) 56 'melinda)


(define (add-symbolic-ranges name height weight income expenses) 
  (eq-put! name 'height height)
  ((c:bins
    (named-ranges
     name
     `(short ,(make-interval 0 100))
     `(average ,(make-interval 100 150))
     `(tall ,(make-interval 150 250))))
   height)
  
  (eq-put! name 'weight weight)
  ((c:bins
    (named-ranges
     name
     `(skinny ,(make-interval 0 100))
     `(average ,(make-interval 100 150))
     `(large ,(make-interval 150 250))
     `(obese ,(make-interval 250 500))))
   weight)
  
  (eq-put! name 'income income)
  ((c:bins
    (named-ranges
     name
     `(poor ,(make-interval 0 20000))
     `(middle-class ,(make-interval 20000 80000))
     `(upper-middle-class ,(make-interval 80000 120000))
     `(wealthy ,(make-interval 120000 1000000))))
   income)
  
  (eq-put! name 'expenses expenses)
  ((c:bins
    (named-ranges
     name
     `(frugal ,(make-interval 0 20000))
     `(average ,(make-interval 20000 50000))
     `(big-spender ,(make-interval 50000 300000))))
   expenses))

(define-cell 'martin)
(tell! (eq-get 'martin 'height) 185 'barb)
(add-symbolic-ranges Martin 120 180 20000 50000)
(inquire Martin)



(content martin)



;;;;;;;;;;;;;;;;;;;
;;; Problem 8.2 ;;;
;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;
;;; Problem 8.3 ;;;
;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;
;;; Problem 8.4 ;;;
;;;;;;;;;;;;;;;;;;;
