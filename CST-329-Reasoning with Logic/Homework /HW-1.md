# HW 1 Reading #1

1. Write an English sentence that is not a declarative sentence.

       A declarative sentence is one that is true or false.
       Please, open the door.

2. Which of the following sentences are declarative?

       ** A. Beer sales are up 16% so far this year **
       B. When will all the activities be in-person again?
       C. To become a better listener, stay present with each word as it is spoken to you

3. Which of the following sentences have clear truth value?

        A. Alicia is kind of smart 
        ** B. Hydrogen is a molecule ** 
        ** C. Taft was the 15th US president **

 4. Which of the following declarative sentences are atomic?

        ** A. There are four quarters in a dollar. **
        B. Both Bush and Clinton were president in 1993.
        C. If Alex goes to the party then Sam will, too.

5. Does the following sentence have proper syntax?

   "I own throw green spaghetti"

         ** Yes **
         No
         The sentence has bad syntax, because two verbs appear next to each other (own and throw). Two verbs can show up next to each other in some cases, but not two simple present tense transitive verbs like these ones, so the sentence structure is poor.

7. Is the following a statement about syntax or semantics?

   "Write the number in decimal form."

       A. semantics
       ** B. syntax **

# HW 1 Reading #2

1. Write a translation key for the following sentence:

"I will get a taco if I go to Jack-in-the-Box".

Use as many lines in the response template as needed.

    Translation Key: 

    P: I go to Jack-in-the-box

    Q: I will get a taco

    The statement can be re-read as, If I go to Jack-in-the-box, then I will get a taco.

    So, the logic statement for this if…then.. statement is P -> Q.

2. Write a translation key for the following sentence

"x + 1 is not a negative number whenever x is a negative number"

Use as many lines of the response template as you need.

    P: x + 1 is a negative number

    Q: x is a negative number

    Also acceptable:

    P: x + 1 is a positive number

    Q: x is a positive number

    atomic sentences may not contain negations. To write this in a proper form, you must use your second choice of translation key.

3. Translate the following phrase into our logical language:

if P then Q

    P → Q 
    P → Q 
    (P → Q) 
    (P → Q) 

4. Translate the following phrase into our logical language:

   P so long as Q

       Q → P

5. If P is false, and Q is false, then what is the truth value of the following logical sentence?

   P → Q

       False
       ** True **, Sentence P → Q is true if P is false, no matter what the value of Q is.

6. If P is true and Q is false then what is the truth value of P → Q ?

       True
       ** False **, this is the only situation in which P → Q is false.

7. "If Seaside High School is 5000 feet above sea level, then the CSUMB campus is 10000 feet above sea level". 

    The city of Seaside is only 33 feet above sea level, and definitely doesn't reach 5000 ft.

    Using our definition of implication, is this sentence true or false?

       False
       ** True ** an implication is true whenever the premise is false.

8. If P is true and Q is false, do these two formulas have the same truth values?

   ¬(P → Q)

   P → ¬Q

       No
       ** Yes ** Both sentences are true

9. If the truth value of "P" is false, then what is the truth value of ¬¬P?

       ** False **
       True

10. If "P" stands for the atomic sentence "Sal and Evelyn are friends", then write a sentence in our logical language for

"Sal and Evelyn are not friends"

    ¬P

11. Write a logical sentence for

    "If Sal is friends with Eddy then Sal is not friends with Evelyn."

    using the following translation key:

    P: "Sal and Evelyn are friends"

    Q:  "Sal and Eddy are friends"

        (Q → ¬(P)) 
        Q → ¬ P 
        Q → ¬(P) 
        Q → ¬P
    
12. Write a logical sentence for

    "if the bank door is closed then the bank is not being robbed"

    using the following translation key:

    P: "the bank is being robbed"

    Q:  "the bank door is open"

        (¬Q) → (¬P) 
        ¬Q → ¬P 
        ((¬Q) → (¬P))

13. P, Q, and R are atomic sentences.  Write a logical sentence that captures

    "if P, then Q implies R"

        P → (Q → R) 
        (P → (Q → R)) 
        P → (Q → R)

# Quiz 1 (CH 1,2,3)

1. Which of the following declarative sentences are atomic?

       A. My car has a red exterior and a black interior.
       B. I will take payment by Visa or by Paypal.
       ** C. Whales have been reported in Monterey Bay. **

2. Which of the following sentences are declarative?

       ** A. I cannot directly witness what is another person's mind. **
       B. Gas or electric?
       C.  First of all, get out of LA.
       ** D. If you say so you will do something, do it. **
       Declarative sentences have truth values. Only the sentence "I cannot directly witness what is in 
       another person's mind" can be claimed to be either true or false. Other given sentences (question, 
       command, etc) cannot be claimed as true/false.

3. Every english sentence will have a truth value.

       True
       ** False **
       Some English sentences don't have a truth value, including questions.  A question is not making a 
       true or false assertion, so to say that a question is true is strange, (compared to an answer being 
       true or false, as answers are often declarative sentences responding to a question).

4. Which truth values for P, Q, and R make it so that the following two sentences are true?

   P → (Q → R)
   (P → Q) → R
   (NOTE: Use a truth table... seriously, this is hard to do with perfect accuracy mentally)
   
        ** A. P is false, Q is true, R is true **
        ** B. P is true, Q is true, R is true **
        C. P is false, Q is false, R is false
        ** D. P is true, Q is false, R is false **

5. Write a sentence in our logical language for

"If Alex goes to the barber he will not get a perm."

Use the following translation key:

   P:  "Alex goes to the barber"

   Q: "Alex will get a perm"

      P → ¬Q
      (P → ¬(Q))
      P → ¬(Q)
      P → ¬ Q
      
6. Do these two sentences always have the  same meaning?  (in other words, regardless of the truth of P and Q?)

    ¬(P → Q)
   
     P → ¬Q

       Yes
       ** No **
       If P is false and Q is false then the first sentence is false and the second sentence is true.
   
8. Is the following a statement about syntax or semantics?

"The symbol / means division."

       A. Syntax
       ** B. Semantics **

8. If P is false, and Q is false, then what is the truth value of the following sentence?

   P → Q

          False
          ** True ** P → Q is true if P is false, no matter what the values of Q is.

9. "If one is greater then zero, then LA is the capital of California."

Using our definition of implication, is this statement true or false?

       False
       ** True ** An implication is false if the premise is true and the conclusion is false.

10. Translate the following phrase into our logical language:

P if Q

       Q → P

11. Translate the following phrase into our logical language:

if P then Q

       P → Q

12. Write a translation key for the following sentence

       "If I don't work at home then I don't eat snacks."

       Use as many lines of the response template as you need.

           P: I work at home
           Q: I eat snacks
           Logical statement: ¬P → ¬Q

13.  | P  |  Q  |    P → Q   |       ¬Q       |      ¬P      |
     | -- | --  | ---------- | -------------- | ------------ |
     | T  |  T  |     T      |        F       |       F      |
     | T  |  F  |     F      |        T       |       F      |
     | F  |  T  |     T      |        F       |       T      |
     | F  |  F  |     T      |        T       |       T      |

14. Consider this argument:
       P → Q
    ----------
       Q
    (True/False)  Are the entries in the truth table correct, and is the argument valid?
    
     | P  |  Q  | premise P → Q   |  conclusion Q  |   
     | -- | --  | --------------- | -------------- | 
     | T  |  T  |     T           |        T       | 
     | T  |  F  |     F           |        F       | 
     | F  |  T  |     T           |        T       |
     | F  |  F  |     T           |        F       |

           A. The entries in the truth table are not correct
           ** B. The entries in the truth table are correct, but the argument is not valid. **
           C. The entries in the truth table are correct, and the argument is valid.

           The entries in the truth table are correct, but the argument is not valid because of the last 
           line.

15.  If an argument is sound, then its conclusion is true.

          ** True **
          False
          A sound argument is a valid argument with true premises, and will have a true conclusion.

