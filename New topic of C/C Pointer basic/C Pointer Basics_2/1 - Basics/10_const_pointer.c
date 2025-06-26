#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    // Pointer to constant - cannot change value through pointer
    const int *ptr1 = &a;
    printf("Value: %d\n", *ptr1);
    // *ptr1 = 30;  // This would cause error
    ptr1 = &b; // But can point to different variable
    printf("New value: %d\n", *ptr1);

    // Constant pointer - cannot change where it points
    int *const ptr2 = &a;
    *ptr2 = 30; // Can change value
    printf("Changed value: %d\n", *ptr2);
    // ptr2 = &b;   // This would cause error

    return 0;
}