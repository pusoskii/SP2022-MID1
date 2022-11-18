#include <stdio.h>

int main() {
    int angleAlpha, angleBeta, angleGamma;

    scanf("%d%d%d", &angleAlpha, &angleBeta, &angleGamma);

    if (angleAlpha + angleBeta + angleGamma > 180 || angleAlpha + angleBeta + angleGamma < 180) {
        printf("NO");
        return 0;
    }

    printf("YES\n");
    if (angleAlpha == 90 || angleBeta == 90 || angleGamma == 90) {
        printf("RIGHT");
    } else if (angleAlpha > 90 || angleBeta > 90 || angleGamma > 90) {
        printf("OBTUSE");
    } else if (angleAlpha < 90 && angleBeta < 90 && angleGamma < 90) {
        printf("ACUTE");
    }

    return 0;
}