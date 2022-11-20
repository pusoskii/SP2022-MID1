#include <stdio.h>

int main() {
    int sum;
    int enteredPairs, validPairs = 0;

    scanf("%d", &sum);

    if (sum <= 0) {
        return 0;
    }

    for (enteredPairs = 0;; enteredPairs++) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a + b == sum) {
            ++validPairs;
        } else if (a == 0 || b == 0) {
            break;
        } else {
            continue;
        }
    }

    float percentage = (float) (100 * validPairs) / enteredPairs;
    printf("You entered %d pair of numbers whose sum is %d\n"
           "The percentage of pairs with sum %d is %.2f%%", validPairs, sum, sum, percentage);

    return 0;
}