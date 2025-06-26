// Accessing individual elements of 2D array
#include <stdio.h>

    int
    main()
{
    // Initialize 2x4 array
    int numbers[2][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80}};

    printf("Complete 2D Array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    printf("\nAccessing specific elements:\n");
    printf("Element at [0][0]: %d\n", numbers[0][0]); // First row, first column
    printf("Element at [0][3]: %d\n", numbers[0][3]); // First row, last column
    printf("Element at [1][2]: %d\n", numbers[1][2]); // Second row, third column

    return 0;
}