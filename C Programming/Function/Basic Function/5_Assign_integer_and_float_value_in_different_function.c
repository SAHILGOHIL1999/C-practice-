#include <stdio.h>

// Assign integer and float value in different functions and print it.

void PrintInteger(int);
void PrintFloat(float);

int main()
{
    PrintInteger(25);
    PrintFloat(36.89);

    PrintInteger(56);
    PrintFloat(69.23);

    return 0;
}

void PrintInteger(int val)
{
    printf("The value is %d\n", val);
}

void PrintFloat(float val)
{
    printf("The value is %.2f\n", val);
}