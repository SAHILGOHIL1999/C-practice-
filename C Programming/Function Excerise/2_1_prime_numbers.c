#include <stdio.h>

// Write C to check prime and armstrong numbers using function.

void checkPrime(int);

int main()
{
    int val = 0;

    printf("Enter a value : ");
    scanf("%d",&val);

    checkPrime(val);

    return 0;
}

void checkPrime(int a)
{
    int i = 0;

    for(i = 2; i < a; i++)
    {
        if(a % i == 0)
            break;
    }

    if(i == a)
        printf("Prime");

    else
        printf("Not Prime");
}