# Week 2 Practice Problems

## Inference Rules

1. Without looking at the lecture slides, try to write out the modus ponens rule in logical language.

       Φ → Ψ
       Φ
       ------
       Ψ

2. If I have formulas ¬P and (¬P) → Q, can I use modus ponens to derive Q?

       Yes, Φ is ¬P and Ψ is Q.

3. If I have formulas P → Q and (P → Q) → (R → ¬S), can I apply modus ponens once to derive R → ¬S?

       Yes, Φ is P → Q and Ψ is R → ¬S.

4. If I have formulas ((P → Q) → ¬R) and P, can I apply modus ponens once to derive Q → ¬R?

       No, however, this is true, if you look at it i a truth table. Note that modus ponens is just a method for proving truth, but sometimes more creativity is needed to prove.

5. If I have formulas P → (Q →R) and Q, can I apply modus ponens once to derive P → R?

       No, once again this is true but modus ponens doesn't do the job

6. Here is an argument:

   P → ((Q → R) → S)
   
   P
   
   (Q → R)
   
   ------------
   
   S
   
   Can our conclusion “S” be reached using only the modus ponens rule?

       Yes. First use the first two sentences to derive ((Q → R) → S), and then use this new sentence and Q → R to derive S.

## Direct Proofs

1. Write a direct proof for the following argument using the proof checker (proof-checker.org), and check your proof.

   P
   
   P → (Q → R)
   
   ------------
   
   Q → R

       Proof:
       1. P
       2. P → (Q → R)
       --------------
       3. Q → R         1,2 Modus Ponens (->E)

3. Here is an argument:
   
   P → Q
   
   P → (Q → R)
   
   P
   
   ------------
   
   R
   
  Check the validity of the argument using a truth table.

       Here is the truth table for the argument.

       | P  |  Q  |     R      |      Q → R     |     P → Q     | P → (Q → R) |   P    |    Q    |
       | -- | --  | ---------- | -------------- | ------------- | ----------  |  ----  | ------- |
       | T  |  T  |     T      |        T       |       T*      |      T*     |   T*   |    T**  |
       | T  |  T  |     F      |        F       |       T       |      F      |   T    |    F    |
       | T  |  F  |     T      |        T       |       F       |      T      |   T    |    T    |
       | T  |  F  |     F      |        T       |       F       |      T      |   T    |    F    |
       | F  |  T  |     T      |        T       |       T       |      T      |   F    |    T    |
       | F  |  T  |     F      |        F       |       T       |      T      |   F    |    F    |
       | F  |  F  |     T      |        T       |       T       |      T      |   F    |    T    |
       | F  |  T  |     F      |        T       |       T       |      T      |   F    |    F    |

       *There is only one row on which all premises are true. The conclusion** is true for that case. So, 
       this is valid argument.

5. Using the proof checker, create a direct proof for the argument of the previous problem. NOTE: There can be more than one way to create such a proof, try seeing if you can make two different direct proofs.

   Construct a proof for the argument: P → Q, P → (Q → R), P ∴ R

       ### Proof 1:
   
        1.	P → Q
   
        2.	P → (Q → R)
   	
        3.	P
   
        -------------
   
        4.	Q	      1, 3 Modus Ponens (->E)
   
        5.	Q → R	      2, 3 Modus Ponens (->E)
   
        6.	R	      4, 5 Modus Ponens	(->E)

       ### Proof 2:

        1.	P → Q
   
        2.	P → (Q → R)
   	
        3.	P
   
        -------------
   
        4.	Q	      2, 3 Modus Ponens (->E)
   
        5.	Q → R	      1, 3 Modus Ponens (->E)
   
        6.	R	      4, 5 Modus Ponens	(->E)

## Modus Tollens and Double Negation

1. Can you show that the following argument is valid using a truth table?

   P
   
   ---------
   
   ¬¬P

   Here is the truth table that shows that the conclusion is true when the premise is true. So, the argument is valid. I’ve included a row representing negation so we can think about how negation “flip” our truth value.

   Truth table: (not a valid argument because of line 1)

    |         |  premise |            |  conclusion Q |
    | ------- | -------- | ---------- | --------------| 
    |    P    |     P    |     ¬P     |      ¬(¬P)    |
    |    T    |     T    |     F      |       T       | 
    |    F    |     F    |     T      |       F       |

2. Write and check a direct proof for the argument below using the proof checker.
   ¬P → Q                            // note: this is the same as writing (¬P) → Q
   P → R
   ¬R
  ------------
   Q

    Proof:

     1.	¬P → Q	
   
     2.	P → R		
   
     3.	¬R
   
     -----------
   
     4.	¬P	     2, 3 Modus Tollens	(DS)
  
     5.	Q	       1, 4 Modus Ponens (->E)

3. Write an argument in English that corresponds to the logical argument in problem 2.  It can be on whatever appropriate subject you like.

       An example argument: If I don't go for a walk, I will be lethargic. If I do go for a walk, I will get some vitamin D from the sun. I did not get any vitamin D from the sun. Therefore, I will be lethargic.

## Conjunction Semantics

1. Write a translation key for the following sentence, and then translate it to our logical language:

  *OS is not a prereq for Intro to Databases, but it is for Intro to Data Science.*

    Here is a translation key:

    P: OS is a prereq for Intro to Databases
    Q: OS is a prereq for Intro to Data Science

    Here is a translation to logic: ¬P ∧ Q

2. Write a translation key for the following text, then translate it to our logical language:

 *Glendale is a city in California and Arizona, but not in Utah.*

    Here is a translation key:

    P: Glendale is a city in California
    Q: Glendale is a city in Arizona
    R: Glendale is a city in Utah

    Here is a translation to logic: P ∧ Q ∧ ¬R

3. Try to write the truth table for conjunction (“AND”) without checking slides or the book. What does AND mean for truth statements in a normal spoken context?

   See lecture for the truth table for conjunction.

4. Use a truth table to check the validity of the following argument:

   ¬(P → Q)

   ------

   P ∧ ¬Q

   Here is the truth table that shows the conclusion is true when the premise is true. So, the argument is valid.

   Ans:
   
     | P  |  Q  |    P → Q   |       ¬Q       |   ¬(P → Q)   |  P → ¬Q   | 
     | -- | --  | ---------- | -------------- | ------------ | --------- |
     | T  |  T  |     T      |        F       |       F      |     F     |
     | T  |  F  |     F      |        T       |       *T*    |     *T*   |
     | F  |  T  |     T      |        F       |       F      |     F     |
     | F  |  F  |     T      |        T       |       F      |     F     |

6. Write a translation key for the following sentence, then translate the sentence into our logical language.

  *Ulysses can go home only if he isn't from Troy.*

  Here is a translation key:

  P: Ulysses can go home
  Q: Ulysses is from Troy

  Here is a translation to logic: P → ¬Q

## Conjunction Inference

1. Using the proof checker, prove that the following argument is valid (This statement is a little silly, what we would call trivial, but proof checker requires us to do these types of simplifications):

   P ∧ Q
   
   --------

   P

  Proof:

  1. P ∧ Q
  --------
  2. P      1 Simplification (^E)

2. Here is something a little harder.  Using the proof checker, prove the following argument is valid:

   P ∧ Q
   
   --------

   Q ∧ P

   Proof:

   1. P ∧ Q

   ----------

   2. Q       1 Simplification (^E)
   3. P       1 Simplification (^E)
   4. Q ∧ P   2,3 Adjunction (^I)
   
  





   

   
   
