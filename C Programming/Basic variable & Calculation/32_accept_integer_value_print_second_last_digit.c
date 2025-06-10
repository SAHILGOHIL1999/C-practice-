#include <stdio.h>

int main()
{
    // Accept an Integer Value and Print Its Second Last Digit

    int val;
    printf("Enter a value =");
    scanf("%d", &val);

    int val_without_last = val / 10;
    int second_last_digit = val_without_last % 10;

    printf("Second last digit of %d is %d\n", val, second_last_digit);

    return 0;
}
