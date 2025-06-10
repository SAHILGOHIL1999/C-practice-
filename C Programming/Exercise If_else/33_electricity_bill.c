#include <stdio.h>

/* Write a program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */

int main()
{
    float unit, ch, src, total_bill;

    printf("Enter a electric unit = ");
    scanf("%f", &unit);

    if (unit <= 50)
    {
        printf("Condition A : Unit <= 50\n");
        ch = unit * 0.50;
    }

    else if (unit <= 100)
    {
        printf("Condition B : 50 to 100 units\n");
        ch = 25 + (unit - 50) * 0.75;
    }

    else if (unit <= 120)
    {
        printf("Condition C : 100 to 120 units\n");
        ch = 25 + 75 + (unit - 100) * 1.20;
    }

    else
    {
        printf("Condition D : more than 250 units\n");
        ch = 25 + 75 + 120 + (unit - 250) * 1.50;
    }

    src = (ch * 20) / 100;

    printf("Electricity Charges = Rs. %.2f\n", ch);
    printf("Surcharge = Rs. %.2f\n", src);

    total_bill = ch + src;
    printf("Total Electricity Bill = Rs. %.2f\n", total_bill);

    return 0;
}