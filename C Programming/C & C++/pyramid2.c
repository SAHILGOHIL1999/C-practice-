#include <stdio.h>

int main() {
    int i, j, rows, number = 11;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {          // Outer loop for rows
        for (j = 1; j <= i; j++) {         // Inner loop for columns
            printf("%d ", number);
            number++;                      // Increment number
        }
        printf("\n");                      // New line after each row
    }

    return 0;
}
