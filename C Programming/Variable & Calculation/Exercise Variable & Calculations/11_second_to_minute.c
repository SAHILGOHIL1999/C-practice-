#include <stdio.h>
int main()
{
    int sec, min;
    printf("Enter a Seconds = ");
    scanf("%d", &sec);
    min = sec / 60;
    printf("Minutes is %d", min);
    return 0;
}