#include <iostream>

using namespace std;

// Replace the last element of an array with -1.

int main()
{
    int arr[5];

    cout << "Enter 5 elements : " << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    arr[4] = -1;

    for (int i = 0; i < 5; i++)
    {
        cout << "Index " << i + 1 << " = " << arr[i] << endl;
    }
    return 0;
}