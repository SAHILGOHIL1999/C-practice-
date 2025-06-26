// String array using 2D character array
#include <stdio.h>

int main()
{
    // Declare 2D character array - each string can be max 10 characters
    char colors[3][10] = {"Red", "Green", "Blue"};

    // Display all colors
    printf("Available colors:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Color %d: %s\n", i + 1, colors[i]);
    }

    return 0;
}