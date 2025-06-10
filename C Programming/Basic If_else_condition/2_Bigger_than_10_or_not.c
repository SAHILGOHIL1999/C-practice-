#include <stdio.h>

// Check value is bigger than 10 or not

int main()
{
    int val = 12;

    // 1. First Method of print :
    if (val > 10)
    {
        printf("1)Value is bigger than 10\n");
    }
    else
    {
        printf("1)Value is not bigger than 10\n");
    }

    // 2. Second Method of print :
    // It is only single operation than you can write as below
    if (val > 10) 
    printf ("2)Value is bigger than 10\n");

    else
    printf("2)Value is not bigger than 10\n");

    // 3. Third Method of print :
    // In a single line
    if (val > 10 )      printf ("3)Value is bigger than 10\n");
    else                printf("3)Value is not bigger than 10");     

    // 4. fourst Method of print (Statment) :
    // Shorthand - Only useful only for single statement
    val > 10 ? printf ("4)Value is bigger than 10\n")  :   printf ("4)Value is not bigger than 10");

    return 0;
}