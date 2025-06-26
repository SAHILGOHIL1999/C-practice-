#include <stdio.h>

int main()
{
    FILE *fp;

    // Open file in append mode - adds data at the end
    fp = fopen("sample.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Append new lines to existing file
    fprintf(fp, "This line is appended.\n");
    fprintf(fp, "File handling is easy!\n");

    fclose(fp);
    printf("New data appended to sample.txt\n");

    return 0;
}