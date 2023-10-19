# Practice Problems Week 4

## Proof by Contradiction (Reductio Ad Absurdum)

1. Write a proof for this argument, and check your proof with the proof checker:
```
¬(P ∧ Q), Q
___________
¬P
```
```
Construct a proof for the argument: ¬(P ∧ Q), Q ∴ ¬P

1.	¬(P ∧ Q)		
2.	Q		
3.|		¬¬P		
4.|		P	        3 Double Negation	
5.|		P ∧ Q	    2, 4 Adjunction	
6.|		¬(P ∧ Q)	1 Repeat	
7.	¬P	        3–6 Reductio Ad Absurdum	
```
<img width="293" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/d3a62fff-4ab7-4a21-9359-82e929dabe60">

2. Write a proof for this argument, and check your proof with the proof checker:
```
P
___________
¬P → Q
```
```
Construct a proof for the argument: P ∴ ¬P → Q

1.	P		
2.|		¬P		
3.||			¬Q		
4.||			P	1 Repeat	
5.||			¬P	2 Repeat	
6.|		Q	3–5 Reductio Ad Absurdum	
7.	¬P → Q	2–6 Conditional derivation
```
<img width="349" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/2ab51eec-c0cb-42f8-ad26-66e33ea6d196">
<img width="283" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/256de8af-e1b6-41a2-ab47-42bfcea0dc33">


3. Is Q ∧ ¬Q a contradiction?
   ```Yes, this is a contradiction. Some might call this a contradictory sentence, and assert that there is a small difference, but most consider the two to be the same.```

## Proof by Contradiction (Reduction Ad Absurdum) 2

1. Write a proof for this argument, and check your proof with the proof checker:
```
P v Q
___________
¬P
```
```
Construct a proof for the argument: ¬(P ∨ Q) ∴ ¬P

1.	¬(P ∨ Q)		
2.|		¬¬P		
3.|		P	         2 Double Negation	
4.|		P ∨ Q	     3 Addition	
5.|		¬(P ∨ Q)	 1 Repeat	
6.	¬P	         2–5 Reductio Ad Absurdum	
```

<img width="294" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/84a563c0-bd7b-49e9-978d-31658fef46f8">

2. Write a proof for this argument, and check your proof with the proof checker:
```
P v Q
___________
Q v P
```
```
Construct a proof for the argument: ¬(P ∨ Q) ∴ ¬P

1.	¬(P ∨ Q)		
2.|		¬¬P		
3.|		P	          2 Double Negation	
4.|		P ∨ Q	      3 Addition	
5.|		¬(P ∨ Q)	  1 Repeat	
6.	¬P	          2–5 Reductio Ad Absurdum	
7.|		¬¬Q		
8.|		Q	          7 Double Negation	
9.|		P ∨ Q	      8 Addition	
10.|	¬(P ∨ Q)	  1 Repeat	
11.	¬Q	          7–10 Reductio Ad Absurdum	
12.	¬P ∧ ¬Q	      6, 11 Adjunction
```
<img width="302" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/c1b4b975-5cba-4c12-8b88-70b50dc591b5">

3. Write a proof for this argument, and check your proof with the proof checker:
```
¬(P v Q)
___________
¬P ∧ ¬Q
```
<img width="293" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/afb60642-0822-4630-8865-c50382b8cff8">

## Proof Strategies

1. Solve this argument.  However, think carefully about how you decided to do the proof.  Write down the steps in your thought process.  Don't rush this -- it's a very helpful exercise.  
```
¬Q → P
___________
Q v P
```
<img width="323" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/abbd6f8c-d457-4db5-986b-e6d5fbd40f58">

2. Repeat the steps of the previous problem, but use this argument (theorem - conclusion without premise):
```
___________
P v ¬P
```
<img width="314" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/6f59fcf8-d909-4a82-a527-069b6ded48a2">

3. Repeat the steps of the previous problem, but use this argument (theorem - conclusion without premise):
```
____________________
(P ∧ ¬Q) → ¬(P → Q)
```
<img width="328" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/0830c901-3785-4f36-bcc9-b7e0a24438a8">


## Iff, Contingent Sentences, and Theorems
1. Do the proof of Hume's argument, and check your proof with the proof checker:
```
P ↔ (Q ∨ R), ¬Q, ¬R
____________________
¬P
```
<img width="265" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/c4f9ced7-0b7f-4351-8d5e-d9b72d671e1b">


2. Write a proof for this argument, and check your proof with the proof checker:
```
P ↔ Q, Q ↔ R
_____________
P ↔ R
```
<img width="269" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/0d780833-6910-4fbe-b8b5-63967d557848">


3. If Φ is a tautology, then what is ¬Φ ? 
```
Answer: a contradictory sentence.
```

4. If Φ is a contingent sentence, then can ¬Φ be a tautology? Support your answer
```
Answer: No. A contingent sentence can be true or false, so the negation of a contingent sentence can also be true or false. This means that it is not a tautology because a tautology will always be true. This can be verified using a truth table.
```

5. You can instantiate a sentence  by replacing atomic sentences in Φ with sentences.  But these substitutions have to be done consistently and "in parallel".   Which of the following are legal instantiations of this sentence: P → (Q → P) ?
```
a. Q → (Q → Q) - Yes, legal
b. R → (Q → ¬R)- No, the P has been switched out for 2 different statements.
c. (P ∧ Q) → (Q → (P ∧ Q)) - Yes, legal
d. ¬P → (Q → ¬P) Yes, legal
```

6. Refer to the lecture slides or the textbook for the theorems T1-T10.  Is this sentence a legal instantiation of one of the theorems T1-T10, and if so, which theorem?
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

a. (P → (R → P)) → (¬(R → P) → ¬P):
T10
```
7. Why is the instantiation of a theorem also a theorem?  For example, can you explain why, if P → (R → P) is a theorem, then also (P ∧ R) → (¬Q → (P ∧ R)) is a theorem?

```
Answer: You can prove both of them using the same logical steps. It’s as if we replaced P with (P^R) and R with (~Q), besides that everything is the same.
```

8. ∴ ¬(P → Q) ↔ (P ∧ ¬Q)
<img width="365" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/cdd35c2d-b216-4196-8c4b-d170411622cb">


