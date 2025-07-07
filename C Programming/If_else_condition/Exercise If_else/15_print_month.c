#include <stdio.h>

// Write a program to input month number and print number of days in that month.

int main()
{
    int m;

    printf("Enter a month number = ");
    scanf("%d",&m);

    if(m == 2)
    {
        printf("28 or 29 of month days");
    }
    else if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        printf("Total month day of  31");
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11)
    {
        printf("Total month day of  30");
    }
    else
    {
        printf("Invaild month");
    }
    return 0;
}