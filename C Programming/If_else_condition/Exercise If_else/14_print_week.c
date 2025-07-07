#include <stdio.h>

// Write a program to input week number and print week day.

int main()
{
    int wk;

    printf("Enter a Week number=");
    scanf("%d",&wk);

    if(wk == 1)
    {
        printf("Sunday");
    }
    else if(wk == 2)
    {
        printf("Monday");
    }
    else if(wk == 3)
    {
        printf("Tuesday");
    }
    else if(wk == 4)
    {
        printf("Wednesday");
    }
    else if(wk == 5)
    {
        printf("Thursday");
    }
    else if(wk == 6)
    {
        printf("Friday");
    }
    else if(wk == 7)
    {
        printf("Saturday");
    }
    else
    {
        printf("Invaild day");
    }
    return 0;
}