# Practice Problems (Week 5)

## Limitations of Propositional Logic and Quantifiers

1. Write a translation key for the text below showing the proper names and predicates.

Bob is a poriferan.

  ```
  Translation Key:
  F(x): x is a poriferan,
  a: Bob
  F(a) means "Bob is a poriferan"
  ```

2. Write a translation key for the following logical sentence:
  G(a,b)

  Remember, G is a predicate, and 'a' and 'b' are objects.
  
  To do this, provide some text for each item in the sentence.  Once you've finished, write the translation from the logic to English.
  ```
  Translation Key:
  a: Tom
  b: Bob
  G(x,y): x is taller than y
  Translation from the logic to English:
  G(a,b): Tom is taller than Bob
  ```

3. Repeat the steps of the previous problem but for the logical sentence F(a) ^ G(a).
   ```
   Translation Key:
    a: Tom
    F(x): x is human
    G(x): x is mortal
    Translation from the logic to English:
    F(a) ^ G(a): Tom is human and mortal
   ```

4. Define 'proper name' and 'predicate' in your own words.  Write down your definitions.
   ```
     Proper name refers to a single person or thing. Predicate refers to a property of an object or relationship among objects.
   ```
   
## First-order logic quantifiers

Please work on the following problems.  Assume the following translation key:

H(x):    x is human

M(x):    x is mortal

a:     Ana

b:     Bubba

1. Translate each of the following sentence to logic:
   a. Bubba is mortal: ```M(b)```
   
   b. if Bubba is mortal then Ana is mortal: ```M(b) -> M(a)```
   
   c. Some humans are mortal: ```∃x(H(x) ∧ M(x))```

3. Translate these two formulas to English using some translation key.  Carefully explain the difference in their meaning.
   
   a. ∃x(H(x) ∧ M(x)): ```Some humans are mortals```
   
   b. ∃x(H(x) → M(x)): ```For some x, if x is human, then x is mortal.```

   ```Difference: In sentence a, there exist x’s that are both human and mortal. In sentence b, some x that are human are also mortal. Logically the second sentence will be true even if x is not human.```

4. Follow the steps of problem 2 again, but use these sentences:
   
   a. ∀x(H(x) ∧ M(x)): ```Everything is human and mortal```

    b. ∀x(H(x) → M(x)): ```All human are mortals```
   ```Difference: In sentence a, humanity and mortality are both qualities of x. In sentence b, mortality is a quality of humanity. Logically the second sentence is true even if x is not human.```

## Syntax of first-order logic

1. Which of the following are well-formed formulas?
   ```
      ** a. F(a,x) **
      ** b. G(a) ∧ F(a,b) **
      ** c. ∀xF(a) **
      d. ~(∃x)
      e. G(a ∧ b)
   ```

2. For which of the following formulas is x free?
   ```
     ** a. ~F(a,x) **
     b. ∃x~F(a,x)
     ** c. ∃y(F(x) ∧ G(y)) **
   ```

3. For which of the following formulas is x free?
   ```
    a. F(a)
    b. ∀x(F(x) ∧ G(y))
    ** c. ∃y(F(x) ∧ G(y)) **
   ```

4. Which of these are sentences in first-order logic?
  ```
  a. ∀y(F(x) ∧ G(y)) [No, x is free and this is therefore an open formula]
  b. ¬(∃x(∃yF(x, y))  [FOL sentence as it is WFF and no free variable]
  c. ∃x(∀y(x ∨ y)) [No, (x v y) is not WFF as x and y don’t have truth values without a predicate]
  d. ∀x(G(x,y)) [No, as y is free]
  ```

## Semantics of first-order logic

Part 1: Translate the following expressions into first-order logic using the translation key below..  Don't be concerned that some of these sentences are obviously false.

Translation key:
domain: terrestrial organisms
M(x): x is a mammal
L(x): x lays eggs
C(x): x has a chestnut color
H(x): x is a horse

1. All horses are mammals.
   ```∀x(H(x) → M(x))```
   
2. Some horses are mammals
  ```∃x(H(x) ∧ M(x))```

3. No horses are mammals.
  ```∀x(H(x) → ¬M(x))```
  ```¬∃x(H(x) ∧ M(x)) (This isn’t proper, as “there does not exist” can always be described using “for all”)```

4. Some horses are not mammals.
  ```∃x(H(x) ∧ ¬M(x))```

5. Some mammals lay eggs, and some mammals do not.
  ```(∃x(M(x) ∧ L(x))) ∧ (∃x(M(x) ∧ ¬L(x)))```

6. Some chestnut horses are mammals that don't lay eggs
  ```∃x((C(x) ∧ H(x) ∧ M(x) ∧ ~L(x))```

7. No chestnut horses are mammals that lay eggs.
  ```∀x((C(x) ∧ H(x)) → ¬(M(x) ∧ L(x)))```

Part 2: Here is a translation key:
domain: living people
a: Alex
b: Bob
c: Cara
M(x): x is a mechanic
N(x): x is a nurse
L(x,y): x likes y
T(x,y): x is taller than y
Translate the following expressions into first-order logic.  Write down your answers!

8. Cara is taller than Bob. ```T(c, b)```
9. Alex likes no one. ```∀x(¬L(a, x))```
10. Someone likes themself. ```∃x(L(x,x))```
11. There is someone Bob does not like. ```∃x(¬L(b, x))```
12. There is someone that Bob likes and Cara doesn't like. ```∃x(L(b, x) ∧ ¬L(c,x))```

## Examples, first-order logic

1. Use the following translation key:

F(x): x is a female
G(x): x is male
H(x): x is human
T(x): x is from Texas
S(x): x is a computer scientist
L(x): x is a mammal
M(x): x is mortal

Translate the sentences below to logic:

- No one is a male computer scientist from Texas. ```∀x¬(G(x) ∧ S(x) ∧ T(x)) (This can be written using ¬∃x as well)```
- All male humans are mortal mammals. ```∀x((G(x) ∧ H(x)) → (L(x) ∧ M(x)))```
- Some female humans are computer scientists who live in Texas. ```∃x(F(x) ∧ H(x) ∧ S(x) ∧ T(x))```
- No male human is a computer scientist who lives in Texas. ```∀x((M(x) ∧ H(x)) → ¬(S(x) ∧ T(x)))```

2. Here are some more translation problems.  Assume the domain is "students at CSUMB", and the translation key is:

A(x):	x is an adult
B(x): 	x is a business major
C(x): 	x lives on campus
L(x):	x belongs to a club
U(x):	x is an upper-division student

- Every CSUMB student is an adult. ```∀xA(x)```
- Some students who live on campus are upper-division students ```∃x(C(x) ∧ U(x))```
- Some CSUMB students are not adults. ```∃x(¬A(x))```

- All business majors belong to a club.```∀x(B(x) → L(x))```

- No business majors who live on campus are adults.```∀x((B(x) ∧ C(x)) → (¬A(x)))```

- Every upper division student is a business major who lives off campus.```∀x(U(x) → (B(x) ∧ ¬C(x))```

- Some adult business majors who live on campus are upper-division students that don't belong to clubs. ```
∃x(A(x) ∧ B(x) ∧ C(x) ∧ U(x) ∧ ¬L(x))```















  
