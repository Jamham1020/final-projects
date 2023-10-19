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
4.	R → Q	           2, 3	Modus Ponens (->E)
5.	Q	              1, 4	Modus Ponens (->E)

## 4.2

Construct a proof for the argument: ¬P → Q, P → R, ¬R ∴ Q
1.	¬P → Q		
2.	P → R		
3.	¬R		
4.	¬P	               2, 3 Modus Tollens (DS)
5.	Q	               1, 4 Modus Ponens	(->E)

## 4.3

Construct a proof for the argument: P → ¬S, R → P, S ∴ ¬R

1.	P → ¬S		
2.	R → P		
3.	S		
4.	¬¬S	       3 Double Negation	(DNE)
5.	¬P	          1, 4 Modus Tollens	(DS)
6.	¬R	          2, 5 Modus Tollens  (DS)

## 4.4 

Construct a proof for the argument: P, S → R, ¬R, ¬S → (P → Q) ∴ Q

1.	P		
2.	S → R		
3.	¬R		
4.	¬S → (P → Q)		
5.	¬S	             2, 3 Modus Tollens	(DS)
6.	P → Q	          4, 5 Modus Ponens	(->E)
7.	Q	             1, 6 Modus Ponens   (->E)

## 4.5

Construct a proof for the argument: ¬(Q → R) → P, ¬P, Q ∴ R

1.	¬(Q → R) → P		
2.	¬P		
3.	Q		
4.	¬¬(Q → R)	    1, 2 Modus Tollens	(DS)
5.	Q → R	          4 Double Negation	(DNE)
6.	R	             3, 5 Modus Ponens   (->E)

# HW 2 Reading #2

1. Here is an argument:

   ¬(P ∧ Q)
   P → ¬Q
 

   Fill out the truth table below to check the validity of the argument.

    |         |          |   premise  |  conclusion   |
    | ------- | -------- | ---------- | --------------| 
    |    Q    |     P    |  ¬(P ∧ Q)  |     P → ¬Q    |
    |    T    |     T    |     F      |       F       | 
    |    T    |     F    |     T      |       T       |
    |    F    |     T    |     T      |       T       |
    |    F    |     F    |     T      |       T       |

2. Here is an argument:

   P ∧ Q

   -----

   P

   Check the validity of the argument by filling out the truth table.

    |         |          |   premise  |  conclusion   |
    | ------- | -------- | ---------- | --------------| 
    |    P    |     Q    |    P ∧ Q   |       P       |
    |    T    |     T    |     T      |       T       | 
    |    T    |     F    |     F      |       T       |
    |    F    |     T    |     F      |       F       |
    |    F    |     F    |     F      |       F       |

    The argument is valid.  Intuitively, if P ^ Q is true, then P and Q are both true, so P is true.

3. Translate the following sentence to logic:

    "Smoky is an unpredictable cat".

    Use this translation key:

    P	Smoky is predictable
    Q	Smoky is a cat

     Q ∧ ¬P

4. Suppose we have these formulas:

   P → ¬R

   R

   Could the modus tollens rule be applied to derive another formula?

         A. no
         *B. yes, and the derived formula would be ¬P*
         C. yes, and the derived formula would be P

5. Suppose we have these formulas:

   ¬(P → Q) → R

   ¬R

   Could the modus tollens rule be applied to derive another formula?
   
         *A. yes, and the derived formula would be ~~(P -> Q)*
         B. yes, and the derived formula would be P -> Q
         C. no

6. Consider the following argument:

   P ∧ (Q ∧ R)
   ___________
   Q ∧ P
   
   Can the conclusion be derived from the premise using only one application of an inference rule? (Of    
   course, only the inference rules we've defined in class can be used.)
   
         Yes
         *No*

7. What is the top level operator of the logical sentence ¬(P → (Q ∧ R)) ?

         A. →
         B. ∧
         ** C. ¬ **

8. Translate the following sentence to logic:

   "I will not eat chocolate and I will not be happy."

   P	I will eat chocolate
   
   Q	I will be happy

   ANS: ¬P ∧ ¬Q

9. What does it mean for two sentences to be "equivalent"?

         A. They contain the same atomic sentences
         B. They contain the same logical operators
         ** C. If their atomic sentences are given the same truth values, then the two formulas will have 
            the same truth values. **
         D. They look exactly the same.

         "equivalence" (or "logical equivalence") means that the two sentences have the same truth values. Sec 5.6


## HW 2 Proofs #2 5.1-5.6

5.1

Construct a proof for the argument: ¬P → ¬Q, Q ∴ P

1.	¬P → ¬Q		
2.	Q		
3.	¬¬Q	   2 Double Negation	
4.	¬¬P	   1, 3 Modus Tollens	
5.	P	      4 Double Negation

5.2 

Construct a proof for the argument: (P ∧ Q) ∧ R ∴ Q ∧ P

1.	(P ∧ Q) ∧ R		
2.	P ∧ Q	        1 Simplification	
3.	R	           1 Simplification	
4.	P	           2 Simplification	
5.	Q	           2 Simplification	
6.	Q ∧ P	        4, 5 Adjunction

5.3
