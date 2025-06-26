#include <stdio.h>

int main()
{
    FILE *fp = fopen("chars.txt", "w+"); // create and open for read/write
    if (fp == NULL)
        return 1;

    // write characters A–E
    for (char c = 'A'; c <= 'E'; c++)
    {
        fputc(c, fp);
    }

    rewind(fp); // go back to start of file

    // read and print each character
    int ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }
    putchar('\n');

    fclose(fp);
    return 0;
}
