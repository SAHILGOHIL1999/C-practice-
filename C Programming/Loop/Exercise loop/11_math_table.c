#include <stdio.h>

// Accept a value and print math table of it.

int main()
{
    int i = 1, num, multiply;

    printf("Math table = ");
    scanf("%d", &num);

    while (i <= 10)
    {
        multiply = num * i;
        printf("%d * %d = %d\n",num,i,multiply);
        i++;
    }
    return 0;
}