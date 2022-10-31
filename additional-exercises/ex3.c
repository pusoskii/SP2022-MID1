// The following information for a FINKI student is read from SI:
// ID number (6-digit integer), 6 grades from the last semester

// Write a program that on SO will print the following information for the student (take a look at the test cases for the format):
// Average grade -> should be printed with 3 decimal places
// Year of studies -> The students whose index starts with 21 are in second year, 20 are in third year, 19 are fourth year etc.
// Awarded student (1 = awarded, 0 = otherwise) -> A student is awarded if their average grade is greater or equal to 9.5

// Input:
// 181021 9 9 10 10 10 8

// Output:
// Average grade: 9.333
// Student ID: 181021
// 5 year
// Awarded?: 0

#include <stdio.h>

int main() {
    int studentID, gradeOne, gradeTwo, gradeThree, gradeFour, gradeFive, gradeSix;
    float averageGrade;

    scanf("%d%d%d%d%d%d%d", &studentID, &gradeOne, &gradeTwo, &gradeThree, &gradeFour, &gradeFive, &gradeSix);

    averageGrade = (gradeOne + gradeTwo + gradeThree + gradeFour + gradeFive + gradeSix) / 6.0;
    printf("Average grade: %.3f\n", averageGrade);
    printf("Student ID: %d\n", studentID);

    int yearStudies = 1;

    for (int i = 22; i >= (studentID / 10000) % 100; i--) {
        if (i != 22)
            ++yearStudies;
    }

    printf("%d year\n", yearStudies);
    printf("Awarded?: %d\n", averageGrade >= 9.5 ? 1 : 0);

    return 0;
}