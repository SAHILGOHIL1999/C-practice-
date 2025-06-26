#include <stdio.h>

// Function to show relationship between variables and their addresses
void showAddresses()
{
    int a = 10;
    int b = 20;
    int *ptr_a = &a; // Pointer to variable 'a'
    int *ptr_b = &b; // Pointer to variable 'b'

    printf("Variable a = %d, Address = %p\n", a, &a);
    printf("Variable b = %d, Address = %p\n", b, &b);
    printf("Pointer ptr_a points to address: %p\n", ptr_a);
    printf("Pointer ptr_b points to address: %p\n", ptr_b);
}

int main()
{
    printf("=== Pointer and Address Demo ===\n");
    showAddresses();
    return 0;
}