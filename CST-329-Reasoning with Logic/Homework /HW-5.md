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



   
