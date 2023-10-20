# Extra Credit Proofs (14.1 - 14.6)

### 14.1
Construct a proof for the argument: P → ¬R, Q → (S → R), P ∧ Q ∴ ¬S

1	P → ¬R		
2	Q → (S → R)		
3	P ∧ Q		
4	P	3 Simplification	
5	Q	3 Simplification	
6	¬R	1, 4 Modus Ponens	
7	S → R	2, 5 Modus Ponens	
8	¬S	6, 7 Modus Tollens	
<img width="370" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/836b0b9a-036d-4d64-ba29-3c96ed6f61c2">

### 14.2
Construct a proof for the argument: ∴ (P ∧ ¬Q) → ¬(P → Q)

1		P ∧ ¬Q		
2			¬¬(P → Q)		
3			P → Q	2 Double Negation	
4			P	1 Simplification	
5			¬Q	1 Simplification	
6			¬P	3, 5 Modus Tollens	
7			P	4 Repeat	
8		¬(P → Q)	2–7 Reductio Ad Absurdum	
9	(P ∧ ¬Q) → ¬(P → Q)	1–8 Conditional derivation
<img width="353" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/3a4f9a12-a32a-437c-b815-7cac323e8fcb">

### 14.3
Construct a proof for the argument: P ↔ ¬Q ∴ ¬(P ↔ Q)

1	P ↔ ¬Q		
2		¬¬(P ↔ Q)		
3		P ↔ Q	2 Double Negation	
4			¬Q		
5			P	1, 4 Equivalence	
6			¬P	4, 3 Equivalence	
7		Q	4–6 Reductio Ad Absurdum	
8		P	3, 7 Equivalence	
9		¬Q	1, 8 Equivalence	
10		Q	7 Repeat	
11	¬(P ↔ Q)	2–10 Reductio Ad Absurdum

<img width="304" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/a6815aa8-aec1-4b5c-914e-521b0fcf52d6">

### 14.4
Construct a proof for the argument: ¬(P ↔ Q) ∴ P → ¬Q

1	¬(P ↔ Q)		
2		P		
3			¬¬Q		
4				P		
5				Q	3 Double Negation	
6			P → Q	4–5 Conditional derivation	
7				Q		
8				P	2 Repeat	
9			Q → P	7–8 Conditional derivation	
10			P ↔ Q	6, 9 Bicondition	
11			¬(P ↔ Q)	1 Repeat	
12		¬Q	3–11 Reductio Ad Absurdum	
13	P → ¬Q	2–12 Conditional derivation
<img width="320" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/c500b048-577d-4c6c-8a1d-ef6f7843b5c8">

### 14.5
Construct a proof for the argument: ∀x(Fx ∧ Gx) ∴ ∀xFx ∧ ∀xGx

1	∀x(Fx ∧ Gx)		
2	Fa ∧ Ga	1 Universal instantiation	
3	Fa	2 Simplification	
4	Ga	2 Simplification	
5	∀xFx	3 Universal derivation	
6	∀xGx	4 Universal derivation	
7	∀xFx ∧ ∀xGx	5, 6 Adjunction
<img width="325" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/2fb3c24d-2411-40b4-a90a-cf53dc2feacc">

### 14.6
Construct a proof for the argument: Fb ∨ ∀xGx ∴ ∀x(Fb ∨ Gx)

1	Fb ∨ ∀xGx		
2		¬(Fb ∨ Ga)		
3			¬¬Fb		
4			Fb	3 Double Negation	
5			Fb ∨ Ga	4 Addition	
6			¬(Fb ∨ Ga)	2 Repeat	
7		¬Fb	3–6 Reductio Ad Absurdum	
8		∀xGx	1, 7 Modus Tollendo Ponens	
9		Ga	8 Universal instantiation	
10		Fb ∨ Ga	9 Addition	
11		¬(Fb ∨ Ga)	2 Repeat	
12	Fb ∨ Ga	2–11 Reductio Ad Absurdum	
13	∀x(Fb ∨ Gx)	12 Universal derivation

<img width="317" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/f956aeca-79fe-4914-b65e-e88ae29d1680">

