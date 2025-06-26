#include <stdio.h>

// Function to swap two numbers using pointers
void swapNumbers(int *a, int *b)
{
    int temp = *a; // Store value of first number
    *a = *b;       // Put second number in first
    *b = temp;     // Put first number in second
}

int main()
{
    int first = 25;
    int second = 75;

    printf("=== Swapping Numbers Using Pointers ===\n");
    printf("Before swap: first = %d, second = %d\n", first, second);

    swapNumbers(&first, &second); // Pass addresses

    printf("After swap: first = %d, second = %d\n", first, second);

    return 0;
}