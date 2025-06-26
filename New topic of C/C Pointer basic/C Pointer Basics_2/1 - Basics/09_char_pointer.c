#include <stdio.h>

int main()
{
    char ch = 'A';         // Single character
    char *ptr_ch;          // Character pointer
    char name[] = "Hello"; // Character array (string)
    char *ptr_str;         // Pointer to string

    ptr_ch = &ch;   // Point to character
    ptr_str = name; // Point to first character of string

    printf("Character: %c\n", ch);
    printf("Through pointer: %c\n", *ptr_ch);
    printf("String: %s\n", name);
    printf("Through pointer: %s\n", ptr_str);
    printf("First character of string: %c\n", *ptr_str);

    return 0;
}