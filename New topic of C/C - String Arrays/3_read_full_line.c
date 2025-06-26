#include <stdio.h>

int main()
{
    char line[100];
    printf("Enter a line of text:\n");
    fgets(line, sizeof(line), stdin); // reads until newline or 99 chars
    // OR
    // gets(line);

    printf("You wrote: %s", line); // `line` already contains '\n' if room
    return 0;
}