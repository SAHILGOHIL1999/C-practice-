#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt", "a"); // open for appending
    if (fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    // new entries will be added at end of file
    fprintf(fp, "New log entry\n");

    fclose(fp);
    return 0;
}
