#include <stdio.h>

int main() {
    int day, month, year;
    int leapYear = 0;

    scanf("%d%d%d", &day, &month, &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        leapYear = 1;
    }

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day <= 31) {
                printf("YES");
            } else {
                printf("NO");
            }
            break;
        case 02:
            if (day <= 28 && leapYear == 0) {
                printf("YES");
            } else if (day == 29 && leapYear == 1) {
                printf("YES");
            } else {
                printf("NO");
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day <= 30) {
                printf("YES");
            } else {
                printf("NO");
            }
            break;
        default:
            printf("NO");
    }

    return 0;
}