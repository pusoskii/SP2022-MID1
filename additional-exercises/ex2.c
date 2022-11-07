#include <stdio.h>

int main() {
    int accountAvailableAmount, transactionOne, transactionTwo, transactionThree, transactionFour, transactionFive, transactionTotal;
    scanf("%d", &accountAvailableAmount);
    scanf("%d%d%d%d%d", &transactionOne, &transactionTwo, &transactionThree, &transactionFour, &transactionFive);

    transactionTotal = transactionOne + transactionTwo + transactionThree + transactionFour + transactionFive;

    printf("%d", accountAvailableAmount + transactionTotal > 0 ? 1 : 0);

    return 0;
}