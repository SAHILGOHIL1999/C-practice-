#include <stdio.h>
#include <stdbool.h>

void PrintInteger(int);
void PrintLong(long);
void PrintFloat(float);
void PrintDouble(double);
void PrintCharacter(char);
void PrintString(char[]);
void PrintBoolean(bool);

int main()
{
    int iVal = 25;
    long lVal = 6356;
    float fVal = 32.45;
    double dVal = 5221.75;
    char cVal = 'A';
    char message[] = "Welcome";
    bool bVal = true;

    PrintInteger(iVal);
    PrintLong(lVal);
    PrintFloat(fVal);
    PrintDouble(dVal);
    PrintCharacter(cVal);
    PrintString("message");
    PrintBoolean(bVal);

    return  0;
}

void PrintInteger(int val)
{
    printf("The value is %d\n", val);
}
void PrintLong(long  val)
{
    printf("The value is %ld\n",val);
}
void PrintFloat(float  val)
{
    printf("The value is %.2f\n",val);
}
void PrintDouble(double  val)
{
    printf("The value is %.2f\n", val);
}
void PrintCharacter(char val)
{
    printf("The value is %c\n",val);
}
void PrintString(char val[])
{
    printf("The value is %s\n", val);
}
void PrintBoolean(bool val)
{
    printf("The value is %d\n", val);
}
