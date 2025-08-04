#include <stdio.h>

int main() {
    int arr[100], n, i;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display negative elements
    printf("Negative elements in the array are:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
