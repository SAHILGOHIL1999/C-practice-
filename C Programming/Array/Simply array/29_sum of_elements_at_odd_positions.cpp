#include <iostream>
using namespace std;

// Calculate the sum of elements at odd positions (index 1, 3, 5, etc.) in an array.

int main()
{
    int sum = 0;
    int arr[] = {25,45,55,29,89,15};

    for(int i = 0; i < 5; i++)
    {
        if(i %2 != 0)
            sum = sum + arr[i];
    }

    cout << "Sum of odd positions : " << sum;
    return 0;
}