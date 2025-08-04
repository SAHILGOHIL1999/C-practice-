#include <stdio.h>

// UDF to cube all elements of 2D array using pointer
void cubeElements(int *arr, int rows, int cols) {
    int total = rows * cols;
    for (int i = 0; i < total; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Call the UDF with pointer to the first element
    cubeElements(&arr[0][0], rows, cols);

    // Print the cubed matrix
    printf("Matrix after cubing elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
