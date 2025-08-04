#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    ptr = str;

    // Count characters until null character or newline
    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    printf("Length of the string is: %d\n", length);

    return 0;
}
