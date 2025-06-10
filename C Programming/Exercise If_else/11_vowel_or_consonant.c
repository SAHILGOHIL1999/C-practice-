#include <stdio.h>

// Write a program to input any alphabet and check whether it is vowel or consonant.

int main()
{
    char ch;

    printf("Enter a alphabet =");
    scanf("%c", &ch);
    
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("Alphabet is vowel");
        }
        else
        {
            printf("Alphabet is consonant");
        }
    return 0;
}
