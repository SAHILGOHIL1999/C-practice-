#include <stdio.h>

// Write a program to print series as below.

int main()
{

// A) Print 1 3 5 7 9 11 13 15 17 19.

    // int a = 1;

    // while(a <= 19)
    // {
    //     printf("Number : %d\n",a);
    //     a = a + 2;
    // }
    // a++;



    // B) Print 2 4 6 8 10 12 14 16 18 20.

    // int b = 2;

    // while (b <= 20)
    // {
    //     printf("Number : %d\n",b);
    //     b = b + 2;
    // }
    // b++;



    // C) Print 1 4 9 16 25 36 49 64 81 100.

    // int c = 1;

    // while (c <= 10)
    // {
    //     printf("%d * %d = %d\n",c,c,c * c);
    //     c++;
    // }



    // D) Print 1 8 27 64 125 216 243 512 729 1000.

    // int d = 1;

    // while (d <= 10)
    // {
    //     printf("%d number : %d\n",d,d * d * d);
    //     d++; 
    // }
    

    // E) Print 1 3 7 13 21 31 43 57 73 91 (sq and -0..-1..-2..-3..-4..-5..-6).

    int e = 1;

    while(e <= 10)
    {
        printf("%d number : %d\n",e,(e * e) - (e - 1));
        e++;
    }
    return 0;
}   