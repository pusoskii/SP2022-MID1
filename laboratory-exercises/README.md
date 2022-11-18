# Laboratory exercises

## [Exercise 1](lab-ex-1)

### [Task 1](lab-ex-1/task1.c)

Write a program that will read two integers from SI and on SO will print their sum and product.

### [Task 2](lab-ex-1/task2.c)

Write a program that computes average grade of semester.
The program reads 5 integers and should print out the average as floating point number with two decimal places.

### [Task 3](lab-ex-1/task3.c)

Write a program that for a given amount of money, will print the minimum bills and coins needed to make the payout.
The amount is an integer read from SI. The result should be printed in 9 lines, the number of bills or coins for each of
them.

**Input:**
```2583```

**Output:**

```
1 x 2000
1 x 1000
1 x 500
0 x 100
1 x 50
3 x 10
0 x 5
1 x 2
1 x 1
```

## [Exercise 2](lab-ex-2)

### [Task 1](lab-ex-2/task1.c)

An integer x is read from SI.  
Print 1 on SO if x ∈ (-100, 100) U [200, 300), otherwise print 0.

### [Task 2](lab-ex-2/task2.c)

Read a six-digit number from SI. On SO print 1 if the first is equal to the last,
second is equal to the fifth, and third is equal to the fourth digit of that number.
Otherwise, print 0.

### [Task 3](lab-ex-2/task3.c)

From SI read the following: VAT code, price and balance on account.\
From the VAT code get the last two digits which represent the VAT %. Calculate the total price by adding the VAT % to
the original price, and if the user can purchase the item,
print 1, or otherwise print 0.

**Input:**
```150018 2500 2950```

**Output:**
```1```

## [Exercise 3](lab-ex-3)

### [Task 1](lab-ex-3/task1.c)

A number N is read from SI. The program should print on SO "Tik" if the number is divisible by 3,
"Tak" if the number is divisible by 5 or "Tik-Tak" if the number is divisible by both 3 and 5.
If the number is not divisible by 3 nor 5, then a message "Bad number" should be printed.

### [Task 2](lab-ex-3/task2.c)

Write a program that for a date read from SI (in the format DD MM YYYY) will print on standard output
a message YES if the date is correct and possible, or NO if the date is not correct.

When deciding whether the date is correct or not correct, you have to consider the following factors:\

- Is the month between January and December (1-12)?
- Does the number for days correspond with the number of days in the specified month?
- If the month is February, is the year leap?

Leap years are those which are divisible by 400, or, divisible by 4, but not by 100.

### [Task 3](lab-ex-3/task3.c)

Write a program that for a three-digit number read from SI will check if it is palindrome or not,
and will print out an appropriate message: "Palindrome" if it is, and "Not palindrome" if it isn't.
If the number is not three-digit, write the message "Wrong input".

## [Exercise 4](lab-ex-4)

### [Task 1](lab-ex-4/task1.c)

Write a program that will print the sum of the numbers divisible by 3 in the range [A,B) where A and B are numbers read
from SI.

Explanation: А=10, B=20. Numbers that belong in the interval are 10,11,12,13,..,19. Divisible by 3 are the numbers
12,15,18, and their sum is 45.

**Input:**
```10 20```

**Output:**
```45```

### [Task 2](lab-ex-4/task2.c)

A natural number 'N' is read from the standard input.
Then, N pairs of integers (air measurements of PM10 and PM2.5 particles from the corresponding measuring station for a
given municipality) are read.
Your task is to calculate the mean value of PM10 and PM2.5 particles only from those measuring stations that are in use.

One measuring station is considered to be out of use if it sends a pair of measurements ```-1 -1```.

Note: The result should be printed with 2 decimal places.

#### -Example 1-

**Input:**

```
5 (number of pairs)
35 56 (the first pair)
-1 -1 (the second pair)(...)
0 0
102 189
200 225
```

**Output:**

```
PM10: 84.25 (the mean value of PM10 particles)
PM2.5: 117.50 (the mean value of PM2.5 particles)
```

#### -Example 2-

**Input:**

```
1
-1 -1
```

**Output:**

```
PM10: Can not be calculated
PM2.5: Can not be calculated
```

### [Task 3](lab-ex-4/task3.c)

A number X is read from SI. Afterwards, an undefined amount of numbers is read (until something that is not a number is
scanned).
For each of those numbers, the program should check whether the count of digits of each number is the same as the
count of digits of the number X.
All the numbers that satisfy the condition should be printed on SO.

**Input:**

```
1234
453
3745
123
6
6850
a
```

**Output:**

```
3745
6850
```