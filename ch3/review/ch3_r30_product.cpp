// Find the Errors
#include <iostream>     // extra ;
using namespace std;

int main()
{
    int number1, number2, product;      // incorrect const

    cout << "Enter two numbers and I will multiply\n";
    cout << "them for you.\n";
    cin >> number1 >> number2;
    product = number1 * number2;
    cout << product;        // missing ;
    return 0;
}