#include <stdio.h>

int main()
{
    int leap;

    printf("Enter a year =");
    scanf("%d", &leap);

    if(leap % 4 == 0)
    {
        printf("The leap year",leap);
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
} 