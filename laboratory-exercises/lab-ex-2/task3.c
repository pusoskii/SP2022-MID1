#include <stdio.h>

int main() {
    int codeVAT, initialPrice, percentageVAT, totalPrice, accountBalance;

    scanf("%d%d%d", &codeVAT, &initialPrice, &accountBalance);

    percentageVAT = codeVAT % 100;

    totalPrice = (initialPrice * percentageVAT) / 100.0 + initialPrice;

    printf("%d", totalPrice <= accountBalance);
    return 0;
}