#include <stdio.h>

// Get Highest value of two values using functions.

int getHighest(int, int);

int main()
{
    printf("Highest value = %d\n",getHighest(20, 40));
    printf("Highest value = %d\n",getHighest(43, 25));

    return 0;
}

int getHighest(int a, int b)
{
    if(a > b)
        return  a;

    else if(b > a)
        return b;
}