#include <stdio.h>

int main() {
    int numberOfStudents;
    scanf("%d", &numberOfStudents);

    if (numberOfStudents > 1000 || numberOfStudents == 0) {
        return 0;
    }

    int groupOne[1000], groupTwo[1000], groupThree[1000];
    int groupOneCount = 0, groupTwoCount = 0, groupThreeCount = 0;

    for (int i = 0; i < numberOfStudents; i++) {
        int studentIndex;
        scanf("%d", &studentIndex);
        int studentIndexLastDigit = studentIndex % 10;

        switch (studentIndexLastDigit) {
            case 0:
            case 1:
            case 2:
                groupOne[groupOneCount] = studentIndex;
                groupOneCount++;
                break;
            case 3:
            case 4:
            case 5:
                groupTwo[groupTwoCount] = studentIndex;
                groupTwoCount++;
                break;
            case 6:
            case 7:
            case 8:
            case 9:
                groupThree[groupThreeCount] = studentIndex;
                groupThreeCount++;
                break;
            default:
                break;
        }
    }

    printf("\nGroup 1\n");
    for (int j = 0; j < groupOneCount; j++) {
        printf("%d ", groupOne[j]);
    }

    printf("\nGroup 2\n");
    for (int k = 0; k < groupTwoCount; k++) {
        printf("%d ", groupTwo[k]);
    }

    printf("\nGroup 3\n");
    for (int l = 0; l < groupThreeCount; l++) {
        printf("%d ", groupThree[l]);
    }

    return 0;
}