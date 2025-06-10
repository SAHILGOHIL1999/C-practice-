#include <stdio.h>
int main()
{
    int a, b, ax, bx;
    printf("Enter a value A = ");
    scanf("%d", &a);

    printf("Enter a value B = ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Zero");
    }
    else
    {
        if (a > 100)
            ax = a - 100;
        else
            ax = 100 - a;

        if (b > 100)
            bx = b - 100;
        else
            bx = 100 - b;

        if (ax < bx)
        {
            printf("A near 100");
        }
        else if (bx < ax)
        {
            printf("B near 100");
        }
        else
        {
            printf("equal both");
        }
    }
    return 0;
}