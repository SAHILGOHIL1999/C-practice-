#include <stdio.h>

int main() {
    int i, j, space, rows = 5;

    for (i = rows; i >= 1; i--) {
        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf("  "); // Two spaces for alignment
        }

        // Print increasing numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        // Print decreasing numbers from 4 back to i
        for (j = 5 - 1; j >= i; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
