# HW 2 Reading #1

1. Here is an argument:

   P → Q

   Q → R

   P

   --------

   R

   (True/False) Using only the modus ponens rule, it's possible to arrive at the conclusion that R is true.

       True, you can prove R is true by first using P and P → Q to derive Q, and then using Q → R and Q to derive R.

2. Give a situation in which these two formulas do not have the same truth value:

   P → (Q → R)

   (P → Q) → R

   Hint: write a truth table on paper to recognize the cases (you do not need to give the truth table as your answer here, you only write the truth value of P, Q, and R for the case)

       When the two formulas do not have the same truth value:

       - P = False, Q = True, R = False
       - P = False, Q = False, R = False
   
3. Select the situations in which the sentence ¬Q → ¬P is true.

       A. P = T, Q = F
       *B. P = F, Q = T*
       *C. P = F, Q = F*
       *D. P = T, Q = T*

4. Suppose we have these three formulas as premises of an argument:

   (P → Q) → (¬R → S)

   ¬R

   Q

   Could the modus ponens rule be applied to them to derive another formula?

       A. yes, and the derived formula would be (P → Q) → S
       *B. no*
       C. yes, and the derived formula would be ¬R → S

5. Here is an argument:

   ¬P → Q

   ¬P → R

   ¬Q

   ------

   R

   Is the following a legal direct proof for the argument?

   1.  ¬P → Q

   2.  ¬P → R

   3.  ¬Q

   ------

   4.  ¬P       1, 3   modus tollens

   5.  R          2, 4  modus ponens

           *A. no, sentence 4 was not derived correctly*
           B. no, sentence 5 was not derived correctly
           C. yes, the direct proof is correct

           The problem with the proof is on line 4.  Using modus tollens you would get ~~P, not ~P. 
           The proof skips a step in which double negation is necessary for the sake of being precise and proper. It is necessary for a complete formal proof, but often considered a "trivial" step.

6. Here is an argument:

    P
   
    P → (Q → R)
   
    Q
   
    -------------------

    R

   If the following direct proof correct?

    1. P
    2. P → (Q → R)
    3. Q
    ---
    4. P → R           2, 3, modus ponens
    5. R               4, 1, modus ponens

             *A. no - the problem is with the derivation of sentence 4*
             B. no - the problem is that the premise are not listed correctly
             C. yes
             D. no - the problem is with the derivation of sentence 5

             The proof is not correct.  The premises are listed correctly, but the sentence 4 cannot be obtained from sentences 2 and 3 using modus ponens.

7. In what situations do these two sentences have the same truth value?

    P → ¬Q

    Q → P

   Hint: write a truth table

         *A. P = F, Q = F*
         B. P = T, Q = T
         *C. P = T, Q = F*
         D. P = F, Q = T

# HW 2 Proofs #1 4.1 - 4.5

## 4.1

Construct a proof for the argument: R, P, P → (R → Q) ∴ Q
1.	R		
2.	P		
3.	P → (R → Q)		
4.	R → Q	        2, 3	Modus Ponens (->E)
5.	Q	           1, 4	Modus Ponens (->E)

## 4.2

Construct a proof for the argument: ¬P → Q, P → R, ¬R ∴ Q
1.	¬P → Q		
2.	P → R		
3.	¬R		
4.	¬P	            2, 3 Modus Tollens (DS)
5.	Q	            1, 4 Modus Ponens	(->E)





