// Write a program that for given sides of a triangle,
// it will print the perimeter and area squared (values are a = 5, b = 7.5, c = 10.2).

#include <stdio.h>

int main() {
    int a = 5;
    float b = 7.5, c = 10.2, perimeter, semiPerimeter, squaredArea;

    perimeter = a + b + c;
    semiPerimeter = perimeter / 2;
    squaredArea = semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c);

    printf("Sides of the triangle: %d, %.2f, %.2f\n", a, b, c);
    printf("The perimeter of the triangle is: %.2f\n", perimeter);
    printf("The squared area of the triangle is: %.2f\n", squaredArea);

    return 0;
}