#include <stdio.h>

int main() {
    int amountMoney;
    int banknotes2000, banknotes1000, banknotes500, banknotes200, banknotes100, banknotes50, banknotes10, coins5, coins2, coins1;

    scanf("%d", &amountMoney);

    banknotes2000 = amountMoney / 2000;
    amountMoney -= banknotes2000 * 2000;

    banknotes1000 = amountMoney / 1000;
    amountMoney -= banknotes1000 * 1000;

    banknotes500 = amountMoney / 500;
    amountMoney -= banknotes500 * 500;

    banknotes200 = amountMoney / 200;
    amountMoney -= banknotes200 * 200;

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

    printf("%d x 2000\n", banknotes2000);
    printf("%d x 1000\n", banknotes1000);
    printf("%d x 500\n", banknotes500);
    printf("%d x 200\n", banknotes200);
    printf("%d x 100\n", banknotes100);
    printf("%d x 50\n", banknotes50);
    printf("%d x 10\n", banknotes10);
    printf("%d x 5\n", coins5);
    printf("%d x 2\n", coins2);
    printf("%d x 1\n", coins1);

    return 0;
}