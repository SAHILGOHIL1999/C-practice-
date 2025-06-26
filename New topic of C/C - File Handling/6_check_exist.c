// File: example8_check_exist.c
#include <stdio.h>

int main()
{
    FILE *fp = fopen("maybe.txt", "r"); // try opening for read
    if (fp == NULL)
    {
        printf("File does not exist or cannot be opened\n");
        return 1;
    }

    printf("File opened successfully\n");
    fclose(fp);
    return 0;
}
