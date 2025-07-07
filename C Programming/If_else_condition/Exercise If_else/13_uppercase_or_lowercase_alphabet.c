#include <stdio.h>

// Write a program to check whether a character is uppercase or lowercase alphabet.

int main()
{
    char ch, up, low;

    printf("Enter a character =");
    scanf("%c",&ch);

    if(ch <= 90 && ch >=65)
    {
        printf("%c is uppercase",ch);
    }
    else if(ch <= 122 && ch >=97 )
    {
        printf("character is lowercase");
    }
    return 0;
}
