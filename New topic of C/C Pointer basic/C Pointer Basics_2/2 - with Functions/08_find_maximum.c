#include <stdio.h>

// Function to find maximum of two numbers using pointers
int findMaximum(int *a, int *b)
{
    if (*a > *b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}

int main()
{
    int num1 = 45;
    int num2 = 67;
    int max;

    printf("=== Finding Maximum Using Pointers ===\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    max = findMaximum(&num1, &num2); // Pass addresses

    printf("Maximum number: %d\n", max);

    return 0;
}