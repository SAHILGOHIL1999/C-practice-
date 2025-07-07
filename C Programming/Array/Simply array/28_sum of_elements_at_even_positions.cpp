#include <iostream>
using namespace std;

// Find the sum of elements at even positions (index 0, 2, 4, etc.) in an array.

int main()
{
    int sum = 0;
    int arr[] = {25,45,55,29,89,15};

    for(int i = 0; i < 5; i++)
    {
        if(i % 2 == 0)
            sum = sum + arr[i];
    }

    cout << "Sum of even positions : " << sum;
    return 0;
}