#include <stdio.h>


// Find biggest value within three values - way 2
int main()
{
    int a = 10, b = 34, c = 24;
    if (a > b && a > c)
    {
        printf("%d is biggest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is biggest", b);
    }
    else
    {
        printf("%d is biggest", c);
    }

    // It is only single operation than you can write as below
    if (a > b && a > c)
        printf("%d is biggest", a);
    else if (b > a && b > c)
        printf("%d is biggest", b);
    else
        printf("%d is biggest", c);

    // In a single line
    if (a > b && a > c)                     printf("%d is biggest", a);
    else if (b > a && b > c)                printf("%d is biggest", b);
    else                                    printf("%d is biggest", c);

    return 0;
}