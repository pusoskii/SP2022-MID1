// From SI read the following: VAT code, price and balance on account.
// From the VAT code get the last two digits which represent the VAT %.
// Calculate the total price by adding the VAT % to the original price, and if the user can purchase the item,
// print 1 , or otherwise print 0 on SO.

/*
 * Sample input:
 * 150018 2500 2950
 *
 * Sample output:
 * 1
 */

#include <stdio.h>

int main() {
    int codeVAT, initialPrice, percentageVAT, totalPrice, accountBalance;

    scanf("%d%d%d", &codeVAT, &initialPrice, &accountBalance);

    percentageVAT = codeVAT % 100;

    totalPrice = (initialPrice * percentageVAT) / 100.0 + initialPrice;

    printf("%d", totalPrice <= accountBalance);
    return 0;
}