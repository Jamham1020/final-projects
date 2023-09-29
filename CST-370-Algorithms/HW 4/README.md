# HW 4

## 1. Write a C++ (or Java) program for hw4_1 that reads a number of input values and the values themselves. Then, your program should put all negative numbers in front of all positive numbers. Read this document for your [reference](https://bit.ly/2tVfxKt)


Input format: This is a sample input from a user. 

```
8
5 -3 1 -9 -8 2 -4 7
```

The first line (= 8 in the example) indicates that there are 8 integer values in the second line, and the actual 8 values in the second line. 

### Sample Run 0: Assume that the user typed the following lines

```
8
5 -3 1 -9 -8 2 -4 7
```

This is the correct output. Your program should display the results of the two approaches described in the [document](https://bit.ly/2tVfxKt) on the screen.

```
-4 -3 -8 -9 1 2 5 7
-3 -9 -8 -4 1 2 5 7
```

### Sample Run 1: Assume that the user typed the following lines

```
8
-4 3 9 -6 2 -5 8 7
```

This is the correct output. 
```
5
-10 -30 25 -15 40
```

### Sample Run 2: Assume that the user typed the following lines

```
8
-4 3 9 -6 2 -5 8 7
```

This is the correct output. 
```
-10 -30 -15 25 40
-10 -30 -15 25 40
```

## 2. Write a C++ (or Java) program for hw4_2 which displays the biggest number in an array with n integer numbers using a divide-and-conquer technique. For example, if your algorithm has an input array such as 1, 3, 11, 7, 5, 6, 4, 9, your algorithm should display 11.
In this program, you have to use a divide-and-conquer technique to display the max value. For the grading, we will read your source code. If you do not use a divide-and-conquer technique to find it, you will get zero even if your program passes all test cases. 

Remember that a divide-and-conquer program should use a recursive function. Refer to a sample divide-and-conquer program to add the values in an array at https://replit.com/@fjia/sumdivNconqcpp - main.cpp 


### Sample Run 0: Assume that the user typed the following data

```
8
1 3 11 7 5 6 4 9
```
The first line (= 8 in the example) indicates the number of input data, and the following line shows the input values. This is the correct output of your program.

```
11
```

### Sample Run 1: Assume that the user typed the following data

```
3
-3 1 -5
```

This is the correct output of your program.

```
1
```

### Sample Run 2: Assume that the user typed the following data

```
4
10 99 99 10
```

This is the correct output of your program.

```
99
```

3. Write a C++ (or Java) program for hw4_3 that conducts the topological sorting based on the Kahn algorithm covered in the lecture. 

Input format: This is a sample input from a user. 

```
4 
5
0 1
0 2
0 3
1 3
2 3
```

The first line (= 4 in the example) indicates that there are four vertices in the graph. For the homework, you can assume that the first vertex starts from the number 0. The second line (= 5 in the example) represents the number of edges in the graph, and following five lines are the edges. This is the graph with the input data. 

![image](https://github.com/Jamham1020/final-projects/assets/64275401/4d3aa714-1b79-4719-9cd9-52d06de3febf)

### Sample Run 0: Assume that the user typed the following lines

```
4 
5
0 1
0 2
0 3
1 3
2 3
```
This is the correct output. Your program should display the numbers of incoming degrees of each vertex first. For example, the vertex 3 has three incoming degrees which is represented as “In-degree[3]:3”. After the incoming degree information, your program should display the topological order as you learned in the class.

```
In-degree[0]:0
In-degree[1]:1
In-degree[2]:1
In-degree[3]:3
Order:0->1->2->3
```

### Sample Run 1: Assume that the user typed the following lines

```
5 
4
0 1
1 2
0 2
3 4
```

This is the correct output.

```
In-degree[0]:0
In-degree[1]:1
In-degree[2]:2
In-degree[3]:0
In-degree[4]:1
Order:0->3->1->4->2
```

![image](https://github.com/Jamham1020/final-projects/assets/64275401/7a2c0e48-4a8d-4c71-bf7b-7054fc90ccd5)

### Sample Run 1: Assume that the user typed the following lines

```
3 
3
0 1
1 2
2 0
```


This is the correct output. Note that this graph is not a DAG (= directed acyclic graph) and there’s no topological order for a non-DAG.

```
In-degree[0]:1
In-degree[1]:1
In-degree[2]:1
No Order:
```


