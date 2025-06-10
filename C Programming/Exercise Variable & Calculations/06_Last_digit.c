#include <stdio.h>

int main()
{
    int a;
    printf("\nValue of A: ");
    scanf("%d", &a);

    printf("Last Digit Of %d Is %d", a, a % 10);
    return 0;
}