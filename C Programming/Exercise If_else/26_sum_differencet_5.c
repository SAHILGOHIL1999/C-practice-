#include <stdio.h>

/* Write a program that accept two integers and return true if either one is 5 or their
sum or difference is 5.*/

// int main()
// {
//     int a, b;

//     printf("Enter a value A = ");
//     scanf("%d", &a);

//     printf("Enter a value B = ");
//     scanf("%d", &b);

//     if(a == 5 || b == 5 || a+b == 5 || a-b ==5 || b-a == 5 /*abs(a-b ==5)*/)
//     {
//         printf("Valid");
//     }
//     else
//     {
//         printf("Invalid");
//     }
//     return 0;
// }

int main()
{
    int a, b;

    printf("Enter a value A = ");
    scanf("%d", &a);

    printf("Enter a value B = ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Value are equal");
    }

    else if (a == 5)
    {
        printf("Condition matched: a == 5\n");
    }

    else if (b == 5)
    {
        printf("Condition matched: b == 5\n");
    }

    else if (a + b == 5)
    {
        printf("Condition matched: a + b == 5\n");
    }

    else if(a - b == 5)
    {
        printf("Condition matched: a - b == 5\n");
    }
    else
    {
        printf("Not valid");
    }
    return 0;
}



