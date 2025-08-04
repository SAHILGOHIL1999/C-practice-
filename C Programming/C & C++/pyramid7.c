#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;
    int cols = 5;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= cols; j++) {
            if(i == 1 || i == 3) {
                // Print stars in full first and third row
                printf("* ");
            }
            else if (i == 2) {
                // Print star only at first and last column in 2nd row
                if(j == 1 || j == cols) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
            else {
                // For 4th and 5th row, print star only at first column
                if(j == 1) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
