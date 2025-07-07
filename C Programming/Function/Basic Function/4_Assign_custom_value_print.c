#include <stdio.h> // Standard input out header

// Print a sum of user defined two values by function / method

void printValue(int);

int main()
{
    printValue(25); // Call First Time

    printValue(36); // Call Second Time

    return 0;
}

void printValue(int val)
{
    printf("The value is %d\n", val);
}
