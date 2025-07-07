#include <iostream>
using namespace std;

// Find the position of the maximum and minimum element in an array.

int main()
{
    int arr[5];
    int min;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    min = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
   cout << "The Minimum number: " << min;

    return 0;
}
