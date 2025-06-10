#include <stdio.h>
int main()
{
    int min, hr, dy;
    printf("Enter a Minutes = ");
    scanf("%d", &min);
    hr = min / 60;
    dy = hr / 24;
    printf(" Days is %d", dy);

    return 0;
}