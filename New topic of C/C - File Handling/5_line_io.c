#include <stdio.h>

int main()
{
    char buffer[100];
    FILE *fp = fopen("lines.txt", "w+");
    if (fp == NULL)
        return 1;

    // write two lines
    fputs("First line of text\n", fp);
    fputs("Second line here\n", fp);

    rewind(fp);

    // read and display lines
    while (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("Read: %s", buffer);
    }

    fclose(fp);
    return 0;
}
