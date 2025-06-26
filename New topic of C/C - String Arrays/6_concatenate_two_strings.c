#include <stdio.h>
#include <string.h>

int main()
{
    char a[100] = "Hello";
    char b[] = ", World!";
    strcat(a, b);      // append b onto the end of a
    printf("%s\n", a); // prints "Hello, World!"
    return 0;
}