#include <stdio.h>

int main() {
    int rangeStart, rangeEnd;
    int sum = 0;

    scanf("%d%d", &rangeStart, &rangeEnd);

    for (int i = rangeStart; i < rangeEnd; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    printf("%d", sum);

    return 0;
}