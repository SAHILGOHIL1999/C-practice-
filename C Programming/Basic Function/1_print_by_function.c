#include <stdio.h>

// Print a message by function / method

// 1. First Metod:

void getValue1()
{
    printf("Hello1\n");
}

int main()

{
    getValue1();
    // printf("Hello\n");

    return 0;
}

// 2. Second Method:

void getValue2()
{
    printf("Bharat1\n");
}

int main()

{
    getValue2();
    printf("Bharat\n");

    return 0;
}

// 3. Third Method:

void getValue3();

int main()

{
    getValue3();
    printf("Welcome1\n");

    return 0;
}

void getValue3()
{
    printf("Welcome\n");
}
