#include <stdio.h>

int main()
{
    int value = 100;
    int *ptr1;   // First level pointer
    int **ptr2;  // Second level pointer
    int ***ptr3; // Third level pointer

    ptr1 = &value; // ptr1 points to value
    ptr2 = &ptr1;  // ptr2 points to ptr1
    ptr3 = &ptr2;  // ptr3 points to ptr2

    printf("value = %d\n", value);
    printf("*ptr1 = %d\n", *ptr1);
    printf("**ptr2 = %d\n", **ptr2);
    printf("***ptr3 = %d\n", ***ptr3);

    // Change value through triple pointer
    ***ptr3 = 500;

    printf("\nAfter change through triple pointer:\n");
    printf("value = %d\n", value);

    return 0;
}