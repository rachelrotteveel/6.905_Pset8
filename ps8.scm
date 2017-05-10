#|
Rachel Rotteveel
6.905 Problem Set 7
May 5, 2017
|#

(cd "~/Documents/MIT Senior Year/6.905/6.905_Pset8/propagator/")
(load "load")
(cd "~/Documents/MIT Senior Year/6.905/6.905_Pset8/")
(load "load")

;;;;;;;;;;;;;;;;;;;
;;; Problem 8.1 ;;;
;;;;;;;;;;;;;;;;;;;

(initialize-scheduler)    

(define (create-person person)
  (let-cells (height weight income expenses)  
	     (eq-put! person 'height height)
	     (eq-put! person 'weight weight)
	     (eq-put! person 'income income)
	     (eq-put! person 'expenses expenses)
	     'done))
               
(create-person 'martin)
(tell! (eq-get 'martin 'height) 56 'melinda-estimate)


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
