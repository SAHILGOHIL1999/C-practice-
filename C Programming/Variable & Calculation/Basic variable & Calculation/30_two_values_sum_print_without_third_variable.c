#include <stdio.h>

int main()
{
    // Accept Two Values and Print Their Sum Without Using a Third Variable
    int val1, val2;
    printf("Enter 1st value =");
    scanf("%d",&val1);

    printf("Enter 2nd value =");
    scanf("%d", &val2);

    printf("Sum of %d and %d = %d\n", val1, val2, val1 + val2);    
    return 0;
}