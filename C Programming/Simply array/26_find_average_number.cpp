#include <iostream>
using namespace std;

// Find the average of all numbers in an array of 8 integers.

int main()
{
    int i, sum = 0, average;
    int arr[8] = {55,54,69,34,23,39,89,69};

    for(i = 0; i < 8; i++)
    {
        sum = sum + arr[i];
        average = sum / 8;
    }
    cout << "\n Sum of elements : " << sum;
    cout << "\n Average : " << average;

    return 0;
}