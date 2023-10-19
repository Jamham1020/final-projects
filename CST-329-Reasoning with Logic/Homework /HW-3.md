# HW 3 Proofs #1 (6.1-6.6, 7.2)

### 6.1 
```
Construct a proof for the argument: P → (R → S), ¬S ∧ P ∴ ¬R

1.	P → (R → S)		   (Given)
2. ¬S ∧ P		         (Given)
3.	¬S	        2 Simplification	
4.	P	          2 Simplification	
5.	(R → S)	    1, 4 Modus Ponens	
6.	¬R	        3, 5 Modus Tollens	
```
<img width="320" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/d416029c-5c34-45e3-ad9d-7d94b816297c">

### 6.2
```
Construct a proof for the argument: (R → ¬P) ∧ (¬S → ¬R), R ∴ S ∧ ¬P

1.	(R → ¬P) ∧ (¬S → ¬R)		
2.	R		
3.	R → ¬P	     1 Simplification	
4.	¬S → ¬R	     1 Simplification	
5.	¬P	         2, 3 Modus Ponens	
6.	¬¬R	         2 Double Negation	
7.	¬¬S	         4, 6 Modus Tollens	
8.	S	           7 Double Negation	
9.	S ∧ ¬P	     5, 8 Adjunction
```
<img width="361" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/033f87ca-ca32-46fc-9019-d208224844d6">

### 6.3
```
Construct a proof for the argument: P → Q, P → (Q → R) ∴ P → R

1.	P → Q		
2.	P → (Q → R)		
3. |		P		
4. |		Q	      1, 3 Modus Ponens	
5. |		Q → R	  2, 3 Modus Ponens	
6. |		R	      4, 5 Modus Ponens	
7.	P → R	      3–6 Conditional derivation	
```
<img width="338" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/a8b39c9b-8c4b-463a-9dd9-83edb0949292">

### 6.4
```
Construct a proof for the argument: P → Q, S → R ∴ (¬Q ∧ ¬R) → (¬P ∧ ¬S)

1.	P → Q		
2.	S → R		
3. |	¬Q ∧ ¬R		
4. |	¬Q	      3 Simplification	
5. |	¬R	      3 Simplification	
6. |	¬P	      1, 4 Modus Tollens	
7. |	¬S	      2, 5 Modus Tollens	
8. |	¬P ∧ ¬S	  6, 7 Adjunction	
9.	(¬Q ∧ ¬R) → (¬P ∧ ¬S)	 3–8 Conditional derivation
```

<img width="387" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/2631cd0a-3614-4a13-8ac8-da8bfe39fcd1">

### 6.5

```
Construct a proof for the argument: P → (S → R), P → (Q → S) ∴ P → (Q → R)

1.	P → (S → R)		
2.	P → (Q → S)		
3.	|	P		
4.	||		Q		
5.	||		Q → S	2, 3 Modus Ponens	×
6.	||		S	4, 5 Modus Ponens	
7.	||		S → R	1, 3 Modus Ponens	
8.	||		R	6, 7 Modus Ponens	
9.	|	Q → R	4–8 Conditional derivation	
10.	P → (Q → R)	3–9 Conditional derivation
```
<img width="405" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/c3abe375-4941-4da0-ad43-9dcb64fff6b1">

### 6.6
```
Construct a proof for the argument: ∴ (¬P → Q) → (¬Q → P)

1.|		¬P → Q		
2.||			¬Q		
3.||			¬¬P	  1, 2 Modus Tollens	
4.||			P	   3 Double Negation	
5.|		¬Q → P	 2–4 Conditional derivation	
6.	(¬P → Q) → (¬Q → P)	1–5 Conditional derivation	
```
<img width="314" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/fd18b5bc-a7f8-4434-94c5-aed81122736e">

### 7.2
```
Construct a proof for the argument: P → [Q → (R → S)], Q ∧ R ∴ P → S

1.	P → [Q → (R → S)]		
2.	Q ∧ R		
3.	|	P		
4.	|	Q	                 2 Simplification	
5.	|	R	                 2 Simplification	
6.	|	[Q → (R → S)]	     1, 3 Modus Ponens	
7.	|	R → S	             4, 6 Modus Ponens	
8.	|	S	                 5, 7 Modus Ponens	
9.	P → S	               3–8 Conditional derivation
```

## HW 3 Reading 

1. If I write a truth table to show that a sentence Φ is a tautology, the truth table will have:  (select all that apply)
   ```
   A. the value T in all entries of the truth table
   B. the value T in the column for the atomic sentences
   ** C. the value T in all entries in the column for Φ **
   ```
   
2. If I write a proof to show that a sentence is a theorem, the proof will have no ________.

  Complete the sentence by choosing an option below.

  ```
  A. negation symbols in the conclusion
  B. uses of the modus ponens rule
  C. conclusions
  ** D. premises **
  ```

3. Here is an argument:
  ```
  P → Q
  _____
  ¬P v Q
  Fill out the truth table below to check the validity of the argument.

    |         |          |   premise  |  conclusion  |
    | ------- | -------- | ---------- | -------------| 
    |    Q    |     P    |    P → Q   |     ¬P v Q   |
    |    T    |     T    |     T      |       T      | 
    |    T    |     F    |     T      |       T      |
    |    F    |     T    |     F      |       F      |
    |    F    |     F    |     T      |       T      |
  ```

4. True/False: The sentences ~(P v Q) and ~P v ~Q  are logically equivalent.

    Use a truth table to check.
    ```False, If P is true and Q is false then the first formula is false but the second formula is true.```

5. True/False: (P v Q) ^ (~P ^ Q) is a tautology.

    (You may want to use a truth table in answering this question.)

   ``` False, It is not a tautology.  For example, it's false if P and Q are both true. ```

6. True/False: P v (~P v Q) is a tautology.

    (You may want to use a truth table in answering this question.)

   ``` True, The formula is equivalent to P v ~P v Q, which is always true, so it is a tautology.```

## HW 3 Proofs #2 (7.3, 6.7-6.10)

### 7.3

```
Construct a proof for the argument: P → Q, P → R ∴ P → (Q ∧ R)

1.	P → Q		
2.	P → R		
3. |		P		
4. |		Q	         1, 3 Modus Ponens	
5. |		R	         2, 3 Modus Ponens	
6. |		Q ∧ R	     4, 5 Adjunction	
7.	P → (Q ∧ R)	   3–6 Conditional derivation	
```
<img width="335" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/f48dd856-f348-4c28-96a6-56e6549885a1">

### 6.7
```
Construct a proof for the argument: P ∧ Q ∴ P ∨ Q

1.	P ∧ Q		
2.	P	      1 Simplification	
3.	P ∨ Q	  2 Addition
```
<img width="278" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/b155fc94-33ec-44cb-a624-0bb7ed9375aa">

### 6.8

```
Construct a proof for the argument: Q ∨ P ∴ ¬Q → P

1.	Q ∨ P		
2. |		¬Q		
3. |		P	      1, 2 Modus Tollendo Ponens	
4.	¬Q → P	    2–3 Conditional derivation
```
<img width="296" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4e753258-af8b-4e5d-bde0-11369ba376bd">

### 6.9

```
Construct a proof for the argument: P → Q, ¬Q ∧ S, R ∨ P ∴ S ∧ R

1.	P → Q		
2.	¬Q ∧ S		
3.	R ∨ P		
4.	¬Q	     2 Simplification	
5.	¬P	     1, 4 Modus Tollens	
6.	R	       3, 5 Modus Tollendo Ponens	
7.	S	       2 Simplification	
8.	S ∧ R	   6, 7 Adjunction
```
<img width="340" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/5b985bfa-bc0e-448f-b2ff-b5b9c0436118">

### 6.10

```
Construct a proof for the argument: (P ∧ Q) ∨ R, (P ∧ Q) → S, ¬S ∴ R

1.	(P ∧ Q) ∨ R		
2.	(P ∧ Q) → S		
3.	¬S		
4.	¬(P ∧ Q)	    2, 3 Modus Tollens	
5.	R	            1, 4 Modus Tollendo Ponens	
```
<img width="364" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/8545a033-c821-4de5-a394-0154d8386bbb">


## Quiz 3 (Ch 6 - 7)

1. Create and prove the following argument using proof-checker.org.
   ```
   _______________
   P → (R → P)
   ```
   ```
   Construct a proof for the argument: ∴ P → (R → P)

    1. |		P		
    2. ||		R		
    3. ||			P	1 Repeat	
    4. |		R → P	2–3 Conditional derivation	
    5.	P → (R → P)	1–4 Conditional derivation	
   ```

   <img width="341" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/b4bb616e-32cb-4ebf-bbcd-77948a355e18">

2. Create and prove the following argument using proof-checker.org.
   ```
   
   ¬P → R 
   _______________
   ¬R → P
   ```
   ```
   Construct a proof for the argument: ¬P → R ∴ ¬R → P

    1.	¬P → R		
    2.	|	¬R		
    3.	|	¬¬P	   1, 2 Modus Tollens	
    4.	|	P	     3 Double Negation	
    5.	¬R → P	 2–4 Conditional derivation	
   ```
   <img width="289" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ca7c33d5-c827-48ec-96ea-ef4fe970e4eb">

3. Create and prove the following argument using proof-checker.org.
   ```
   R 
   ___________________
   (¬P ∧ Q)  → (R ∧ Q)
    ```
    ```
    Construct a proof for the argument: R ∴ (¬P ∧ Q) → (R ∧ Q)

    1.	R		
    2. |		¬P ∧ Q		
    3. |		¬P	             2 Simplification	
    4. |		Q	               2 Simplification	
    5. |		R ∧ Q	           1, 4 Adjunction	
    6	(¬P ∧ Q) → (R ∧ Q)	   2–5 Conditional derivation
    ```
  <img width="349" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4608e23c-f078-4836-9eb8-847841575cc3">


4. Create and prove the following argument using proof-checker.org.
```
   P v Q
   P → ¬R
   R
   ___________________
   Q
```
```
Construct a proof for the argument: P v Q, P -> ~R, R ∴ Q

1.	P ∨ Q		
2.	P → ¬R		
3.	R		
4.	¬¬R	    3 Double Negation	
5.	¬P	    2, 4 Modus Tollens	
6.	Q	      1, 5 Modus Tollendo Ponens	
```
<img width="301" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4dcf7285-ec14-42f3-866b-fb0fd276ac58">

5. There is one error in the proof below.  Give the line number of the error.
   <img width="340" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/6914d210-97b3-4918-a3dc-c07e826283e3">
``` The problem is at line 7.  The sentence on line 4 is not still assumed to be true after the subproof          has ended, and is not stated to be true elsewhere.```

6. There is one error in the proof below.  Give the line number of the error.
   <img width="320" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/71d4f586-1f38-41e6-a0dc-d39690c5a1fd">
   ``` The problem is at line 4.  The sentence on line 4 is not a legal application of modus tollens.  Despite it meaning the same thing, to apply modus tollens we need to specify that (~Q) is not true, so you would need ~~Q, not just Q. ```

7. If sentence phi is a theorem, then which of the following statements are true?
   ```
   A. phi is not a tautology
   B. phi can be proved without using conditional derivation
   ** C. phi can be proved without any premises **
   D. phi contains no atomic sentences
   ```
   
8. Write two logical sentences you can derive from the following sentences by applying modus tollendo ponens (MTP):

(P ∧ Q → R) v (P v (R → S))

¬P

¬(P ∧ Q → R)

Note: Given these three logical sentences, derive a 4th sentence applying MTP. Then considering all four (the given three and your derived one), derive a 5th sentence applying MTP. Write these two logical sentences as your answer.

```
ANS: ¬R or P v (R → S) or R → S
