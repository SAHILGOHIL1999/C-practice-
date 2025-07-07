#include <stdio.h>
#include <stdbool.h>

// Assign different types of value e in different functions and print it.

void PrintInteger(int);
void PrintLong(long);
void PrintFloat(float);
void PrintDouble(double);
void PrintCharacter(char);
void PrintString(char[]);
void PrintBoolean(bool);

int main()
{
    PrintInteger(25);
    PrintLong(6958);
    PrintFloat(12.25);
    PrintDouble(6986.36);
    PrintCharacter('A');
    PrintString("Welcome");
    PrintBoolean(true);

    return 0;
}

void PrintInteger(int val)
{
    printf("The value is %d\n", val);
}
void PrintLong(long val)
{
    printf("The value is %ld\n", val);
}
void PrintFloat(float val)
{
    printf("the value is %.2f\n", val);
}
void PrintDouble(double val)
{
    printf("The value is %.2lf\n", val);
}
void PrintCharacter(char val)
{
    printf("The value is %c\n", val);
}
void PrintString(char val[])
{
    printf("The value is %s\n", val);
}
void PrintBoolean(bool val)
{
    printf("The value is %d\n", val);
}
