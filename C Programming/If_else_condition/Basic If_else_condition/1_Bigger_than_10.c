#include <stdio.h>

// Check v+alue is bigger than 10.

int main()
{
    int val = 12;

    // 1. First Method of print :
    if (val > 10)
    {
        printf ("Value is bigger than 10\n");     /* ek karata vadhare oprations lakhava mate {} brackets ma lakhavu.*/
    }
    
    // 2. Second Method of print :
    //  It is only single operation than you can write as below
    if (val > 10)
    printf ("Value is bigger than 10\n");   

    // 3. Third Method of print :
    if (val > 10)     printf("Value is bigger than 10");  /* In a single line*/

    return 0;
}