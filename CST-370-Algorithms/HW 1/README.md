# HW 1

2 Files

## 1. Write a C++ program (or Java program) for hw1_1 that reads input numbers from a user and displays the closest distance between two numbers among all input numbers.

Input format: This is a sample input from a user.

```
5
7
-7
20
8
15
```


The first number (= 5 in the example) indicates that there will be five integer numbers in the input. Then, all numbers from the second line (= 7 in the example) to the last line (15 in the example) are actual numbers. Thus, your program should read them and present the closest distance among five numbers 7, -7, 20, 8, and 15. Because the distance between 7 and 8 is 1, your answer should be 1. Note that the distance between two numbers should be always positive. For the problem, you can assume that all input numbers are distinct (= no duplication).

### Sample Run 0: Assume that the user typed the following six lines

```
5
7
-7
20
8
15
```

This is the correct output of your program.

```
Min Distance: 1
Pair: 7 8
```

Note that the sequence of two numbers for the pair is important. Your program has to display the small number first. So, the correct answer for the pair is 7 and then 8. If your program displays 8 and then 7, it’s not correct. If there is more than one pair for the minimum distance, all pairs must be displayed in ascending order. 

### Sample Run 1: Assume that the user typed the following lines

```
10
-1
10
-15
3
72
14
12
-20
5
30
```

This is the correct output of your program

```
Min Distance: 2
Pair:3 5
Pair:10 12
Pair:12 14
```
For the program, you can assume that the number of input values is less than 500.

### Sample Run 2: Assume that the user typed the following lines

```
7
1234
45678
-9090
8901
0
-12345
5678
```

This is the correct output of your program.

```
Min Distance:1234
Pair:0 1234
```

## 2. Write a C++ (or Java) program for hw1_2 which checks if an input string is a palindrome or not. In the problem, a palindrome means an alphanumeric string which reads the same front to back. For the problem, you should ignore case in the alphanumeric input string. Also, you should ignore symbols such as !, @, #, etc. In other words, you should consider only English letters and numbers in the input string. For example, “Racecar”, “IdiddidI”, “78!Dontnod8@7” are all palindromes. But “CSUMBUSC” is not a palindrome.


### Sample Run 0: Assume that the user typed the following word

```
Racecar
```

This is the true output of your program.

```
TRUE
```

### Sample Run 1: Assume that the user typed the following word

```
CSUMBUSC
```

This is the correct output of your program.

```
FALSE
```

### Sample Run 2: Assume that the user typed the following word

```
78!Dontnod8@7
```

This is the correct output of your program.

```
TRUE
```

