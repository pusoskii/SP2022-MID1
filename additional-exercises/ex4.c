#include <stdio.h>

int main() {
    int rangeStart, rangeEnd, printedNumbers;
    printedNumbers = 0;

    // Enter range (two numbers)
    scanf("%d%d", &rangeStart, &rangeEnd);

    // Terminate the program if the first number of the range is bigger or equal than the second number
    if (rangeStart >= rangeEnd) {
        return 0;
    }

    // Go through all the numbers in the range
    for (int i = rangeStart; i <= rangeEnd; i++) {
        
        int firstDigit, lastDigit, middleDigits, divisor, quotient;
        int numberOfDigits = 0, currentNumber = i, tmp = 0;

        // Count the number of digits in the current number
        while (currentNumber != 0) {
            currentNumber /= 10;
            numberOfDigits++;
        }

        int middleDigitsCount =
                numberOfDigits - 2; // Number of middle digits = total number of digits - first&last digit (2)
        currentNumber = i;

        // Store the rightmost digit of the current number
        lastDigit = currentNumber % 10;

        // Remove the rightmost digit from the current number
        currentNumber /= 10;

        // Calculate the power needed for retrieving the n-number of middle digits
        int power = 1;
        for (int j = 1; j <= middleDigitsCount; j++) {
            power *= 10;
        }

        // Store the middle digits
        middleDigits = currentNumber % power;

        // Remove the middle digits from the current number
        currentNumber /= power;

        // Store the remaining digit of the current number as its first (rightmost) digit
        firstDigit = currentNumber;

        int dividend = 1;

        // Go through the middle digits
        for (int k = 1; k <= middleDigitsCount; k++) {

            // Calculate the power needed for retrieving each middle digit
            power = 1;
            for (int l = 1; l < k; l++) {
                power *= 10;
            }

            // Drop the rightmost middle digit
            tmp = middleDigits / power;

            // Multiply the current middle digit with the product of the other middle digits
            dividend *= tmp % 10;
        }

        // Create a number from the first and last digit of the current number
        divisor = firstDigit * 10 + lastDigit;

        quotient = dividend / divisor;

        // Check if the product of the middle digits is different from 0 and divisible by the newly-formed number (first and last digit)
        if (dividend != 0 && dividend % divisor == 0) {
            printf("%d -> (%d == %d * %d)\n", i, dividend, divisor, quotient);

            // Count if the number has been printed
            printedNumbers++;
        }
    }

    // Display the number of prints
    printf("%d", printedNumbers);

    return 0;
}
