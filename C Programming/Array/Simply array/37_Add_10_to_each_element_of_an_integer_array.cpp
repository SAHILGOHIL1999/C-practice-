#include <iostream>

using namespace std;

// Add 10 to each element of an integer array.

int main()
{
    int arr[] = {20,25,98,45,69,55};

    for (int i = 0; i < 6; i++)
    {
        arr[i] = arr[i] + 10;
            cout << arr[i] << " ";
    }

    return 0;
}
