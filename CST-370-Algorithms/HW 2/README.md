# HW 2

## 1. Write a C++ (or Java) program for hw2_1 that reads two timestamps of two events from a user and displays the difference between the two timestamps. For the program, you can assume that each timestamp is composed of the hour (0 ~ 23), minute (0 ~ 59), and second (0 ~ 59) format. Your program should present the difference from the second event (= second timestamp) to the first event (= first timestamp). Note that the second event always happens after the first event and your program should display the time difference of the events.

### Sample Run 0: Assume that the user typed the following two lines.

```
18:45:30
20:50:59
```

This is the correct output of your program.

```
02:05:29
```

### Sample Run 1: Assume that the user typed the following two lines.

```
20:18:59
04:25:17
```

This is the correct output of your program.

```
08:06:18
```

### Sample Run 0: Assume that the user typed the following two lines.

```
02:00:25
15:30:00
```

This is the correct output of your program.

```
13:29:35
```

## 2. Write a C++ (or Java) program for hw2_2 that reads a number of elements in a set first. Then, your program should read the elements of the set. After that, your program should display all possible decimal numbers, corresponding binary numbers, and subsets one by one. For the program, you can assume that the number of elements in a set is less than 10.

### Sample Run 0: Assume that the user typed the following input. Note that there are three elements in the set with the elements A, B, and C.

```
3
A B C
```

This is the correct output.

```
0:000:EMPTY
1:001:C
2:010:B
3:011:B C
4:100:A
5:101:A C
6:110:A B
7:111:A B C
```

The first line indicates that the first decimal number and its binary number are “0” and “000”. Note that the first bit ‘0’ in the binary number is for the element ‘A’, the second bit ‘0’ for the element B, and the last bit ‘0’ for the element C. Since all three bits in the binary number are ‘0’, the corresponding subset is “EMPTY”.

The next line indicates that the second decimal number and its binary number are “1” and “001”. The corresponding subset is {C} because only the last bit of the binary number is ‘1’. 

This way, your program should display a decimal number, its binary number, and corresponding subset one by one. For instance, the last line indicates that the last decimal number and its binary number are “7” and “111”. The corresponding subset is {A, B, C} because all bits of the binary number are ‘1’.


### Sample Run 1: Assume that the user typed the following input.

```
2
CST238 CST370
```

This is the correct output.

```
0:00:EMPTY
1:01:CST370
2:10:CST238
3:11:CST238 CST370

```

### Sample Run 2: Assume that the user typed the following input. 
```
0
```

This is the correct output.

```
0:00:EMPTY
```

[Hint]: Refer to this program to convert a [decimal number to corresponding binary number](https://www.geeksforgeeks.org/program-decimal-binary-conversion/)
