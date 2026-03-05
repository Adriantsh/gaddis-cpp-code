// Find the errors
#include <iostream>     // extra ;
using namespace std;

int main()              // missing int and ()
{
    int number1, number2;

    cout << "Enter two numbers and I will multiply\n";  // missing ;
    cout << "them by 50 for you.\n";    // missing ;
    cin >> number1 >> number2;
    number1 *= 50;      // =* instead of *=
    number2 *= 50;      // =* instead of *=
    cout << number1 << " " << number2;
    return 0;
}