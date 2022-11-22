#include <stdio.h>
#include <math.h>

int main() {
    int jokerNumber = 0;

    for (int bingoNumber, i = 0, exponent = 6;
         scanf("%d", &bingoNumber) && (bingoNumber > 1 && bingoNumber < 90); i++) {
        if (i < 7 && (bingoNumber < 1 || bingoNumber > 90)) {
            return 0;
        } else if (i < 7) {
            jokerNumber += (bingoNumber % 10) * pow(10, exponent);
            exponent--;
        } else {
            jokerNumber += bingoNumber;
        }
    }

    printf("%d", jokerNumber);
    return 0;
}