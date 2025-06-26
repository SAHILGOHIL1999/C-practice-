#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "w"); // open (or create) for writing

    if (fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    // write two lines of text
    fprintf(fp, "Hello, File Handling!\n");
    fprintf(fp, "Writing with fprintf.\n");

    fclose(fp); // close when done
    return 0;
}
