# HW 7 Reading #1
1. let the domain of discourse be all animals.
   
  Translate "Some animals are dogs" using this translation key:
  
  D(x): x is a dog
  
  B(x): x likes basketball movies
  
  F(x,y): x is faster than y
  
  p: Pepper
  
  q: Quincy
  
  r: Rascal
  ```ANS: ∃x (D(x))```

2. let the domain of discourse be all animals.
   
  Translate "Any animal that dislikes basketball movies is faster than Pepper" using this translation key:
  
  D(x): x is a dog
  
  B(x): x likes basketball movies
  
  F(x,y): x is faster than y
  
  p: Pepper
  
  q: Quincy
  
  r: Rascal
  ```ANS: ∀x (~B(x) → F(x, p))```

3. Translate "Some of Cin's friends are not dog owners" using this translation key:

  domain: dogs and people
  
  D(x): x is a dog
  
  O(x,y): x owns y
  
  F(x,y): x is friends with y
  
  a: Alison
  
  b: Bob
  
  c: Cin
  ```∃x(F(x,c) ∧ ∀y(¬D(y)∨¬O(x,y)))```

4. Let the domain of discourse be all people who work.

  Translate "Someone is a boss" using this translation key:
  
  F(x,y): x is the boss of y
  
  G(x,y): x is a co-worker of y
  
  a: Alex
  
  b: Bob
  
  c: Carmen
  ```∃x∃y(F(x,y))```

5. Let the domain of discourse be all people who work.

  Translate "No one is their own boss" using this translation key:
  
  F(x,y): x is the boss of y
  
  G(x,y): x is a co-worker of y
  
  a: Alex
  
  b: Bob
  
  c: Carmen
  ```∀x¬F(x,x)```

6. Translate "no upper division course is a prereq for CST329" using this translation key:

  domain: all course ever offered at CSUMB.
  
  L(x): x is a lower-division course
  
  U(x): x is an upper-division course
  
  P(x,y): x is a pre-requisite for y
  
  a: CST329
  
  b: CST238
  
  c: CST334
  ```∀x(U(x)→¬P(x,a))```

7. Let the domain of discourse be all natural numbers (0, 1, 2, 3, ...)

  Translate "forall x and y, if y = x + 1, then either x or y is odd" using this translation key:
  
  F(x): x is even
  
  G(x): x is odd
  
  H(x, y): y is one greater than x
  
  a: the number 1
  
  b: the number 2
  ```∀x∀y(H(x,y)→(G(x)∨G(y)))```

8. What is an accurate translations of "Everyone is related to someone who trusts all politicians"?

  This is the translation key:
  
  The domain of discourse is all people.
  
  P(x): x is a politician
  
  K(x, y): x knows y
  
  F(x, y): x trusts y
  
  R(x, y): x is related to y

    A. ∀x∃y∀z(R(x,y) ∧ (P(z) → F(y,z)))
    B. ∀x∀y∃z(R(x,y) → (P(z) ∧  F(y,z)))
    C. ∀x∃y∀z(R(x,y) → (P(z) ∧  F(y,z)))
    D. ∀z∀x∃y(P(z)  → (R(x, z) ∧ F(z, y)))

9. Translate: "No one trusts someone who trusts everyone" using the following translation key.

  The domain of discourse is all people.
  
  P(x): x is a politician
  
  K(x, y): x knows y
  
  F(x, y): x trusts y
  
  R(x, y): x is related to y
  ```∀y(∀zF(y,z) → ¬∃xF(x,y)) or ¬∃y(∀zF(y,z) ∧ ∃xF(x,y))```

10. Translate "there is exactly one apple" to first-order logic. Use F(x) to mean "x is an apple."

    ```∃x(F(x) ∧ ∀y(F(y) → y = x))```

11. Translate "there is more than one apple" to first-order logic.  Use F(x) to mean "x is an apple".
    ```∃x∃y(F(x) ∧ F(y) ∧ x ≠ y)```





# HW 7 Proofs (13.1 - 13.5)

### 13.1 

 ```
  Construct a proof for the argument: ∴ ∀x(Fx ∨ ¬Fx)

    1.|	¬(Fa ∨ ¬Fa)		
    2.||	¬¬Fa		
    3.||	Fa	            2 Double Negation	
    4.||	Fa ∨ ¬Fa	      3 Addition	
    5.|		¬(Fa ∨ ¬Fa)	    1 Repeat	
    6.|		¬Fa	            2–5 Reductio Ad Absurdum	
    7.|		Fa ∨ ¬Fa	      6 Addition	
    8.|		¬(Fa ∨ ¬Fa)	    1 Repeat	
    9.	Fa ∨ ¬Fa	        1–8 Reductio Ad Absurdum	
    10.	∀x(Fx ∨ ¬Fx)	    9 Universal derivation
  ```

  <img width="293" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4ced4f00-4e59-4944-b481-ffcd46f443f8">


### 13.2

  ```
  Construct a proof for the argument: ∀xFx ∧ ∀xGx ∴ ∀x(Fx ∧ Gx)

    1.	∀xFx ∧ ∀xGx		
    2.	∀xFx	          1 Simplification	
    3.	∀xGx	          1 Simplification	
    4.	Fa	            2 Universal instantiation	
    5.	Ga	            3 Universal instantiation	
    6.	Fa ∧ Ga	        4, 5 Adjunction	
    7.	∀x(Fx ∧ Gx)	    6 Universal derivation
  ```
  <img width="343" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/e2c1d530-acf8-4adb-bff2-558746e8e934">


### 13.3

  ```
  Construct a proof for the argument: Fa ∨ Gb, Gb → b = c, ¬Fa ∴ Gc

    1.	Fa ∨ Gb		
    2.	Gb → b = c		
    3.	¬Fa		
    4.	Gb	      1, 3 Modus Tollendo Ponens	
    5.	b = c	    2, 4 Modus Ponens	
    6.	Gc	      4, 5 Substitution of identicals	
  ```
  <img width="349" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/a0f52d17-5116-421c-a301-bc57d19e5963">

### 13.4

  ```
  Construct a proof for the argument: ∀x∀y(Fxy → x = y) ∴ Fab → Fba

    1.	∀x∀y(Fxy → x = y)		
    2.	∀y(Fay → a = y)	    1 Universal instantiation	
    3.	Fab → a = b	        2 Universal instantiation	
    4.|		Fab		
    5.|		a = b	            3, 4 Modus Ponens	
    6.|		Fbb	              4, 5 Substitution of identicals	
    7.|		Fba	              5, 6 Substitution of identicals	
    8.	Fab → Fba	          4–7 Conditional derivation
  ```
  <img width="346" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ee5adc7e-8f24-4db0-a245-538e7c995cec">

### 13.5

  ```
  Construct a proof for the argument: ∀x∀y(x = y → Rxy) ∴ ∀xRxx

    1.	∀x∀y(x = y → Rxy)		
    2.	∀y(a = y → Ray)	    1 Universal instantiation	
    3.	a = a → Raa	        2 Universal instantiation	
    4.	a = a	              Identity introduction	
    5.	Raa	                3, 4 Modus Ponens	
    6.	∀xRxx	              5 Universal derivation
  ```
  <img width="330" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/5fe4150d-f17e-4c9c-b602-61097cd57281">


# HW 7 Reading #2

1. I translated:

    ```"While I like movies, I don't like comics" ``` to the logical sentence ```P ^ ~Q```

    Fill in the translation key to make my translation correct.

    ```
        P: I like movies

        Q: I like comics
    ```

2. Suppose we have these formulas:

    ```~(P -> Q), P```

    Can modus ponens be applied?
   ```
     A. yes, the sentence Q can be derived
     B. yes, the sentence ~Q can be derived
     ** C. no **
   ```

3. Which of the following sentences are declarative?

   ```
   A. Please use a red pencil.
   B. When is the presidential election?
   ** C. The first day of the year is Jan. 1 **
   ** D. Every night I have a cup of tea. **
   ```

4. Using our syntax for first-order logic, in which of these formulas is x free?

   ```
   A. ∃y∃xF(x, y)
   ** B. H(x) v (∀xF(x) v G(x))) ** 
   C. ∀x∃yF(x, y) → G(x, y))
   ** D. F(x) **
   As always, one of these answers shows why putting quantifiers out front and using different variables for variables that have different quantifiers makes everything clearer.

    ```

5. Which of the following sentences is not contingent?
   ```
   A. ~P ^ (P v Q)
   B. P ^ Q
   C. ~(P ^ Q)
   ** D. P ^ (~P ^ ~Q) **
   ```

6. There is one error in the proof below.  Give the line number of the error.
   <img width="311" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/7ac321db-8b58-48a2-a4ea-f5c01a6d634b">
    ```The problem is line 4.  That is not a legal use of the simplification rule, which is used with conjunction, not disjunction.```

7. Which theorem (from T1 to T10, chapter 9) does this sentence instantiate?

  ```((~P -> (P -> Q)) -> (~(P -> Q) -> ~~P))```
      ```
        T1 (P v ¬P)
        T2 (¬(P→Q) ↔ (P^¬Q))
        T3 (¬(P v Q) ↔ (¬P ^ ¬Q))
        T4 ((¬P v ¬Q) ↔ ¬(P ^ Q))
        T5 (¬(P ↔ Q) ↔ (P ↔ ¬Q))
        T6 (¬P → (P → Q))
        T7 (P → (Q → P))
        T8 ((P→(Q→R)) → ((P→Q) → (P→R)))
        T9 ((¬P→¬Q) → ((¬P→Q) →P))
        T10 ((P→Q) → (¬Q→¬P)) 
      ```
    Write a theorem name (such as T1).
    
    ```ANS: The sentence instantantiates theorem T10, where P is replaced by ~P, and Q is replaced by P -> Q.```

8. P, Q, and R are atomic sentences.  Write a logical sentence that captures

    ```"if P implies Q, then R"```
     ```ANS: (P → Q) → R```

9. True or False: (P v (Q ^ R)) ^ (~Q v ~R) is a tautology.

   You may want to use a truth table in answering this question.

    ```False, It is not a tautology.  For example, it's false if P is false, Q is true, and R is false.```

10. True or False: The sentences ~(P v Q) and ~P v ~Q are logically equivalent.

    Use a truth table to find out.

    ```False, If P is true and Q is false then the first formula is false but the second formula is true.```

11. True or False: Using our syntax for first-order logic, the following is a well-formed formula
    ```∀x(F(x) v F(b)); Assume F is a predicate of arity 1```
      ```True, The formula follows the syntax of a well-formed formula.```

12. The following argument is valid:  (the argument has no premises, rely on the specific definition of valid)

    ```
    _______
    P -> P
    ```
    ```True,The conclusion is true, so if the premises are true (there are no premises so they can't be false) the conclusion is true, and therefore it's valid.```

13. Suppose our domain D is three objects {P, Q, R}. Here is a binary relation on the domain:

    ```{(P,P), (P,Q), (Q,Q), (Q,R), (R,P), (R,R)}.```

    Which of the following properties hold for this relation?
    ``` 
    ** A. Transitivity **
    B. Symmetry
    C. Reflexivity

14. Let the domain of discourse be all courses ever offered at CSUMB.
    ```
    Translate "no upper-division class is a prereq for a lower-division class" using this translation key:

    L(x):    x is a lower-division course

    U(x):    x is an upper-division course

    P(x,y):    x is a pre-requisite for y

    a:    CST329

    b:    CST238

    c:     CST334
    ```

    ```∀x(U(x) → ¬∃y(P(x,y) ∧ L(y)))```

# Quiz 7 (Ch 12 - 15)

1.
  ```
    Construct a proof for the argument: ∀xFxx ∴ ∃x∃yFxy

      1.	∀xFxx		
      2.	Faa	1 Universal instantiation	
      3.	∃yFay	2 Existential generalization	
      4.	∃x∃yFxy	3 Existential generalization
  ```
  <img width="281" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ecde422f-395e-4927-a650-5563a275016f">

2.
  ```
  Construct a proof for the argument: ∀x(Fx ∨ Gx) ∴ ¬Fa → Ga

    1.	∀x(Fx ∨ Gx)		
    2.	Fa ∨ Ga	1 Universal instantiation	
    3.		¬Fa		
    4.		Ga	2, 3 Modus Tollendo Ponens	
    5.	¬Fa → Ga	3–4 Conditional derivation	
  ```
  <img width="314" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/1e6b98b0-3b26-48a8-a844-a086cc2d87e9">

3.




