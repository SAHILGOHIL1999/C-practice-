#include <stdio.h>

/*Write a program to compute the sum of the three integers. If one of the values is 13
then do not count it.*/

int main()
{
    int a, b, c;

    printf("Enter a value A = ");
    scanf("%d", &a);

    printf("Enter a value B = ");
    scanf("%d", &b);

    printf("Enter a Value C = ");
    scanf("%d", &c);

    int sum;

    if (a == 13)
    {
        a = 0;
        sum = a + b + c;
        printf("A is 13, not counted.\n");
    }
    else if (b == 13)
    {
        b = 0;
        sum = a + b + c;
        printf("B is 13, not counted.\n");
    }

    else if (c == 13)
    {
        c = 0;
        sum = a + b + c;
        printf("C is 13, not counted.\n");
    }
    else
    {
        sum = a + b + c;
    }
    printf("Sum = %d",sum);
    return 0;
}

// int main() {
//     int a, b, c, sum = 0;

//     printf("Enter a value A = ");
//     scanf("%d", &a);

//     printf("Enter a value B = ");
//     scanf("%d", &b);

//     printf("Enter a value C = ");
//     scanf("%d", &c);

//     // Check value of A
//     if (a == 13) {
//         // Don't add a
//         printf("A is 13, not counted.\n");
//     } else {
//         sum += a;
//     }

//     // Check value of B
//     if (b == 13) {
//         printf("B is 13, not counted.\n");
//     } else {
//         sum += b;
//     }

//     // Check value of C
//     if (c == 13) {
//         printf("C is 13, not counted.\n");
//     } else {
//         sum += c;
//     }

//     printf("Sum = %d\n", sum);

//     return 0;
// }
