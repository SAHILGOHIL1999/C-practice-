#include <stdio.h>

/* Write a program to count total number of notes in entered amount.*/

int main()
{
    int amt, note;

    printf("Enter a amount = ");
    scanf("%d", &amt);

    if (amt >= 500)
    {
        note = amt / 500;
        amt = amt - (note * 500);
        printf("Note 500 is %d\n", note);
    }

    if (amt >= 200)
    {
        note = amt / 200;
        amt = amt - (note * 200);
        printf("Note 200 is %d\n", note);
    }

    if (amt >= 100)
    {
        note = amt / 100;
        amt = amt - (note * 100);
        printf("Note 100 is %d\n", note);
    }

    if (amt >= 50)
    {
        note = amt / 50;
        amt = amt - (note * 50);
        printf("Note 50 is %d\n", note);
    }

    if (amt >= 20)
    {
        note = amt / 20;
        amt = amt - (note * 20);
        printf("Note 10 is %d\n", note);
    }

    if (amt >= 10)
    {
        note = amt / 10;
        amt = amt - (note * 10);
        printf("Note 10 is %d\n", note);
    }

    if (amt >= 5)
    {
        note = amt / 5;
        amt = amt - (note * 5);
        printf("Note 5 is %d\n", note);
    }

    if (amt >= 2)
    {
        note = amt / 2;
        amt = amt - (note * 2);
        printf("Note 2 is %d\n", note);
    }
    return 0;
}