// An integer x is read from SI.
// Print 1 on SO if x belongs to the interval (-100, 100) U [200, 300).
// Otherwise print 0.
// Solve using only logical operators, without control structures.

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    printf("%d", (x > -100 && x < 100) || (x >= 200 && x < 300) ? 1 : 0);

    return 0;
}