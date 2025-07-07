#include <stdio.h>

// Return addition, subtraction, division and multiplication from the function.

int getAddition(int, int);
int getSubtraction(int, int);
int getdivision(int, int);
int getmultiplication(int, int);


int main()
{
    printf("Addition is %d\n", getAddition(20,40));
    printf("Subtraction is %d\n", getSubtraction(50,10));
    printf("Division is %d\n", getdivision(24, 3));
    printf("Multiplication is %d\n", getmultiplication(4, 6));

    return 0;
}

int getAddition(int a, int b)
{
    return  a + b;
}

int getSubtraction(int a, int b)
{
    return a - b;
}

int getdivision(int a, int b)
{
    return a / b;
}

int getmultiplication(int a, int b)
{
    return a * b;
}