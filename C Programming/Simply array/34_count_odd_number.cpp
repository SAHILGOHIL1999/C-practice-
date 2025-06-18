#include <iostream>

using namespace std;

// Count how many odd numbers are in an array of integers.

int main()
{
    int count;
    int arr[5] = {15,22,69,27,83};

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] %2 != 0)
            count++;
    }

    cout << "Total odd number : " << count;

    return 0;
}