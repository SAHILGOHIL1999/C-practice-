#include <stdio.h>

int main()
{
    FILE *fp;
    char word[100]; // Buffer to store each word

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    // Check if file exists and opened successfully
    if (fp == NULL)
    {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("Contents of sample.txt:\n");

    // Read word by word until end of file
    while (fscanf(fp, "%s", word) != EOF)
    {
        printf("%s ", word);
    }
    printf("\n");

    // Close the file
    fclose(fp);

    return 0;
}