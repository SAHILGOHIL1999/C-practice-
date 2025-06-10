#include <stdio.h>

// Write a program to check whether a character is alphabet or not. 

int main()
{
    char ch, a, z;

    printf("Enter a character =");
    scanf("%c", &ch);

    if((a <= ch && z >= ch)==0)
    {
        printf("character is alphabet");
    }
    else
    {
        printf("character isn't alphabet");
    }
    return 0;   
}