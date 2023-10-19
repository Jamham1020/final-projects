# Practice Problems (Week 3)

## Conditional Derivation

1. Write a proof using proof-checker to show that this argument is valid:
   ```
   P
   ______
   Q → P
   ```
   Hints: with this and many of these problems, our subproof can be thought of as saying “suppose something is true, what happens?”
          you will need to use the 'repeat' rule within your subproof

   PROOF:
   ```
   Construct a proof for the argument: P ∴ Q → P
   1. P
   2. | Q
   3. | P	       1 Repeat (Rep)
   4. Q → P	      2–3 Conditional derivation(->I)
   
   ``` 
   <img width="282" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4ad1a363-5611-4d7b-8b91-8f72bbf4ddf8">

2. Write a proof using proof-checker to show that this argument is valid:
   ```
   P → Q, P → R
   _____________
   P → (Q ∧ R)
   ```
   PROOF: 
   ```
   Construct a proof for the argument: P → Q, P → R ∴ P → (Q ∧ R)

   1.	P → Q		(Given)
   2.	P → R		(Given)
   3.	|	P		
   4.	|	Q	      1,3 Modus Ponens	
   5.	|	R	      2,3 Modus Ponens	
   6.	|	Q ∧ R	   4,5 Adjunction	
   7.	P → (Q ∧ R)	3–6 Conditional derivation
   ```
  <img width="338" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/be1b8fa0-a61c-4bc5-b259-f3eefecd1b8d">

## Conditional Derivation Details

1. Write a proof using proof-checker to show that this argument is valid:
   P → Q, P → (Q → R)
   _________________
   P → R

   Proof:
   ```
   Construct a proof for the argument: P → Q, P → (Q → R) ∴ P → R

   1.	P → Q		   (Given)
   2.	P → (Q → R)		(Given)
   3.	|	P		
   4.	|	Q	      1, 3 Modus Ponens	
   5.	|	Q → R	   2, 3 Modus Ponens	
   6.	|	R	      4, 5 Modus Ponens	
   7.	P → R	    3–6 Conditional derivation
   ```
   <img width="344" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/49087cc3-0429-430d-8819-ff122eb3cafd">

2. Write a proof using proof-checker to show that this argument is valid:
   ```
   P → (Q ∧ (Q → R)
   ________________
   P → R
   ```
   Proof:
   ```
   Construct a proof for the argument: P → [Q ∧ (Q → R)] ∴ P → R

   1.	P → [Q ∧ (Q → R)]		
   2. |		P		
   3.	|	Q ∧ (Q → R)	1, 2 Modus Ponens	
   4.	|	Q	3 Simplification	
   5.	|	Q → R	3 Simplification	
   6.	|	R	4, 5 Modus Ponens	
   7.	P → R	2–6 Conditional derivation	

   ```
   <img width="333" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/6da3a1c3-cbc1-4390-9819-f4dbd80f669f">

3. Write a proof using proof-checker to show that this argument is valid:
   ```
   (P ∧ Q) → R
   _____________
   P → (Q → R)
   ```
   Proof:
   ```
   Construct a proof for the argument: (P ∧ Q) → R ∴ P → (Q → R)

   1.	(P ∧ Q) → R		
   2.	|	P		
   3.	||		Q		
   4.	||		P ∧ Q	  2, 3 Adjunction	
   5.	||		R	     1, 4 Modus Ponens	
   6.	|	Q → R	     3–5 Conditional derivation	
   7.	P → (Q → R)	   2–6 Conditional derivation
   ```
   <img width="331" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/989d3a1c-3aa3-4330-8c28-7b3c80e4974a">

4. Using a truth table, check the validity of this argument:
   ```
   ¬P
   _____
   P → Q
   ```
   Here is the truth table that shows that the conclusion is true when the premise is true. So, the argument    is valid.
   
    |    P    |     Q    |     ¬P     |      P → Q    |
    | ------- | -------- | ---------- | --------------| 
    |    T    |     T    |     F      |       T       | 
    |    T    |     F    |     F      |       F       |
    |    F    |     T    |     T      |       T       |
    |    F    |     F    |     T      |       T       |
   

## Conditional Derivation, Theorem

1. Show that P → P is a tautology. (Hint: Use truth table)
   Tautology is a semantic concept. To show that a sentence is a tautology, generate a truth table showing      that it is always true. Here is the truth table showing the P->P is a tautology:
   
    |  P  |  *P → P*  |
    | --- | --------- |
    |  T  |     T     |
    |  F  |     T     |

2. Show that P → P is a theorem. (Hint: use proof-checker)
   Theorem in logic is a syntactic concept.  To show that a sentence is a theorem, create a proof with no       premises and the sentence as the conclusion. Here is the screenshot of the proof:

   ```
   Construct a proof for the argument: P ∴ P

   1.	P		
   2.	|	P		
   3.	|	P	  1 Repeat	
   4.	P → P	  2–3 Conditional derivation
   ```
   <img width="275" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/7e5dfef3-3b89-4e2e-b108-35e431ebacb3">

3. Show that P → (Q → P) is a theorem.

   ```
   Construct a proof for the argument: P ∴ Q → P

   1.	P		
   2.	|	Q		
   3.	|	P	  1 Repeat	
   4.	Q → P	  2–3 Conditional derivation
   ```
   <img width="281" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/28c15c50-e72b-4403-9e36-4820157d4094">

4. Show that ¬Q → (Q → P) is a tautology.

    |    P    |     Q    |     ¬Q     |     Q → P     |   ¬Q → (Q → P)   |
    | ------- | -------- | ---------- | --------------| ---------------- |
    |    T    |     T    |     F      |       T       |        T         | 
    |    T    |     F    |     T      |       T       |        T         |
    |    F    |     T    |     F      |       F       |        T         |
    |    F    |     F    |     T      |       T       |        T         |

5. Write a proof using proof-checker to show that this argument is valid:

   ____________________
   (¬P → Q) → (¬Q → P)

   ```
   Construct a proof for the argument: ∴ (¬P → Q) → (¬Q → P)

   1.	|	¬P → Q		
   2.	||		¬Q		
   3.	||		¬¬P	     1, 2 Modus Tollens	
   4.	||		P	        3 Double Negation	
   5.	|	¬Q → P	     2–4 Conditional derivation	
   6.	(¬P → Q) → (¬Q → P)	1–5 Conditional derivation
   ```
   <img width="314" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4f568e3b-5ee2-4720-872a-36a3f0893eaf">

## Disjunction

1. Show that Q ∨ ¬Q is a tautology.

    |    Q    |     ¬Q   |   Q ∨ ¬Q   |     
    | ------- | -------- | ---------- | 
    |    T    |     F    |     T      |      
    |    F    |     T    |     T      |

 2. Write a translation key for the following sentence, then translate it to our logical language:
   *I don't want mushrooms and I don't want pineapple.*
    ```
    One solution: (we're talking about pizzas, BTW)
      P: I want mushrooms
      Q: I want pineapple
      Translation: ¬P ^ ¬Q
    ```
    
3. In the previous problem, did you use disjunction in your logical sentence?  Could you have used    
   disjunction in your logical sentence?
   ```
   An alternative translation is ¬(P v Q).  It means the same thing as ¬P and ¬Q.
   ```
   
4. Do you think this argument is valid?  Prove it with the proof checker.
   Proof:
   ```
   ¬P v Q
   P
   Q → R
   ________
   R
   ```
   ```
   Construct a proof for the argument: ¬P ∨ Q, P, Q → R ∴ R

   1.	¬P ∨ Q	(Given)	
   2.	P		   (Given)
   3.	Q → R		(Given)
   4.	¬¬P	   2 Double Negation	
   5.	Q	    1, 4 Modus Tollendo Ponens	
   6.	R	    3, 5 Modus Ponens
   
   <img width="299" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/1f178f99-8906-457b-ba5f-1c91bf86c968">




    


   


   


