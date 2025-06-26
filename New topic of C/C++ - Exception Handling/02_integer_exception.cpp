// Throwing and catching integer exceptions
#include <iostream>
using namespace std;

int main()
{
    int age;

    try
    {
        cout << "Enter your age: ";
        cin >> age;

        if (age < 0)
        {
            throw -1; // Throwing integer exception
        }
        if (age > 150)
        {
            throw 999; // Different integer exception
        }

        cout << "Your age is: " << age << endl;
    }
    catch (int errorCode)
    {
        if (errorCode == -1)
        {
            cout << "Error: Age cannot be negative!" << endl;
        }
        else if (errorCode == 999)
        {
            cout << "Error: Age seems too high!" << endl;
        }
    }

    return 0;
}