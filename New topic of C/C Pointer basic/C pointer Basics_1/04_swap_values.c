#include <stdio.h>

int main()
{
    int num1 = 5, num2 = 10;
    int *p1, *p2;
    int temp;

    p1 = &num1; // p1 points to num1
    p2 = &num2; // p2 points to num2

    printf("Before swap:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Swap using pointers
    temp = *p1; // temp = value at p1 (num1's value)
    *p1 = *p2;  // put num2's value into num1
    *p2 = temp; // put temp (original num1) into num2

    printf("After swap:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}