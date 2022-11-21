#include <stdio.h>

int main() {
    int widthOfImage;
    scanf("%d", &widthOfImage);

    for (int row = 0; row < widthOfImage; row++) {
        for (int column = 0; column < widthOfImage; column++) {
            if (column == 0 || column == widthOfImage - 1) {
                printf("+");
            } else if (row == 0 || row == widthOfImage - 1) {
                printf("*");
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}