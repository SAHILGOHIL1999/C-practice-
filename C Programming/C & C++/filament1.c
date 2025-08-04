#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, length = 0;
    int flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length manually (stop at newline or null character)
    while (str[length] != '\n' && str[length] != '\0') {
        length++;
    }

    j = length - 1;  // last valid character index

    // Check palindrome by comparing characters from both ends
    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
