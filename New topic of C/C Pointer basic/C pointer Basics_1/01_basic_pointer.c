#include <stdio.h>

int main()
{
    int num = 42; // A normal integer variable
    int *ptr;     // A pointer variable (stores address)

    ptr = &num; // ptr now stores the address of num

    printf("Value of num: %d\n", num);          // Print value of num
    printf("Address of num: %p\n", &num);       // Print address of num
    printf("Value stored in ptr: %p\n", ptr);   // Print what ptr contains (address)
    printf("Value pointed by ptr: %d\n", *ptr); // Print value at address stored in ptr

    return 0;
}
