// File: string5.c
#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Source text";
    char dest[50];     // ensure large enough to hold src + '\0'
    strcpy(dest, src); // copy src into dest
    printf("Destination: %s\n", dest);
    return 0;
}
