#include <iostream>

using namespace std;

// Replace all negative numbers in an array with 0.

int main()
{
    int arr[] = {-5,-3,-9,25,66,21};

    for(int i = 0; i < 5; i++)
    {
        if(0 > arr[i])
            arr[i] = 0;
    }

    for(int i = 0; i < 5; i++)
    {
        cout << "\nReplace negative number : " << arr[i];
    }

    return 0;
}

