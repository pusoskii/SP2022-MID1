# Additional Exercises

## [Exercise 1](ex1.c)

Write a program that reads user's account balance (from SI).\
Afterwards, read 5 amounts. The amounts represent transactions.

If the amount is positive, then the transaction is a deposit, otherwise, it's a withdrawal.

Print 1 on SO if after the 5 transactions the user still has some money on the account. If not, print 0.

## [Exercise 2](ex2.c)

The following information for a student is read from SI:

- ID number (6-digit integer)
- 6 grades from the last semester.

Write a program that on SO will print the following information for the student (take a look at the test cases for the
format):

1. Average grade -> should be printed with 3 decimal places
2. Year of studies -> The students whose index starts with 21 are in second year, 20 are in third year, 19 are fourth
   year etc.
3. Awarded student (1 = awarded, 0 = otherwise) -> A student is awarded if their average grade is greater or equal to
   9.5

**Input:**
```181021 9 9 10 10 10 8```

**Output:**

```
Average grade: 9.333
Student ID: 181021
5 year
Awarded?: 0
```

## [Exercise 3](ex3.c)

From standard input, two numbers (x and n) are entered, then n integers. You need to check if the number x is contained
in the entered n numbers from the keyboard. x will always be less than the n numbers entered after it.

Numbers that meet the requirement need to be printed on the screen. If there are none, print "None".

**_Example:_**

First x and n are entered (let x = 23, n = 4). Then n (in this case 4) numbers are entered from the keyboard (
let them be 1234, 2333, 1122, 1114455). The numbers to be printed on the screen are: 1234 and 2333 because they contain
the number x (in this case 23).

**Input:**

```
23 4
1234
2333
121134
341125
```

**Output:**

```
1234
2333
```

## [Exercise 4](ex4.c)

From SI, the number of students who will be taking the partial exam is read.
Afterwards, their indexes (6-digit numbers) are also entered. The program should divide the students into three groups:

- Group 1: students whose index number ends in 0, 1, 2
- Group 2: students whose index number ends in 3, 4, 5
- Group 3: students whose index number ends in 6, 7, 8, 9.

The program should print the indexes for each group, in the same order as they were entered.
The maximum number of indexes that can be entered is 1000.

**Input:**

```
10
20010 20145 20147 20139 20581 19873 19825 19458 20653
```

**Output:**

```
Group 1
20010 20581 19452
Group 2
20145 19873 19825 20653
Group 3
20147 20139 19458
```
