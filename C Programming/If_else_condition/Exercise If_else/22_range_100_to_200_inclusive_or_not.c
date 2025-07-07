#include <stdio.h>

/*Write a program to check two given integers whether either of them is in the range  
100 to 200 inclusive or not.*/

int main()
{
    int a, b;

    printf("Enter a value A = ");
    scanf("%d",&a);

    printf("Enter a value B = ");
    scanf("%d",&b);

    if(a >= 100 && a <= 200)
    {
        printf("Inclusive");
    }
    else if(b >= 100 && b <=200)
    {
        printf("Inclusive");
    }
    else 
    {
        printf("Not inclusive");
    }
    return 0;
}