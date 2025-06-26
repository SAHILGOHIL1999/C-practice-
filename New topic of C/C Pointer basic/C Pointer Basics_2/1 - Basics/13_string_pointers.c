#include <stdio.h>

int main()
{
    // Array of string pointers
    char *names[4] = {"Alice", "Bob", "Charlie", "Diana"};

    printf("Names using string pointers:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    // Access individual characters
    printf("\nFirst character of each name:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%s starts with: %c\n", names[i], *names[i]);
        // or names[i][0]
    }

    return 0;
}