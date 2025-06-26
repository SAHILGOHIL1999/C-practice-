#include <stdio.h>

int main()
{
    FILE *fp; // File pointer declaration

    // Open file in write mode - creates new file or overwrites existing
    fp = fopen("sample.txt", "w");

    // Check if file opened successfully
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // Write formatted text to file
    fprintf(fp, "Hello World!\n");
    fprintf(fp, "This is my first file.\n");
    fprintf(fp, "Learning C file handling.\n");

    // Always close the file
    fclose(fp);

    printf("Data written to sample.txt successfully!\n");
    return 0;
}