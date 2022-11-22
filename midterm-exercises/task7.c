#include <stdio.h>

int main() {
    int startNumber, numberWithLargestSum;
    int largestSum = 0, currentSum = 0;
    scanf("%d", &startNumber);
    for (int i = startNumber - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                currentSum += j;
            }
        }

        if (currentSum > largestSum) {
            largestSum = currentSum;
            numberWithLargestSum = i;
        }

        currentSum = 0;
    }

    printf("%d", numberWithLargestSum);

    return 0;
}