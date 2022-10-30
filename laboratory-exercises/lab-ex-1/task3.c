// Write a program that for a given amount of money, will print the minimum bills and coins needed to make the payment.
// The amount is integer read from standard input.
// The result should be printed in 9 lines, the number of bills or coins for each of them.

// Example: 1583 denars, will be best payed out as:
// 0 x 5000
// 1 x 1000
// 1 x 500
// 0 x 100
// 0 x 50
// 3 x 10
// 0 x 5
// 1 x 2
// 1 x 1

#include <stdio.h>

int main() {
    int amountMoney;
    int banknotes5000, banknotes1000, banknotes500, banknotes100, banknotes50, banknotes10, coins5, coins2, coins1;

    scanf("%d", &amountMoney);

    banknotes5000 = amountMoney / 5000;
    amountMoney -= banknotes5000 * 5000;

    banknotes1000 = amountMoney / 1000;
    amountMoney -= banknotes1000 * 1000;

    banknotes500 = amountMoney / 500;
    amountMoney -= banknotes500 * 500;

    banknotes100 = amountMoney / 100;
    amountMoney -= banknotes100 * 100;

    banknotes50 = amountMoney / 50;
    amountMoney -= banknotes50 * 50;

    banknotes10 = amountMoney / 10;
    amountMoney -= banknotes10 * 10;

    coins5 = amountMoney / 5;
    amountMoney -= coins5 * 5;

    coins2 = amountMoney / 2;
    amountMoney -= coins2 * 2;

    coins1 = amountMoney;

    printf("%d x 5000\n", banknotes5000);
    printf("%d x 1000\n", banknotes1000);
    printf("%d x 500\n", banknotes500);
    printf("%d x 100\n", banknotes100);
    printf("%d x 50\n", banknotes50);
    printf("%d x 10\n", banknotes10);
    printf("%d x 5\n", coins5);
    printf("%d x 2\n", coins2);
    printf("%d x 1\n", coins1);

    return 0;
}