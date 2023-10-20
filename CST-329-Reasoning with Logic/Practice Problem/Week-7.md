# Relations, functions, identity

1. Write a FOL formula to express that predicate F (with arity 2) is reflexive.
``` ∀xF(x,x)```

2. Write a FOL formula to express that predicate F (with arity 2) is transitive.
``` ∀x∀y∀z((F(x,y) ∧ F(y, z)) → F(x, z))```

3. Suppose our domain D is three objects {P, Q, R}. Here is a binary relation on the domain:

```
   {(P,Q), (Q,Q), (Q,R), (R,P), (R,R)}.
    Which of the following properties hold for this relation?
   Symmetry
   Transitivity
   Reflexivity
   ** None **
```

4. Prove this theorem (no premises) using the proof checker:

    ``` ∀x∀y∀z(((x = y) ∧ (y = z)) → (x = z)) ```
     <img width="349" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/6787e43d-cc66-44b8-96ea-bf3537f220d5">

5. Translate "there are no more than two apples" to logic.  Use the translation key "F(x):  x is an apple". Note that we don’t have inequalities so doing this with logic isn’t the easiest, but it helps us turn a computer’s favourite language (true/false statements) into mathematical ideas.

    ``` ∀x∀y∀z((F(x) ∧ F(y) ∧ F(z)) → ((x = y) v (x = z) v (y = z)))```
    ``` in other words, if we identify an apple three times, at least two of them must have been the same apple. ```

6. Translate "there are exactly two apples" to logic.  Use the translation key "F(x):  x is an apple".

    ```∃x∃y((F(x) ∧ F(y) ∧ ~(x=y)) ∧ (∀z (F(z) → ((x=z) v (y=z))))```
   
    ```
    In other words, there are two things that are both identified as apples AND they’re not the same things, AND if we identify anything as an apple it must be one of those two things. *Phew, that’s exhausting! But for computers it’s just 1s and 0s!* Note: I write this as above with not all quantifiers in front, because it makes more sense when read.
    ```
    I could also write it like so: 
    ``` ∃x∃yz((F(x) ∧ F(y) ∧ ~(x=y)) ∧ (F(z) → ((x=z) v (y=z))) ```

# Examples, first-order logic 2

1. Use the following translation key:
   ```
    domain: dogs and people
	  D(x)	x is a dog
	  F(x,y)	x is a friend of y
	  O(x,y)	x owns y
	  a	Alex
	  b 	Bob
	  c	Cin
    ```
   
    For each problem, translate the statement to first-order logic. 
    - Bob is not a dog. ```~D(b)```
    - All of Bob's friends are dogs. ```∀x(F(x,b) → D(x))```
    - Every dog is a friend to someone. ```∀x∃y(D(x) → F(x,y)) (if you added an extra argument to make sure y was not a dog, that’s fine, but I left the overly general version here)```
    - Some dog has no dog friends. ```∃x∀y(D(x) ∧ (D(y) → ~F(x,y))) or ∃x∀y(D(x) ∧ (F(x,y) → ~D(y))```
    - Some dogs do not have owners. ```∃x∀y(D(x) ∧ ~O(y,x))```
    - Some person is not a dog owner. ```∃x∀y(~D(x) ∧ (D(y) → ~O(x,y)))```
    
  
   
