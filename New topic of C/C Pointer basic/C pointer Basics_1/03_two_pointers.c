#include <stdio.h>

int main()
{
    int x = 100;      // One variable
    int *ptr1, *ptr2; // Two pointers

    ptr1 = &x; // First pointer points to x
    ptr2 = &x; // Second pointer also points to x

    printf("x = %d\n", x);
    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %d\n", *ptr2);

    *ptr1 = 200; // Change through first pointer

    printf("\nAfter changing through ptr1:\n");
    printf("x = %d\n", x);
    printf("*ptr1 = %d\n", *ptr1);
    printf("*ptr2 = %d\n", *ptr2); // All show same value

    return 0;
}