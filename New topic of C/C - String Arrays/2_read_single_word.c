#include <stdio.h>

int main()
{
    char name[50]; // reserve space for up to 49 chars + '\0'
    printf("Enter your name: ");
    scanf("%49s", name); // read a word (stops at whitespace)

    printf("You entered: %s\n", name);
    return 0;
}