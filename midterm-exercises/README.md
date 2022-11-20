# Midterm exercises

## [Task 2](task2.c)

Read from SI two integers. Write a program that will print all numbers within the range, such that the
number created as a product of the middle digits is divisible with the number created from the first and last digit.
At the end print the count of printed numbers.

```
xyyyz
x -> first
yyy -> middle digits
z -> last digit
```

**Do not** print the numbers where the product of the middle digits is 0.

When printing out the numbers, next to each number that satisfies the condition, print the equation of that condition,
for example: ```55650 -> (150 == 50 * 3)```, where 150 = 5 * 6 * 5 and 50 is constructed from 5 (the first digit) and
the 0 (the last digit of the number).

**Input:**
```55560 55800```

**Output:**

```
55560 -> (150 == 50 * 3)
55580 -> (200 == 50 * 4)
55650 -> (150 == 50 * 3)
55694 -> (270 == 54 * 5)
55786 -> (280 == 56 * 5)
5
```

## [Task 4](task4.c)

From SI are read N pairs of integers, where the first number is the students' points, and the second is the max. points.
Write a program where for each pair (points, max points), will print the student's success in percentage and his grade
following these rules:

- if the student has 90% or more - "10".
- if the student has 80% or more - "9".
- if the student has 70% or more - "8".
- if the student has 60% or more - "7".
- if the student has 50% or more - "6".
- If the student has less than 50% print "FAIL".

**Input:**

```
4
19 20
27 40
55 70
38 100
```

**Output:**

```
95.00 10
67.50 7
78.57 8
38.00 FAIL
```

## [Task 11](task11.c)

Three natural numbers А, B and C are entered from the SI.

Write a program that will check if the three entered numbers can represent the values of angles (_in degrees_) within a
triangle.

If the values can represent angles of a triangle print "YES" in the first line of the standard output followed by type
of the triangle (RIGHT, ACUTE or OBTUSE) in the next line. If triangle is not possible with the tree given angles
print "NO" in a single line.

#### -Example 1-

**Input:**
```100 50 30```

**Output:**

```
YES
OBTUSE
```

#### -Example 2-

**Input:**
```100 50 50```

**Output:**
```NO```

## [Task 12](task12.c)

A whole number N greater than 0 is entered from SI, followed by N pairs of natural numbers greater than 10.
Write a program that for every pair of entered numbers will check if the number obtained by moving the last digit of the
first number on its first place is greater that the second number in the pair or not.

Print on SO "YES" if the condition is satisfied or "NO" if the condition is not satisfied on in a single line for each
pair of numbers.

#### -Example-

Moving the last digit: 1234 -> 4123, 98700 -> 9870. If the numbers 3456 and
6210 are entered as a pair "YES" should be printed since 6345 > 6210.

**Input:**

```
4
56 4532
423 90
90 300
543 300
```

**Output:**

```
NO
YES
NO
YES
```

## [Task 13](task13.c)

Sweet number is a number that contains only even digits (0, 2, 4, 6, 8).
In given range (m and n read from SI), find the smallest "sweet number".
If there is no such number, print "NSN".

**Input:**
```1000 5000```

**Output:**
```2000```
