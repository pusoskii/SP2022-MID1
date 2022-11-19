#include <stdio.h>

int main() {
    int numberOfPairs;
    scanf("%d", &numberOfPairs);

    for (int i = 0; i < numberOfPairs; i++) {
        int scoredPoints, maxPoints;
        float percentage;
        scanf("%d%d", &scoredPoints, &maxPoints);

        percentage = (float) (100 * scoredPoints) / maxPoints;

        if (percentage >= 90) printf("%.2f 10\n", percentage);
        else if (percentage >= 80) printf("%.2f 9\n", percentage);
        else if (percentage >= 70) printf("%.2f 8\n", percentage);
        else if (percentage >= 60) printf("%.2f 7\n", percentage);
        else if (percentage >= 50) printf("%.2f 6\n", percentage);
        else printf("%.2f FAIL\n", percentage);
    }

    return 0;
}