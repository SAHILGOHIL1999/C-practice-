#include <stdio.h>

// Initialization of C Array

// marks[0]=80; //initialization of array
// marks[1]=60;
// marks[2]=70;
// marks[3]=85;
// marks[4]=75;

int main()
{
   int i = 0;

   int arr[5];

//   initialization of array
   arr[0] = 80;
   arr[1] = 60;
   arr[2] = 70;
   arr[3] = 85;
   arr[4] = 75;

//   Print array items

    for(i = 0; i < 5;i++)
        printf("%d ",arr[i]);

    return 0;
}
