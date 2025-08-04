#include <stdio.h>

int main() {
    int i, j, space;

    for (i = 5; i >= 1; i--) {
        // Print spaces for right alignment
        for (space = 1; space < i; space++) {
            printf("  "); // Two spaces for better alignment
        }

        // Print numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
