#include <iostream>
using namespace std;

// Calculate the sum of only positive numbers in an array.

int main()
{
    int sum = 0;
    int arr[5] = {17,55,25,-8,-3};

    for(int i = 0; i < 5; i++)
    {
        if(0 < arr[i])
            sum = sum + arr[i];
    }
    cout << "Sum of positive number : " << sum;

    return 0;
}