// Write a program where from SI the account balance of a user is read. After this, 5 amounts are read as well.
// The amounts represent transactions. If the amount is positive, then that's a deposit, otherwise, it's a withdrawal.
// Print on SO 1 if after the 5 transactions the user still has some money on the account, or 0 otherwise.

#include <stdio.h>

int main() {
    int accountAvailableAmount, transactionOne, transactionTwo, transactionThree, transactionFour, transactionFive, transactionTotal;
    scanf("%d", &accountAvailableAmount);
    scanf("%d%d%d%d%d", &transactionOne, &transactionTwo, &transactionThree, &transactionFour, &transactionFive);

    transactionTotal = transactionOne + transactionTwo + transactionThree + transactionFour + transactionFive;

    printf("%d", accountAvailableAmount + transactionTotal > 0 ? 1 : 0);

    return 0;
}