#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    lastDigit = number % 10;  

    firstDigit = number;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    int sum = firstDigit + lastDigit;

    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
