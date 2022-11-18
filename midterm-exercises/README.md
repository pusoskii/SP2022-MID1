# Midterm exercises

## [Task 2](task2.c)

Read from SI two integers. Write a program that will print all numbers within the range, such that the
number created as a product of the middle digits is divisible with the number created from the first and last digit.
At the end print the count of printed numbers.

```
xyyyx
x -> first/last digit
y -> middle digit
```

Do not print the numbers where the product of the middle digits is 0.

When printing out the numbers, next to each number that satisfies the condition, print the equation of that condition,
for example: ```55650 -> (150 == 50 * 3)```, where 150 = 5 * 6 * 5 and 50 is constructed from 5 (the first digit) and
the 0 (the last digit of the number).

```
Input:
55560 55800

Output:
55560 -> (150 == 50 * 3)
55580 -> (200 == 50 * 4)
55650 -> (150 == 50 * 3)
55694 -> (270 == 54 * 5)
55786 -> (280 == 56 * 5)
5
```

## [Task 11](task11.c)

Three natural numbers А, B and C are entered from the SI.

Write a program that will check if the three entered numbers can represent the values of angles (_in degrees_) within a
triangle.

If the values can represent angles of a triangle print **YES** in the first line of the standard output followed by type
of the triangle (RIGHT, ACUTE or OBTUSE) in the next line. If triangle is not possible with the tree given angles
print **NO** in a single line.

```
_Example 1_

Input:
100 50 30

Output:
YES
OBTUSE
```

```
_Example 2_

Input:
100 50 50

Output:
NO
```

## [Task 12](task12.c)

A whole number N greater than 0 is entered from SI, followed by N pairs of natural numbers greater than 10.
Write a program that for every pair of entered numbers will check if the number obtained by moving the last digit of the
first number on its first place is greater that the second number in the pair or not.

Print on SO "YES" if the condition is satisfied or "NO" if the condition is not satisfied on in a single line for each
pair of numbers.

(Example for moving the last digit of a number on its first place: 1234 -> 4123, 98700 -> 9870). If the numbers 3456 and
6210 are entered as a pair "YES" should be printed since 6345 > 6210.