# Language of Logic

  1. Which of the following sentences are declarative?

    *a. I like chocolate.
    *b. Chocolate contains cocoa solids.
    *c. Chocolate is delicious.
    d. Please get me some chocolate.

  2. Which of the following sentences are declarative?

    *a. The best things in life are free.
    *b. He who laughs last, laughs best.
      [Note: this sentence is declarative but it will be hard to capture in logic 
      because its truth is ambiguous.]
    c. Get on your horse.
    d. Coke or Pepsi?

  3. Which of the following sentences are atomic?

    a. My aunt lives in Canada and does not own a car.
    b. I am not a Pokémon.
		  [Note: negation is considered a connective]
    *c. I want to own a donut shop.
    d. Is the following statement about syntax or semantics?

  4. When I write "51" I mean the number 51.
     
    Ans: It's about semantics.  It is explaining the meaning of some symbols. 
  
  5. Is the following statement about syntax or semantics?
    When writing positive integers, you should write them like "0", "5", "126".  The 
    first digit should not be 0 unless you're writing zero.  In other words, don't 
    write "05" or "00" or "0126".
    
    Ans: It's about syntax.  It's explaining the legal form for the decimal 
    representation of positive integers.

  6. Is the following statement about syntax or semantics?
     "Do not end a sentence with a preposition".

    Ans: It's about syntax.  It's about the legal order of words in a sentence, not 
    about what the sentence means.  To say it another way, it's about legal sentence 
    structure.

  7. Yoda says things like "Power you have become".  What is strange about Yoda's statement, the syntax or the semantics?

    Ans: I think the meaning of the sentence is clear: "you have become powerful".  
    What is strange is the ordering of the words in the sentence, which is syntax.

# Metalanguage

  1. Can a sentence in our logical language contain symbols like P or Q? What do they mean?

    Ans: Yes, we will use letters like P in the logic we use to mean atomic sentences.

  2. Is a truth table about syntax or semantics?

    Ans: It's about semantics.  It explains the meaning of logical sentences.

  3. The text below contains more than one atomic sentence.  Identify the atomic 
     sentences and create a translation key.
     Not everyone has a vote.  A convicted felon does not have a vote.  A child does 
     not have a vote.

    Ans: Here's my translation key:
    P: Everyone has a vote
    Q: A convicted felon has a vote
    R: A child has a vote
     Notice that after we use P and Q then we start using capital letters that 
    follow Q.

# Implication

   1. Your friend says "If you give me 50 bucks I'll eat a cheeseburger in 20 seconds or less". How many 
      atomic sentences in the statement?
   
    Ans: I count two atomic sentences (see next problem for details).

   2. Write a translation key for the previous problem.

     P  You give me 50 bucks
     Q  I will eat a cheeseburger in 20 seconds or less

   3. Write the English statement of problem 1 as a logical sentence, using your translation key of the previous problem.

    Ans: P → Q

   4. Is the statement of problem 1 true if you don't give your friend 50 bucks but your friend eats a cheeseburger in 20 seconds 
      anyway?

     Ans: Yes. Please make sure you understand the semantics of the implication (used in the logical 
     sentence of the previous 
     problem). Refer to the truth table of implication if needed.
   
   5. For each of the following English sentences, write a translation key and then write the sentence in 
      logic. Ensure that your number of atomic sentences matches you number of symbols in your translation 
      key:

      a. Josie is a cat 

          Translation key: P: Josie is a cat.  The logical sentence is P.

      b. If Bez studies, Bez will pass the exam

          Translation key: P: Bez studies, Q: Bez will pass the exam. The logical sentence is P → Q

      c. Josie is a cat only if Josie is a mammal

          Translation key: P: Josie is a cat, Q: Josie is a mammal. The logical sentence is P → Q
          "only if" is tricky.Think of it this way: the sentence says that the only way Josie can be a cat 
          is if Josie is a mammal. This means that if Josie is a cat, we know Josie is a mammal. It might 
          also help to remember that "Josie is a cat if Josie is a mammal" translates to Q → P. So 
          the arrow symbol is pointing in different directions for "if" and "only if".

# Implication truth table; negation

1. If P is false and Q is false, then what is the value of the logical sentence P → Q?

       Ans: According to the truth table for implication, the value is true. We assume the statement to be 
       true until shown to be untrue. In this instance, P is not true, so Q can do anything without 
       disagreeing with the statement.
    
2. If P is true, Q is false, and R is true, then what is the value of the logical sentence P → (Q → R)?

       Ans: Start with Q → R. If Q is false and R is true, then this formula is true (again, Q is not 
       “activating” the conditional, and so R can do whatever). P is true, so using the truth table for 
       implication, the value of the full sentence is true.
    
3. If P is false and Q is true, then what is the value of the logical sentence ¬(P → ¬Q)?

       Ans: Since Q is true, Q is false, and then since P is false, P → Q is true.This means the full 
       sentence is false.

4. Translate the following phrase into our logical language:
   P provided that Q

       Ans: "P provided that Q" means the same thing as "if Q then P", and translates to "Q → P".

5. For the following English sentence, write a translation key and then write the sentence in logic:
   If Jessica studies, then Jessica will pass the exam, provided she wakes up in time.

       S  Jessica studies
       W  Jessica wakes up in time
       P  Jessica will pass the exam
       Using this key, I would write the formula like this:
       S → (W → P)
       NOTE: At least until we have the use of “AND” we’re kind of stuck writing things like this!

6. For the following English sentence, write a translation key and then write the sentence in logic:
   If Tom does not pass the exam, then if Steve studies, Steve will pass the exam.

       P  Tom passes the exam
       Q  Steve studies
       R  Steve will pass the exam
       Using this key, I would write the formula like this:
       ¬P → (Q → R)

# Arguments

1. Is it possible for an argument to have no conclusion?

       Ans: Every argument has a conclusion, and it is always a single sentence.

2. Must all the premises of an argument be true?
   
       No, the premises of an argument are not required to be true. In logic, the point is not to determine 
       whether something is a fact, but whether the reasoning process is correct. As such, if both parties 
       agree to the premises of the argument, then it is only logical that they agree to the conclusion.

3. If a sentence is not true, we also refer to it as: (select all that apply)

       a. an invalid sentence
       b. an undefined sentence 
       *c. a false sentence*
       Note: The word 'valid' applies to arguments, not sentences.  Also, we have never discussed any 
       concept of an "undefined sentence".

4. (True/False)  In a valid argument, it could be that the premises are true but the conclusion is false.

       Ans: False.  By definition, in a valid argument, if the premises are true then the conclusion is true.

5. Is the following argument valid?
   I graduated from a California high school
   If I graduated from a California high school then I can legally vote
   ------------
   I can legally vote

       Ans: Under the assumption that the premises are true, the conclusion is definitely true.  Therefore, 
       the argument is valid. It doesn’t matter that the real world has more requirements, the conclusion 
       comes logically from the premises given.

 6. (True/False)  Every valid argument is also a sound argument.

        Ans: False. Not every valid argument is sound.

# Checking the validity of arguments

1. Read the following statements:
   Our child doesn't read that trash.  If our child read that trash she wouldn't appreciate real literature.    Therefore, our child appreciates real literature.  
   Produce a translation key for this sentence.

       Translation key:
        P	Our child reads that trash
        Q	Our child appreciates fine literature

2. Translate the sentence to a logical argument.

       Argument:
        ¬P
        P → ¬Q
        -------------
        Q
   
4. Use a truth table to check the validity of the argument.

       Truth table: (not a valid argument because of line 1)

       | P  |  Q  | premise ¬P | premise P → ¬Q | conclusion Q |
       | -- | --  | ---------- | -------------- | ------------ |
       | F  |  F  |     T      |        T       |       F      |
       | F  |  T  |     T      |        T       |       T      |
       | T  |  F  |     F      |        T       |       F      |
       | T  |  T  |     F      |        F       |       T      |
       
