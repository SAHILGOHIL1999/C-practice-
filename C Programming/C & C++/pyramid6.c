#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        // Print increasing numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print spaces: (2*(n-i)) spaces
        int space_count = 2 * (n - i);
        for (j = 1; j <= space_count; j++) {
            printf("  "); // Two spaces for alignment
        }

        // Print decreasing numbers from i to 1
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
