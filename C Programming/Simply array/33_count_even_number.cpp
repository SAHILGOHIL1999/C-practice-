#include <iostream>

using namespace std;

// Count how many positive numbers are present in an array.

int main()
{
    int count;
    int arr[] = {15,25,69,48,12,66};

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] %2 == 0)
            count++;
    }

    cout << "Total even number : " << count;

    return 0;
}