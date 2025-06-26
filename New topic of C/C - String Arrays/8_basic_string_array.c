#include <stdio.h>

int main()
{
    // Declare and initialize string array using array of pointers
    char *fruits[4] = {"Apple", "Banana", "Orange", "Mango"};

    // Print all strings in the array
    printf("Fruits list:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, fruits[i]);
    }

    return 0;
}