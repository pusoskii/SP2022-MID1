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