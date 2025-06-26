#include <stdio.h>

// Function to perform addition using pointers
void add(int *a, int *b, int *result)
{
    *result = *a + *b;
}

// Function to perform subtraction using pointers
void subtract(int *a, int *b, int *result)
{
    *result = *a - *b;
}

int main()
{
    int num1 = 20;
    int num2 = 8;
    int result = 0;

    printf("=== Simple Calculator Using Pointers ===\n");
    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    add(&num1, &num2, &result);
    printf("Addition: %d\n", result);

    subtract(&num1, &num2, &result);
    printf("Subtraction: %d\n", result);

    return 0;
}