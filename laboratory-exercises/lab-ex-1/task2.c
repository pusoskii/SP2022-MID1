// Write a program that computes average grade of semester.
// The program reads 5 integers and should print out the average as floating point number with two decimal places.

#include <stdio.h>

int main() {
    int gradeOne, gradeTwo, gradeThree, gradeFour, gradeFive;
    float average;

    scanf("%d%d%d%d%d", &gradeOne, &gradeTwo, &gradeThree, &gradeFour, &gradeFive);

    average = (gradeOne + gradeTwo + gradeThree + gradeFour + gradeFive) / 5.0;

    printf("%.2f", average);
    return 0;
}