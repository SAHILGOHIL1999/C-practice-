#include <stdio.h>
int main()
{
    int c, k;

    printf("Enter a Celsius = ");
    scanf("%d", &c);
    
    k = c + 273.15;

    printf("Celsius is %d", k);

    return 0;
}