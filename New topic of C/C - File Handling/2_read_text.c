#include <stdio.h>

int main()
{
    char str[50];
    int num;

    FILE *fp = fopen("data2.txt", "r"); // open existing file for reading

    if (fp == NULL)
    {
        perror("Failed to open file");
        return 1;
    }

    // assume data2.txt contains: 1234 Example
    fscanf(fp, "%d %49s", &num, str); // read an int and a string
    printf("Number: %d, String: %s\n", num, str);

    fclose(fp);
    return 0;
}
