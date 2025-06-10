#include <stdio.h>
int main()
{
    int f, c;

    printf("Enter a Fahrenheit = ");
    scanf("%d", &f);
    c = ((f - 32) * 5) / 9;
    printf("Celsius is %d", c);

    return 0;
}