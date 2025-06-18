#include <iostream>
using namespace std;

// Calculate the sum of all elements in an integer array of size 5.

int main()
{
    int i, sum = 0;
    int arr[5] = {55,54,69,34,23};

    for(i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of elements :" << sum;

    return 0;
}