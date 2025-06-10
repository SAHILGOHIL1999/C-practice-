#include <stdio.h>
int main()
{
    int yr, dy, hr, min;
    printf("Enter a Year = ");
    scanf("%d", &yr);
    dy = yr * 365;
    hr = dy * 60;
    min = hr * 60;
    printf(" Minutes is %d", min);

    return 0;
}