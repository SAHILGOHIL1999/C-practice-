#include <stdio.h>

/* Write a Program to convert a positive number into negative number and negative
number into a positive number.*/

int main()
{
    int val;

    printf("Enter a value = ");
    scanf("%d", &val);

    if (val > 0)
    {
        printf("Converted number is Negative\n");
        val = val - (val + val);
    }

    else if (val < 0)
    {
        printf("Converted number is Positive\n");
        val = val - (val + val);
    }   

    else
    {
        printf("Value is zero");
    }

    printf("Number is %d\n", val);

    return 0;
}

/* if(val != 0)
{
    val = val - (val + val);
    printf("Converted number is %d\n", val);
}
*/