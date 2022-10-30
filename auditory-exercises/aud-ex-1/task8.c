// Write a program that reads uppercase letter from standard input and prints out in lowercase.
#include<stdio.h>

int main() {
    char character;

    printf("Enter an uppercase letter:\n");
    scanf("%c", &character);
    printf("The lowercase letter is: %c", character + 32);

    return 0;
}