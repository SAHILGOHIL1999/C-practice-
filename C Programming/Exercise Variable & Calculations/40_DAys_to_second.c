#include<stdio.h>
int main()
{
    float day, hr, min, sec;
    printf("Enter a Days = ");
    scanf("%f", &day);
    
    hr=day*24;
    min=hr*60;
    sec=min*60;

    printf(" Minutes is %f", min);

    return 0;
}