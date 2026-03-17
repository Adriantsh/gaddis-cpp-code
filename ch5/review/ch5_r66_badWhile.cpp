// This program adds two numbers entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char again;

    again = 'y';                                                // missing
    while (again == 'y' || again == 'Y')
    {                                                           // missing
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter another number: ";
        cin >> num2;
        cout << "Their sum is " << (num1 + num2) << endl;       // missing 2nd "
        cout << "Do you want to do this again?\n"
             << "Enter 'y' if so. ";                            // missing
        cin >> again;
    }                                                           // missing
    return 0;
}