# HW 4 Reading

1. True/False: P -> ~P is a contradictory sentence.

  [Note: You may want to use a truth table in answering this question.]

  ``` False, The formula is equivalent to ~P, which is not a contradictory sentence.```

2. A contradiction is

  [Note: Notice the difference between "a contradiction" and "a contradictory sentence".]

  ```
  A. A sentence that can never be true
  B. A sentence that can be true or false
  C. A sentence that is always true
  ** D. A situation where two sentences are asserted, but can not both be true.**
  A is correct, because a contradiction is a situation where two sentences are asserted, but can not both be true.
  ```

3. Here is an argument:

   P -> R

   Q -> R

   P v Q

   ----------

   R

   Is the following a legal proof?
   <img width="299" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/8fec53e5-774f-4e3c-9dc8-df97c0085aa7">

  ```
  A. No, line 6 is derived wrong.
  ** B. No, line 8 is not a proper application of reduction ad absurdum ** 
  C. Yes
    On line 8 this is not a proper application of reductio ad absurdum, because the sub proof is missing ~R 
    at the bottom.  For reductio ad absurdum you must list the two sentences that create a contradiction at 
    the bottom of the sub proof. 
  ```

4. If phi and psi are contradictory sentences, then is phi <-> psi a contradictory sentence?

    [Note: you may want to refer to the relevant truth table.]
```
Ans: No, phi and psi will be false for all possible values of the atomic formulas in them. So phi and psi will always have the same value, so phi <-> psi will be a tautology.
```

5. If phi is a contradictory sentence, and psi is a theorem, then what is phi <-> psi?

    [Note: you may want to refer to the relevant truth table.]

```
** A. a contradictory sentence ** 
B. a contingent sentence
C. a theorem
If phi is always false, and psi is always true, then phi <-> psi will always be false.
```

6. Which theorem (from T1 to T10) does this sentence instantiate? (Refer to the textbook for the theorem list)

  ~(R v ~S) -> ((R v ~S) -> P)

  Write a theorem name (such as T1) or None if the sentence does not instantiate any theorem.

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

  ANS: T6  with mapping: P becomes R v ~S, Q becomes P
  ```

7. Which theorem (from T1 to T10) does this sentence instantiate? (Refer to the textbook for the theorem list)
  ```
  (~Q v ~P) <-> (~Q ^ ~~P)
  
  Write a theorem name (such as T1) or None if the sentence does not instantiate any theorem.
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

  ANS: None, The sentence does not instantiate any theorem. It is close to instantiating T3.
  ```

8. If phi is a contingent sentence, then what is ~phi ?
```
A. a contradiction
** B. a contingent sentence **
C. it depends on the particular sentence phi
D. a tautology
A contingent sentence has a truth table in which some rows are T and some are F.
In the truth table for the negation of this sentence, the T values will switch to F, and the F values will switch to T, so there will be some T rows and some F rows.
```

# HW 4 Proofs (7.4-7.8, 8.1, 8.4, 8.7)

### 7.4 

Construct a proof for the argument: P → ¬P ∴ ¬P
```
1.	P → ¬P		
2.|	¬¬P		
3.|		P	    2 Double Negation	
4.|		¬P	  1, 3 Modus Ponens	
5.|		¬¬P	  2 Repeat	
6.	¬P	    2–5 Reductio Ad Absurdum	
```
<img width="281" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/32a4c2a0-73ba-40fc-924d-da61b4d2941b">

### 7.5 

Construct a proof for the argument: P → Q, ¬Q ∴ ¬P
```
1.	P → Q		
2.	¬Q		
3. |		¬¬P		
4. |		P	     3 Double Negation	
5. |		Q	     1, 4 Modus Ponens	
6. |		¬Q	    2 Repeat	
7.	¬P	      3–6 Reductio Ad Absurdum
```
<img width="335" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ed2013da-e67e-414d-9310-d1af70cc5bb6">


### 7.6

Construct a proof for the argument: ¬(P → Q) ∴ ¬Q
```
1.	¬(P → Q)		
2. |		¬¬Q		
3. |		Q	2 Double Negation	
4. ||		P		
5. ||			Q	3 Repeat	
6. |		P → Q	4–5 Conditional derivation	
7. |		¬(P → Q)	1 Repeat	
8.	¬Q	2–7 Reductio Ad Absurdum	
```
<img width="292" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/39031f5c-54a1-416c-9660-8e71c64af75b">

### 7.7 

Construct a proof for the argument: (P ∧ Q) ∨ (P ∧ R) ∴ P

```
1.	(P ∧ Q) ∨ (P ∧ R)		
2. |	¬P		
3. ||			¬(P ∧ Q)		
4. ||			P ∧ R	     1, 3 Modus Tollendo Ponens	
5. ||			P	         4 Simplification	
6. ||			¬P	       2 Repeat	
7. |	P ∧ Q	         3–6 Reductio Ad Absurdum	
8. |		P	           7 Simplification	
9. |		¬P	         2 Repeat	
10.	P	               2–9 Reductio Ad Absurdum	
```
<img width="353" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/0281901a-b034-4fd6-8ba8-bc50942dc12d">

### 7.8 

Construct a proof for the argument: ¬Q → P ∴ Q ∨ P

```
1.	¬Q → P		
2. |		¬(Q ∨ P)		
3. ||			¬¬Q		
4. ||			Q	           3 Double Negation	
5. ||			Q ∨ P	       4 Addition	
6. ||			¬(Q ∨ P)	   2 Repeat	
7. |		¬Q	           3–6 Reductio Ad Absurdum	
8. |		P	             1, 7 Modus Ponens	
9. |	Q ∨ P	         8 Addition	
10.|	¬(Q ∨ P)	     2 Repeat	
11.	Q ∨ P	           2–10 Reductio Ad Absurdum
```
<img width="307" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/d0c67590-9893-4b83-b8ea-52a343d9eea3">

### 8.1

Construct a proof for the argument: P → (Q ∧ R), ¬P → R ∴ R
```
1.	P → (Q ∧ R)		
2.	¬P → R		
3. |		¬R		
4. |		¬¬P	        2, 3 Modus Tollens	
5. |		P	          4 Double Negation	
6. |		(Q ∧ R)	    1, 5 Modus Ponens	
7. |		R	          6 Simplification	
8. |		¬R	        3 Repeat	
9.	R	              3–8 Reductio Ad Absurdum	
```
<img width="322" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/2f5b5d6b-29b2-476d-a576-7d49a1e9b87a">

### 8.4
Construct a proof for the argument: ¬(R ∨ S), P → R, Q → S ∴ ¬(P ∨ Q)

```
1.	¬(R ∨ S)		
2.	P → R		
3.	Q → S		
4. |		¬¬(P ∨ Q)		
5. |	P ∨ Q	         4 Double Negation	
6. ||			¬P		
7. ||			Q	5,       6 Modus Tollendo Ponens	
8. ||			S	         3, 7 Modus Ponens	
9. ||			R ∨ S	     8 Addition	
10.||			¬(R ∨ S)	 1 Repeat	
11.|		P	           6–10 Reductio Ad Absurdum	
12.|		R	           2, 11 Modus Ponens	
13.|		R ∨ S	       12 Addition	
14.|		¬(R ∨ S)	   1 Repeat	
15.	¬(P ∨ Q)	       4–14 Reductio Ad Absurdum	
```
<img width="362" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/bffc63a9-b9df-4d69-938b-a2b04b40484c">

### 8.7

Construct a proof for the argument: ∴ (¬P ∨ ¬Q) ↔ ¬(P ∧ Q)
```
1.|		¬(P ∧ Q)		
2.||			¬(¬P ∨ ¬Q)		
3.|||				¬P		
4.|||				¬P ∨ ¬Q	         3 Addition	
5.|||				¬(¬P ∨ ¬Q)	     2 Repeat	
6.||			P	                 3–5 Reductio Ad Absurdum	
7.|||				¬Q		
8.|||				¬P ∨ ¬Q	         7 Addition	
9.|||				¬(¬P ∨ ¬Q)	     2 Repeat	
10.||			Q	                 7–9 Reductio Ad Absurdum	
11.||			P ∧ Q	             6, 10 Adjunction	
12.||			¬(P ∧ Q)	         1 Repeat	
13.		(¬P ∨ ¬Q)	             2–12 Reductio Ad Absurdum	
14.|	¬(P ∧ Q) → (¬P ∨ ¬Q)	 1–13 Conditional derivation	
15.||		¬P ∨ ¬Q		
16.||			¬¬(P ∧ Q)		
17.||			P ∧ Q	              16 Double Negation	
18.||			P	                  17 Simplification	
19.||			¬¬P	                18 Double Negation	
20.||			¬Q	                15, 19 Modus Tollendo Ponens	
21.||			Q	                  17 Simplification	
22.|		¬(P ∧ Q)	            16–21 Reductio Ad Absurdum	
23.	(¬P ∨ ¬Q) → ¬(P ∧ Q)	    15–22 Conditional derivation	
24.	(¬P ∨ ¬Q) ↔ ¬(P ∧ Q)	    14, 23 Bicondition
```
<img width="321" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/293e162a-e65c-4d6c-808e-d370c97d18e7">


## Quiz 4 (Ch 8 - 9)

1. Create and prove the following argument using proof-checker.org.
```
____________
Q → (¬R → Q)
```
```
Construct a proof for the argument: ∴ Q → (¬R → Q)

1.|		Q		
2.||	¬R		
3.||	Q	          1 Repeat	
4.|		¬R → Q	    2–3 Conditional derivation	
5.	Q → (¬R → Q)	1–4 Conditional derivation
```
<img width="297" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/c930ff62-a715-458e-a8cf-b0c83029ee4c">

2. Create and prove the following argument using proof-checker.org.
```
P
_________________
Q → [R → (P ∧ Q)]
```
```
Construct a proof for the argument: P ∴ Q → [R → (P ∧ Q)]

1.	P		
2.|		Q		
3.||	R		
4.||	P ∧ Q	          1, 2 Adjunction	
5.|		R → (P ∧ Q)	    3–4 Conditional derivation	
6.	Q → [R → (P ∧ Q)]	2–5 Conditional derivation	
```
<img width="308" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/e787b195-5052-4647-a420-beedc07b93e8">

3. Create and prove the following argument using proof-checker.org.
```
 ¬(P ∨ Q)
___________
 ¬P
```
```
Construct a proof for the argument: ~(P v Q) ∴ ¬P

1.	¬(P ∨ Q)		
2.|		¬¬P		
3.|		P	2 Double Negation	
4.|		P ∨ Q	3 Addition	
5.|		¬(P ∨ Q)	1 Repeat	
6.	¬P	2–5 Reductio Ad Absurdum	
```
<img width="284" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ea3a7348-835b-48a2-a30a-852863b2cfdb">

4. Create and prove the following argument using proof-checker.org.
```
 ¬P
_______
P → Q
```
```
Construct a proof for the argument: ~P ∴ P → Q

1.	¬P		
2.|		P		
3.||			¬Q		
4.||			¬P	1 Repeat	
5.||			P	2 Repeat	
6.|		Q	3–5 Reductio Ad Absurdum	
7.	P → Q	2–6 Conditional derivation	
```
<img width="298" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/f2b89c28-116f-4737-bd39-84ef6d58ad82">

5. This sentence is the instantiation of a theorem.  Which one?

   (~~R v ~(P ^ Q)) <-> ~(~R ^ (P ^ Q))

   ```
   A. T3:~(P v Q) <-> (~P ^ ~Q)
   ** B. T4: (~P v ~Q) <-> ~(P ^ Q) **
   C. T2: ~(P -> Q) <-> (P ^ ~Q)
   ```

6. Which of the following sentences are contingent?

        [Note: another way to think this question is which of the following are not a tautology or a                  contradictory   sentence.]
   ```
   ** A. P **
   ** B. ~P **
   C. P v ~P
   ** D. P v Q **
   ```

7. Is P ^ ~(Q -> P) a contradictory sentence?
  ```
   Yes,
   This can be solved with a truth table.

   You could also solve the problem this way:

   P ^ ~(Q -> P)    is equivalent to
   P ^ ~(~Q v P)    is equivalent to
   P ^ (Q ^ ~P)      is equivalent to
   P ^ ~P ^ Q

   which can never be true. 
  ```

8. Which of the following formulas are equivalent to ~P v Q?
```
A. P v ~Q
** B. ~(P ^ ~Q) **
** C. P -> Q **
```

