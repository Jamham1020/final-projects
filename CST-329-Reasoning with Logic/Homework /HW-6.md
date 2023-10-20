# HW 6 Proofs #1 (11.1 - 11.7)

### 11.1

```
Construct a proof for the argument: ∀x(Gx → Hx), Ga ∧ Gb ∴ Ha ∧ Hb

  1.	∀x(Gx → Hx)		
  2.	Ga ∧ Gb		
  3.	Ga → Ha	    1 Universal instantiation	
  4.	Ga	        2 Simplification	
  5.	Ha	        3, 4 Modus Ponens	
  6.	Gb	        2 Simplification	
  7.	Gb → Hb	    1 Universal instantiation	
  8.	Hb	        6, 7 Modus Ponens	
  9.	Ha ∧ Hb	    5, 8 Adjunction
```
  <img width="365" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/b0cab9c6-583d-4c17-8f13-627729f1b37b">

### 11.2

```
Construct a proof for the argument: ∀x(Hx ↔ Fx), ¬Fc ∴ ¬Hc

  1.	∀x(Hx ↔ Fx)		
  2.	¬Fc		
  3.	Hc ↔ Fc	1 Universal instantiation	
  4.|		¬¬Hc		
  5.|		Hc	4 Double Negation	
  6.|		Fc	3, 5 Equivalence	
  7.|		¬Fc	2 Repeat	
  8	¬Hc	4–7 Reductio Ad Absurdum
```
  <img width="310" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/7f2bd7ea-4316-473a-8a26-1f66bfd3bcda">

### 11.3

```
Construct a proof for the argument: ∀x(Fx ↔ Gx), Gd ∴ ∃x(Gx ∧ Fx)

  1.	∀x(Fx ↔ Gx)		
  2.	Gd		
  3.	Fd ↔ Gd	    1 Universal instantiation	
  4.	Fd	        2, 3 Equivalence	
  5.	Gd ∧ Fd	    2, 4 Adjunction	
  6.	∃x(Gx ∧ Fx)	5 Existential generalization
```
  <img width="359" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/768061b4-262a-45ca-bcc2-d08f3b388a12">

### 11.4

```
Construct a proof for the argument: ∀x∀yFxy ∴ ∃xFxx

  1.	∀x∀yFxy		
  2.	∀yFay	    1 Universal instantiation	
  3.	Faa	      2 Universal instantiation	
  4.	∃xFxx	    3 Existential generalization
```
  <img width="277" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/2601a185-7f5d-4558-bfd2-06861eea2f30">

### 11.5

```
Construct a proof for the argument: ∀xFxx ∴ ∃x∃yFxy

  1.	∀xFxx		  (Given)
  2.	Faa	      1 Universal instantiation	
  3.	∃xFxa	    2 Existential generalization	
  4. |	Fba		
  5. |	∃yFby	  4 Existential generalization	
  6. |	∃x∃yFxy	5 Existential generalization	
  7.	∃x∃yFxy	  3, 4–6 Existential instantiation
```
 <img width="296" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/de4c69ce-a205-4c2b-bf5f-11aaa9878011">
 
### 11.6

```
Construct a proof for the argument: ∴ ∀x(Fx → Gx) → (∃xFx → ∃xGx)

  1.|		∀x(Fx → Gx)		
  2.|		Fa → Ga	1 Universal instantiation	
  3.||			∃xFx		
  4.|||				Fa		
  5.|||				Ga	2, 4 Modus Ponens	
  6.|||				∃xGx	5 Existential generalization	
  7.||			∃xGx	3, 4–6 Existential instantiation	
  8.|		∃xFx → ∃xGx	3–7 Conditional derivation	
  9.	∀x(Fx → Gx) → (∃xFx → ∃xGx)	1–8 Conditional derivation
```
  <img width="364" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/3b7cef71-1ac4-49b2-891f-2d7a32bea0fb">

### 11.7

```
Construct a proof for the argument: ∃x¬(Fx ∧ Gx) ∴ ∃x(¬Fx ∨ ¬Gx)

  1.	∃x¬(Fx ∧ Gx)		
  2.|		¬(Fa ∧ Ga)		
  3.||			¬(¬Fa ∨ ¬Ga)		
  4.|||				¬Fa		
  5.|||				¬Fa ∨ ¬Ga	            4 Addition	
  6.|||				¬(¬Fa ∨ ¬Ga)	        3 Repeat	
  7.||			Fa	                    4–6 Reductio Ad Absurdum	
  8.|||				¬Ga		
  9.|||				¬Fa ∨ ¬Ga	            8 Addition	
  10.|||				¬(¬Fa ∨ ¬Ga)	      3 Repeat	
  11.||			Ga	                    8–10 Reductio Ad Absurdum	
  12.||			Fa ∧ Ga	                7, 11 Adjunction	
  13.||			¬(Fa ∧ Ga)	            2 Repeat	
  14.|		¬Fa ∨ ¬Ga	                3–13 Reductio Ad Absurdum	
  15.|		∃x(¬Fx ∨ ¬Gx)	            14 Existential generalization	
  16.|		∃x¬(Fx ∧ Gx)	            2 Existential generalization	
  17.	∃x(¬Fx ∨ ¬Gx)	                1, 2–15 Existential instantiation	
```
  <img width="344" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/94e08d09-0639-4a90-a53a-2af87985063e">


## HW 6 Reading

1. Here is a Proof Problem:

  <img width="306" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ddbd37b8-11ee-4acf-84df-9c15a1293be5">

  ```Is this a legal proof?```

  ```
    A. No, line 4 is not a proper application of existential generalization
    ** B. No, line 2 is not a proper application of universal instantiation **
    C. Yes
    D. No, line 3 is not a proper application of existential generalization.
  ```

2. True or False: ∀x(~Fx ^ ~Gx) <-> ~∃x(Fx v Gx) is logically true

    Note: in this question, you are NOT asked to show if this is logically true. You are not expected to spend much time on this - it should be done quickly based on the use of known theorems or your observation to make the assessment.
    ```True```

3. Consider this argument:

   ```
   ∀x∃yF(x, y)
   ___________
   ∃y∀xF(x, y)

     You can prove it's invalid by finding a domain and a predicate F for which the premise is true and the conclusion is false.

     We choose the domain (of discourse) to be the natural numbers (0, 1, 2, ...).

     Which of the following definitions of F would show the argument is invalid? (Spend some time considering the "edge" cases. Something may look true/false but a special choice of x or y might surprise you)
   ```

   ```
    A. Both
    B. F(x, y): x ≥ y
    C. None
    ** D. F(x,y): y = x + 1 **
   ```

4. Consider this argument:

   ```
   ∀x∃yF(x, y)
   ___________
   ∃y∀xF(x, y)

     You can prove it's invalid by finding a domain and a predicate F for which the premise is true and the conclusion is false.

     We choose the domain (of discourse) to be the natural numbers (0, 1, 2, ...).

     Which of the following definitions of F would show the argument is invalid? (Spend some time considering the "edge" cases. Something may look true/false but a special choice of x or y might surprise you)
   ```

   ```
    A. F(x, y): x ≤ y
    B. None
    ** C. Both **
    D. F(x,y): x ≠ y
   ```


## HW 6 Proofs #2 (12.3 - 12.6)

### 12.3

```
Construct a proof for the argument: ∀xFx ∴ ∀y(Fy ∧ Fy)

  1.	∀xFx		
  2.	Fa	      1 Universal instantiation	
  3.	Fa	      2 Repeat	
  4.	Fa ∧ Fa	  2, 3 Adjunction	
  5.	∀y(Fy ∧ Fy)	4 Universal derivation
```
  <img width="280" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/4f316e8d-ad33-48ed-8d37-44494c0e4bce">


### 12.4

``` 
Construct a proof for the argument: ∀x(Fx ↔ Gx), Fa ∧ ∃xHxa ∴ ∃xGx

  1.	∀x(Fx ↔ Gx)		
  2.	Fa ∧ ∃xHxa		
  3.	Fa ↔ Ga	1 Universal instantiation	
  4.	Fa	2 Simplification	
  5.	Ga	3, 4 Equivalence	
  6.	∃xGx	5 Existential generalization
```
  <img width="357" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/bd68acb1-9cfe-47a6-8e92-f533e34314f7">

### 12.5

```
Construct a proof for the argument: ∴ ∀y∃x(Fy → Fx)

  1.|		Fa		
  2.|		Fa	          1 Repeat	
  3.	Fa → Fa	        1–2 Conditional derivation	
  4.	∃x(Fa → Fx)	    3 Existential generalization	
  5.	∀y∃x(Fy → Fx)	  4 Universal derivation
```
  <img width="284" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/e7275400-8d4a-4524-a0ee-525901f728f9">

### 12.6

```
Construct a proof for the argument: ∃xHx, ∀x(Gx → Fx), ∀x(Hx → Gx) ∴ ∃x(Hx ∧ Fx)

  1.	∃xHx		
  2.	∀x(Gx → Fx)		
  3.	∀x(Hx → Gx)		
  4.	Ga → Fa	2 Universal instantiation	
  5.	Ha → Ga	3 Universal instantiation	
  6. |		Ha		
  7. |		Ga	5, 6 Modus Ponens	
  8. |		Fa	4, 7 Modus Ponens	
  9. |		Ha ∧ Fa	6, 8 Adjunction	
  10.|		∃x(Hx ∧ Fx)	9 Existential generalization	
  11.	∃x(Hx ∧ Fx)	1, 6–10 Existential instantiation
```
 <img width="431" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/a3e94bee-57da-4e65-96f5-f273b6186309">


 ## Quiz 6 (Ch 13 - 14)
  
