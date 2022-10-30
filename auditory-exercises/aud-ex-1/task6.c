// Write a program for computing and printing the circle area and perimeter.
// The circle radius is read as decimal number.

#include <stdio.h>

int main() {
    const float pi = 3.14;
    float radius, circlePerimeter, circleArea;
    printf("Enter radius of circle:\n");
    scanf("%f", &radius);

    circlePerimeter = 2 * radius * pi;
    circleArea = radius * radius * pi;

    printf("Perimeter of circle with radius %.2f units is %.2f\n", radius, circlePerimeter);
    printf("Area of circle with radius %.2f units is %.2f", radius, circleArea);

    return 0;
}