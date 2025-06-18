#include <iostream>

using namespace std;

// Count how many zeros are present in an array.

int main()
{
    int count;
    int arr[] = {15,25,69,0,0,65};

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == 0)
            count++;
    }

    cout << "Total Zero : " << count;

    return 0;
}