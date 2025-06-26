// Basic 2D array declaration and initialization
#include <stdio.h>

int main()
{
    // Declare and initialize 2D array (3 rows, 3 columns)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("3x3 Matrix:\n");
    printf("===========\n");

    // Display the 2D array using nested loops
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // New line after each row
    }

    return 0;
}