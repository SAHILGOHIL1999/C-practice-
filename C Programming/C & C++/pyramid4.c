#include <stdio.h>

int main() {
    int i, j, n;

    // Input number of rows
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < i; j++) {
            printf("  "); // 2 spaces for alignment
        }

        // Print alternating 1 0 pattern
        for (j = 1; j < n - i; j++) {
            printf("%d ", j % 2);
        }

        // Newline after each row
        printf("\n");
    }

    return 0;
}
