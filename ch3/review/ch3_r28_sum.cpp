// Find the errors
#include <iostream>         // missing
using namespace std;
int main()                  // space btw main and (
{
    double number1, number2, sum;

    cout << "Enter a number: ";         // cout and in cin capitalized in l8-11
    cin >> number1;                     // <<
    cout << "Enter another number: ";
    cin >> number2;                     // <<
    sum = number1 + number2;    
    cout << "The sum of the two numbers is " << sum;    // missing ;
    return 0;
}