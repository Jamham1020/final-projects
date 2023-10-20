# Practice Problems Week 6 

## Universal Instantiation

1. Prove the following argument with the proof checker

     ```
     ∀x(H(x, c) → F(x)), H(b, c)
     ___________________________
     F(b)
     ```
  
    ```
    Construct a proof for the argument: ∀x(Hxc → Fx), Hbc ∴ Fb
      1.	∀x(Hxc → Fx)		
      2.	Hbc		
      3.	Hbc → Fb	  1 Universal instantiation	
      4.	Fb	        2, 3 Modus Ponens
    ```
    <img width="309" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/39f478e9-dfc6-46fb-98b4-cb1304eda58e">


2. Prove the following argument with the proof checker

     ```
     ∀x(F(x) → G(x)),G(c) → ¬H(c), H(c)
     __________________________________
     ¬F(c)
     ```

     ```
     Construct a proof for the argument: ∀x(Fx → Gx), Gc → ¬Hc, Hc ∴ ¬Fc

      1.	∀x(Fx → Gx)		
      2.	Gc → ¬Hc		
      3.	Hc		
      4.	Fc → Gc	  1 Universal instantiation	
      5.	¬¬Hc	    3 Double Negation	
      6.	¬Gc	      2, 5 Modus Tollens	
      7.	¬Fc	      4, 6 Modus Tollens
    ```
     <img width="361" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/441ac496-756e-4afb-a112-fc0dcd5dbbc8">

## Existential Generalization

1. Prove the following argument with the proof checker (The version of this problem that has an existential statement embedded in the condition

     ```
     ∀x(F(x) → G(x))             ∀x(F(x) → G(x))
     ________________    or      ________________
     ∃x(¬G(a) → ¬F(x))           (¬G(a) → ∃x(¬F(x)))
     ```

     ```
     Construct a proof for the argument: Ax(Fx -> Gx) ∴ ∃x(¬Ga → ¬Fx)

       1.	∀x(Fx → Gx)		
       2.	|	¬Ga		
       3.	|	Fa → Ga	      1 Universal instantiation	
       4.	|	¬Fa	          2, 3 Modus Tollens	
       5.	¬Ga → ¬Fa	      2–4 Conditional derivation	
       6.	∃x(¬Ga → ¬Fx)	  5 Existential generalization
     Construct a proof for the argument: ∀x(Fx → Gx) ∴ ¬Ga → ∃x¬Fx

       1.	∀x(Fx → Gx)		
       2.	Fa → Ga	        1 Universal instantiation	
       3.	|	¬Ga		
       4.	|	¬Fa	          2, 3 Modus Tollens	
       5.	|	∃x¬Fx	        4 Existential generalization	
       6.	¬Ga → ∃x¬Fx	    3–5 Conditional derivation	

     
     ```
     <img width="353" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/c6c09358-6f3c-436d-81ef-147166176194">
     <img width="336" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/ddf8ef7f-48a2-46d0-926b-5801f016b4c8">

2. Is it true that if "Everything is F" then "Something is F"?  Is this intuitively reasonable?  Try to prove the following argument with the proof checker:

    ```
    ∀x(F(x)
    _______
    ∃x(F(x)
    ```
    ```
    Construct a proof for the argument: ∀xFx ∴ ∃xFx

      1.	∀xFx		
      2.	Fa	          1 Universal instantiation	
      3.	∃xFx	        2 Existential generalization
    ```
    <img width="281" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/1a83c53c-daec-4226-90e3-09cc4e1c11ec">

## Existential Instantiation

1. Prove the following argument with the proof checker

   ```
   ∀x(W(x) → M(x)), ∃x(W(x) ∧ C(x)), ∀x(C(x) → F(x))
   _________________________________________________
   ∃x(M(x) ∧ F(x))
   ```
   ```
    Construct a proof for the argument: ∀x(Wx → Mx), ∃x(Wx ∧ Cx), ∀x(Cx → Fx) ∴ ∃x(Mx ∧ Fx)

      1.	∀x(Wx → Mx)		
      2.	∃x(Wx ∧ Cx)		
      3.	∀x(Cx → Fx)		
      4. |		Wa ∧ Ca		
      5. |		Wa → Ma	      1 Universal instantiation	
      6. |		Ca → Fa	      3 Universal instantiation	
      7. |		Wa	          4 Simplification	
      8. |		Ca	          4 Simplification	
      9. |		Ma	          5, 7 Modus Ponens	
      10.|		Fa	          6, 8 Modus Ponens	
      11.|		Ma ∧ Fa	      9, 10 Adjunction	×
      12.|		∃x(Mx ∧ Fx)	  11 Existential generalization	
      13.	∃x(Mx ∧ Fx)	      2, 4–12 Existential instantiation
   ```
   <img width="413" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/f286da2d-1c43-4ee2-9dc6-db97b1bef568">


2. Prove the following argument with the proof checker

   ```
   ∃x∃y(F(x,y)
   _______
   ∃y∃x(F(x,y)
   ```

   ```
   Construct a proof for the argument: ∃x∃yFxy ∴ ∃y∃xFxy

      1.	∃x∃yFxy		
      2. |		∃yFay		
      3. ||		Fab		
      4. ||		∃xFxb	      3 Existential generalization	
      5. ||		∃y∃xFxy	    4 Existential generalization	
      6. |		∃y∃xFxy	    2, 3–5 Existential instantiation	
      7.	∃y∃xFxy	        1, 2–6 Existential instantiation
   ```
   <img width="308" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/22565a2b-e44b-497d-b117-eccd5430bebe">

   
## Universal Derivation

1. Prove the following argument with the proof checker

   ```
   ∀x(F(x) → G(x)), ∀x(G(x) → H(x)), ∀x(H(x) → M(x))
   _________________________________________________
   ∀x(F(x) → M(x))
   ```

   ```
   Construct a proof for the argument: ∀x(Fx → Gx), ∀x(Gx → Hx), ∀x(Hx → Mx) ∴ ∀x(Fx → Mx)

      1.	∀x(Fx → Gx)		
      2.	∀x(Gx → Hx)		
      3.	∀x(Hx → Mx)		
      4.	Fa → Ga	      1 Universal instantiation	
      5.	Ga → Ha	      2 Universal instantiation	
      6.	Ha → Ma	      3 Universal instantiation	
      7. |		Fa		
      8. |		Ga	      4, 7 Modus Ponens	
      9. |		Ha	      5, 8 Modus Ponens	
      10.|		Ma	      6, 9 Modus Ponens	
      11.	Fa → Ma	      7–10 Conditional derivation	
      12.	∀x(Fx → Mx)	  11 Universal derivation
    ```
     <img width="408" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/306c6a5c-234e-4fe3-88e1-9a38977d6ead">

 2. I want you to translate backwards from a logical argument to English.  Here is a logical argument:

    ```
    ∀x(F(x) ↔ G(x)), G(b)
    _____________________
    ∃x(G(x) ∧ F(x))
    ```
    ```
    Write a translation key and, using the translation key, translate the logic to English.
    Paying close attention to this argument will help to understand that what it’s describing is very simple. If two predicates are biconditional, then showing that either one is true at least once is showing that there exists some value for which they are both true. See the example below.

    Domain: all natural numbers
    Translation key:
    Fx: x is divisible by 15
    Gx: x is divisible by both 3 and 5
    b: 45
    Translation: A number is divisible by 15 if and only if it is divisible by both 3 and 5. 45 is
    divisible by both 3 and 5. Therefore, there exists a number that is both divisible by
    15, 3 and 5.
    ```

3. Explain why the following "proof" is incorrect:
   
   <img width="347" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/39ea7165-c211-4ed9-96aa-ca0d8c160abc">

    ```
    Note: Think about the restrictions on the use of the rules.  Once you think you have an answer, use the proof checker and see what it says about it.
    Ans: Based on the restriction for universal derivation, every occurrence of ‘a’ in Faa must be replaced by ‘y’, therefore line 3 is incorrect.
    ```

## Logically true FOL sentences and invalid arguments

1. Is the following sentence of FOL logically true?  Prove it.

   (∀xF(x)) → (∃xF(x))
   Hint: Can you prove that the sentence is a theorem?  If it is a theorem, then is it logically true?

   <img width="345" alt="image" src="https://github.com/Jamham1020/final-projects/assets/64275401/b623cf99-3703-47ba-999a-4afb87a90bda">
   
   ``` The sentence is logically true as it can be proven as a theorem. ```

2. Show that the following argument is invalid using the method described in lecture:

   ```
   ∀xF(x,x)
   ___________
   ∀x∀yF(x, y)
   ```

   ```
    Hint: start by picking a numeric domain.  Then decide on the meaning of F and G.  Then decide on the meaning of a and b.
    Basic strategy: if we can find a case for which the premises are true, and the conclusion is false, then the argument is invalid.
    domain: all natural numbers
    Translation key:
    F(x,y): x is divisible by y
    Translation: The premise says all numbers are divisible by itself, which is true. The conclusion says all numbers are divisible by all other numbers, which is not true. For example, the number 5 is divisible by itself, but 5 is not divisible by 8. So, this argument is invalid.
   ```

3. Show that the following argument is invalid using the method described in lecture:

   ```
   ∀x(F(x) → G(x)), ¬G(a) 
   ______________________
   ¬F(b)
   ```

   ```
   This also almost reads like a trick question, but the important thing is that the original statement assumes that the x values are the same, so saying F is not true for input a says nothing about input b with respect to any predicate.
    domain: all natural numbers
    Translation key:
    F(x): x is divisible by 4
    G(x): x is divisible by 2
    a: 3
    b: 4
    Translation: The first premise says “if a number is divisible by 4 then it is divisible by 2,” which is true. The second premise says “3 is not divisible by 2,” which is also true. Now, the conclusion says “4 is not divisible by 4,” which is false. So, the argument is invalid. [Notice the use of ‘a’ and ‘b’ in the argument.]
   ```

4. Show that the following argument is invalid using the method described in lecture:

   ```
   ∀x(F(x) v G(x)), ¬F(a) 
   ______________________
   G(b)
   ```

   ```
     This is very similar to the previous question.
    domain: all natural numbers
    Translation key:
    F(x): x is even 
    Gx: x is odd
    a: 7
    b: 8
    Translation: The first premise says all natural numbers are either odd or even. The second premise says 7 is not even. The conclusion says 8 is odd. Here the premises are both true, but the conclusion is false. Therefore, the argument is invalid.
  ```
   




