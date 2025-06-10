#include <stdio.h>

/* Write a Program to convert a lowercase character into uppercase and convert
uppercase character into lowercase.*/ 

int main()
{
    char ch;
    
    printf("Enter a character = ");
    scanf("%d",&ch);

    if(ch >= 65 && ch <=90)
    {
        printf("Lowercase = %d",ch);
        ch + 32;
    } 

    else if(ch >= 97 && ch <= 122)
    {
        printf("Upercase = %d",ch);
        ch - 32;
    }
    
    else
    {
        printf("Zero");
    }
    return 0;
}