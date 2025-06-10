#include <stdio.h>

// Find Highest value of two values using functions.

void findHighet(int, int);

int main()
{
    findHighet(30, 50);
    findHighet(150, 80);
    findHighet(60, 60);

    return 0;
}

void findHighet(int a,int b)
{
    if(a > b)
        printf("%d is bigger than %d\n",a,b);

    else if(b > a)
        printf("%d is bigger than %d\n",b, a);

    else
        printf("%d is equal %d\n",a, b);
}