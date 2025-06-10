#include <stdio.h>
int main()
{
    float yr, wk;

    printf("Enter Years : ");
    scanf("%f", &yr);

    wk = yr * 52;

    printf("Weeks : %f", wk);
    return 0;
}