#include <stdio.h>

int main()
{
    // Allocate a buffer for the string.
    // [100] meaning of write till 100 charters
    char sval[100]; 
    printf("Enter your name = ");
    // Using scanf to read a word (stops at whitespace).
    scanf("%99s", sval);
    printf("Hello, %s\n", sval);
    return 0;
}   