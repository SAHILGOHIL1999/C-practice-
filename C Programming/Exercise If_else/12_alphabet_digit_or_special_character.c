#include <stdio.h>

// Write a program to input any character and check whether it is alphabet, digit or special character.

int main()
{
    char ch;
    printf("Enter a character = ");
    scanf("%c",&ch);

    if(ch >= 97 && ch <= 122 ||  ch >= 65 && ch <= 90)
    {
        printf("character is alphabet");
    }
    else if(ch >= 48 && ch <= 57)
    {
        printf("character is digit");
    }
    else
    {
        printf("character is spical character");
    }
    return 0;
}