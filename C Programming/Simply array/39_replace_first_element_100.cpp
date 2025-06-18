#include <iostream>

using namespace std;

// Replace the first element of an array with 100.

int main()
{
    int arr[] = {25,98,69,58,32};

    arr[0] = 100;

    for (int i = 0; i < 5; i++)
    {
        cout << "Index " << i + 1 << " = " << arr[i] << endl;
    }

    return 0;
}