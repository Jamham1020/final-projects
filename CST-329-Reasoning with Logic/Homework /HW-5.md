# HW 5 Reading #1

1. True/False: Using our syntax for first-order logic (FOL), the following is a well-formed formula:

    ```a v b```

        [Note (for this question and the following questions): Refer to the definition of WFF in the book and notice the difference between the syntax of propositional logic and FOL]

    ``` False, names like a, b must appear within predicates -- they do not have the truth value on their own. ``` 

2.  True/False: Using our syntax for first-order logic, the following is a well-formed formula:

   ```F(a) v F(b)```

    Assume F is a predicate of arity 1.

    ``` ANS: True, F(a) and F(b) are both wffs, so F(a) v F(b) is one, too.

3. True/False: Using our syntax for first-order logic, the following is a well-formed formula:

    ```F(x) ∧ F(y)```

    Assume F is a predicate of arity 1.

    ```ANS: True, F(x) and F(y) are both wffs, so F(x) ^ F(y) is one, too. Note, this is not a sentence, because x and y are free variables, but it is well formed.```

4. Using our syntax for first-order logic, in which of these formulas is x bound (every time it is used)?

        [Note: notice the scope of the quantifiers, especially with the use of parentheses]
   ```
   A. G(y, b)
   B. (∀xG(x)) ∨ (F(x))
   ** C. ∃x(F(y) → F(x)) ** [y isn't bound, but we were only asking about x. A formula can contain both bound and free variables.]
   ** D. ¬(∃x(F(x) → G(x))) ** [Using the not symbol to modify a quantifier isn't the most proper way of writing a formula, but x is bound, regardless. This would be more properly written as ∀x(¬(F(x) → G(x))), which can be further simplified by expressing how not applies to conditionals.]
   ```

5. Using our syntax for first-order logic, in which of these formulas is x free?
   ```
   A. ∀x(∀yG(x,y))
   ** B. ∀yG(x, y) **
   C. ∀xG(x, y)
   ```
   
6.   True/False: Using our first-order logic syntax, the following is a sentence:
      ```
      ∀x(G(y) → G(x))

        [Note: Refer to the definition of FOL sentence in chapter 12]
      ```
      ``` ANS: False, it is a WFF, but not a sentence, because y appears free.```

7. Using our syntax for first-order logic, which of the following are sentences?

    Assume F and G are predicates with arity 1.
   ```
   A. F(y) ∧ ¬(∃xF(x))
   B. ∀x(G(x) → H(x))
   C. ∀x(F(x) → F(y))
   ** D. ¬(∃xF(x)) ** - the more proper way to write this statement would be ∀x(¬F(x))
   ```

8. True/False: An argument can be sound even if it is not valid.
   ```ANS: FALSE, every sound argument is valid.```


9. True/False: If an argument has zero premises, then it cannot be valid.
    ``` ANS: FALSE ```

10.  Write a translation key for the following sentence (use propositional logic):

      ``` "I will not get a Frappuccino if I go to Starbucks today" ```

        ```
          Your Answer:
          P: I will go to Starbucks today

          Q: I will get a Frappuccino

           P -> ~Q
        ```

# HW 5 Reading #2

1. Let the domain of discourse be all natural numbers (0, 1, 2, 3, ...)

    Translate "some natural numbers are odd" using this translation key:

    F(x):    x is even

    G(x):   x is odd

    H(x,y):   x is one larger than y

    a:  the number 1

    b:  the number 2

       ``` ANS: ∃xG(x) ```

2. Let the domain of discourse be all people who work.

    Translate "Alex is the boss of Bob" using this translation key:

    F(x,y):   x is the boss of y

    G(x,y):   x is a co-worker of y

    a:    Alex

    b:   Bob

    c:   Carmen

       ``` ANS: F(a,b)```

3. Let the domain of discourse be all people who work.

    Translate "No one is the boss of Carmen" using this translation key:

    F(x,y):   x is the boss of y

    G(x,y):   x is a co-worker of y

    a:    Alex

    b:   Bob

    c:   Carmen

       ``` ANS: ∀x(¬F(x,c))

4. Let the domain of discourse be all people who work.

    Translate "Carmen is the boss of someone who is the boss of Bob" using this translation key:

    F(x,y):   x is the boss of y

    G(x,y):   x is a co-worker of y

    a:    Alex

    b:   Bob

    c:   Carmen

       ``` ANS:  ∃x(F(c,x) ∧ F(x,b)) ```

5. Let the domain of discourse be all natural numbers (0, 1, 2, 3, ...)

    Translate "no odd numbers are even numbers" using this translation key:

    F(x):    x is even

    G(x):   x is odd

    H(x,y):   x is one larger than y

    a:   the number 1

    b:  the number 2

        ``` ANS:  ∀x(G(x) → ~F(x)) ```

6. Let the domain of discourse be all natural numbers (0, 1, 2, 3, ...)

    Translate "Every odd number is one larger than some even number" using this translation key:

    F(x):    x is even

    G(x):   x is odd

    H(x,y):   x is one larger than y

    a:   the number 1

    b:  the number 2

      ```ANS: ∀x(G(x) → ∃y(F(y) ∧ H(x, y)))```
           <img width="283" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/b9ab2ab7-e424-45be-baa5-aab403d9b28b">


7. Let the domain of discourse be all animals.

    Translate "Only dogs like basketball movies" using this translation key:

    D(x):   x is a dog

    B(x):    x likes basketball movies

    F(x,y):    x is faster than y

    p       Pepper

    q       Quincy

    r        Rascal

   Note: Thinking about the use of the word only and the meaning of "only if" will help you solve this     
   without too much unnecessary work

       ``` ANS: ∀x(B(x) → D(x))```

8. Let the domain of discourse be all animals.

   Translate "No dog is faster than Pepper" using this translation key:

   D(x):   x is a dog

   B(x):    x likes basketball movies

   F(x,y):    x is faster than y

   p       Pepper

   q       Quincy

   r        Rascal

       ``` ANS: ∀x(D(x) → ~F(x, p)) ```

9. Translate "No dogs that like basketball movies are faster than Rascal" using this translation key:

   domain: all animals

   D(x):   x is a dog

   B(x):    x likes basketball movies

   F(x,y):    x is faster than y

   p       Pepper

   q       Quincy

   r        Rascal

   ``` ANS: ∀x((D(x) ∧ B(x)) → ~F(x, r)) ```

   
10. Translate "Some dog owners are not dogs" using this translation key:

    domain: dogs and people

    D(x):    x is a dog

    F(x,y):   x is a friend of y

    O(x,y):  x owns y

    a: Alex

    b: Bob

    c: Ciri   

       ``` ANS: ∃x∃y(O(x, y) ∧ D(y) ∧  ~D(x))
   
   
       
# Quiz 5 (Ch 11 - 12)

1. Create and prove the following argument using proof-checker.org.

   ```
   (P ∧ Q) → R
   _____________
   P → (Q → R)
   ```
   ```
   Construct a proof for the argument: (P ∧ Q) → R ∴ P → (Q → R)

        1.	(P ∧ Q) → R		
        2.	|	P		
        3.	||	Q		
        4.	||	P ∧ Q	    2, 3 Adjunction	
        5.	||	R	        1, 4 Modus Ponens	
        6.	|	Q → R	    3–5 Conditional derivation	
        7.	P → (Q → R)	    2–6 Conditional derivation
   ```
    <img width="329" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/e7f24348-d3de-40ea-9531-5c094448f47d">

2. Create and prove the following argument using proof-checker.org.

   ```
   (P → Q) ∧ ~(P → Q)
   _____________
   ~P
   ```
   ```
   Construct a proof for the argument: (P → Q) ∧ (P → ¬Q) ∴ ¬P

        1.	(P → Q) ∧ (P → ¬Q)		
        2.	P → Q	    1, Simplification	
        3.	P → ¬Q	    1 Simplification	
        4.	| ¬¬P		
        5.	| P	        4 Double Negation	
        6.	| Q	        2, 5 Modus Ponens	
        7.	| ¬Q	    3, 5 Modus Ponens	
        8.	¬P	        4–7 Reductio Ad Absurdum
   ```
   <img width="328" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/0a665cfa-4d85-4210-b108-7ed8a1f8ead9">

3. Using our syntax for first-order logic, x is free in which of these formulas?

   ```
   ** A. F(x) ∧ G(x, b) **
   ** B. ∃y(G(y) ∨ F(x)) **
   C. ∃x(G(x) ∨ F(y))
   D. ∀x(F(y) ∨ F(x))
   ```

4. TRUE/FALSE: Using our first-order logic syntax, the following is a sentence:
   
   ``` ANS: True, it is wff, the only variable that appears is x, and x is bound in the formula.```

5. Write a logical sentence for

    ``` "It's not true that if it's raining then the sky is not clear" ```

    using the following translation key:

    P: "it's raining"

    Q:  "the sky is clear"

    Note: Please notice the translation key structure to recognize whether the logic is represented in     
    propositional or first-order logic.

   ``` ANS: ~(P -> ~Q), ~(P -> ~Q), ~(P -> ~ Q), ~(P -> ~(Q))  ```

6. Let the domain be all natural numbers (0, 1, 2, 3, ...)

    Translate "nothing is both odd and even" using this translation key:

    F(x)    x is even

    G(x)   x is odd

    H(x,y)   y is x + 1

    a   the number 1

    b  the number 2

       ``` ANS: ∀x(¬F(x) ∧ G(x))) ```

7. Let the domain be all natural numbers (0, 1, 2, 3, ...)

    Translate "nothing is itself plus 1" using this translation key:

    F(x)    x is even

    G(x)   x is odd

    H(x,y)   y is x + 1

    a   the number 1

    b  the number 2

       ``` ANS: ∀x(¬H(x, x)) ```

8. Translate "Some dogs that like basketball movies are faster than Rascal" using this translation key:

    (note that Rascal is not necessarily a dog)

    domain: all animals

    D(x)   x is a dog

    B(x)    x likes basketball moves

    F(x,y)    x is faster than y

    p       Pepper
    
    q       Quincy

    r        Rascal

       ``` ∃x(D(x) ∧ B(x) ∧ F(x, r))
           This sentence has the pattern "some phi is psi", which in logic is "
         (phi(x) ^ psi(x))".

        In this case, phi(x) is "x is a dog that likes basketball movies" and psi(x) is "x is faster than 
        Rascal".
      ```

9. If an argument is valid, then it is sound.
    ``` False, The definition of a sound argument: a valid argument in which the premises are true. So every sound argument is valid, but not all valid arguments are sound. ```



   	


   
   

   
