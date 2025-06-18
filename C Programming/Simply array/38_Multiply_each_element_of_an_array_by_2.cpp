#include <iostream>

using namespace std;

// Multiply each element of an array by 2.

int main()
{
    int arr[] = {12,59,99,84,48};

    for(int i = 0; i < 5; i++)
    {
        arr[i] = arr[i] * 2;
        cout << " " << arr[i];
    }
    return 0;
}