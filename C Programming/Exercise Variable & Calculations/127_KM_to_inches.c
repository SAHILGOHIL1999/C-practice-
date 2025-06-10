#include <stdio.h>
int main()
{
    float km, mtr, cm, inch;

    printf("Enter KM : ");
    scanf("%f", &km);

    mtr = km * 1000;
    cm = mtr * 100;
    inch = cm / 30.48;

    printf("inches : %f", inch);
    return 0;
}