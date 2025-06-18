#include <iostream>

using namespace std;

// Count how many positive numbers are present in an array.

int main()
{
    int count;
    int arr[] = {15,25,69,-9,-3,65};

    for(int i = 0; i < 5; i++)
    {
        if(0 < arr[i])
            count++;
    }

    cout << "Total positive number : " << count;

    return 0;
}