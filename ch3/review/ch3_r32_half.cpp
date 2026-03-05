// Find the errors
#include <iostream>
using namespace std;

int main()      // missing int and ()
{
    double number;        // half variable not needed

    cout << "Enter a number and I will divide it\n";    // missing ;
    cout << "in half for you.\n";                       // missing ;
    cin >> number;      // variable name is number, not number1
    number /= 2;        // switch half w number, /= not \=
    cout << fixed << showpoint << number << endl;      // fixed, not fixedpoint; switch half w number
    return 0;
}