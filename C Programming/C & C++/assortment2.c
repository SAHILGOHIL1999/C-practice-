#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int max;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements of 2D array
    printf("Enter elements of the %dx%d array:\n", rows, cols);
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Initialize max with first element
    max = arr[0][0];

    // Find the largest element
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("The largest element in the 2D array is: %d\n", max);

    return 0;
}
