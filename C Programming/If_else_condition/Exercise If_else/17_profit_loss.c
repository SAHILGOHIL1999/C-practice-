#include <stdio.h>

// Write a program to calculate profit or loss.

int main()
{
    int p, s;

    printf("Enter a purchase price =");
    scanf("%d",&p);

    printf("Enter a selling price =");
    scanf("%d",&s);

    if(p < s )
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
    return 0;
}