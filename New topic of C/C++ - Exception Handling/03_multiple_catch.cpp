// Multiple catch blocks for different exception types
#include <iostream>
using namespace std;

int main()
{
    int choice;

    try
    {
        cout << "Enter 1 for string error, 2 for int error: ";
        cin >> choice;

        if (choice == 1)
        {
            throw "This is a string exception!";
        }
        else if (choice == 2)
        {
            throw 404; // Integer exception
        }
        else
        {
            throw 3.14; // Double exception
        }
    }
    catch (const char *msg)
    {
        cout << "String exception: " << msg << endl;
    }
    catch (int error)
    {
        cout << "Integer exception: " << error << endl;
    }
    catch (double error)
    {
        cout << "Double exception: " << error << endl;
    }

    return 0;
}
