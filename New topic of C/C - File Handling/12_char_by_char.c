#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char ch;

    // Open source file for reading
    source = fopen("sample.txt", "r");
    if (source == NULL)
    {
        printf("Error: sample.txt not found!\n");
        return 1;
    }

    // Open destination file for writing
    destination = fopen("copy.txt", "w");
    if (destination == NULL)
    {
        printf("Error creating copy.txt!\n");
        fclose(source);
        return 1;
    }

    // Copy character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully to copy.txt\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}