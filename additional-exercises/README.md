# Additional Exercises

## Acronyms

SO - Standard output  
SI - Standard input

## Exercise 1 ([ex1.c](/ex1.c))

An integer **x** is read from SI.  
Print 1 on SO if **x** ∈ (-100, 100) U [200, 300), otherwise print 0.

## Exercise 2 ([ex2.c](/ex2.c))

Write a program that reads user's account balance (from SI).  
Afterwards, read 5 amounts. The amounts represent transactions.

If the amount is positive, then the transaction is a deposit, otherwise, it's a withdrawal.

Print 1 on SO if after the 5 transactions the user still has some money on the account. If not, print 0.

## Exercise 3 ([ex3.c](/ex3.c))

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

```
Input:
181021 9 9 10 10 10 8

Output:
Average grade: 9.333
Student ID: 181021
5 year
Awarded?: 0
```

## Exercise 4 ([ex4.c](/ex4.c))

Read from SI two integers (e.g. a, b). Write a program that will print all numbers from a to b (a < b), such that the
number created as a product of the middle digits is divisible with the number created from the first and last digit.

```
xyyyx
x -> first/last digit
y -> middle digit
```

Do not print the numbers where the product of the middle digits is 0. At the end print the count of printed numbers.

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