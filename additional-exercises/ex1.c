#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    printf("%d", (x > -100 && x < 100) || (x >= 200 && x < 300) ? 1 : 0);

    return 0;
}