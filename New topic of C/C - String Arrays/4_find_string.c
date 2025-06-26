#include <stdio.h>
#include <string.h>

int main()
{
    char msg[] = "Count my length";
    size_t len = strlen(msg); // number of chars before '\0'
    printf("Length: %zu\n", len);
//    printf("Length: %d\n", len);
    return 0;
}