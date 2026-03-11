// Determine which number is larger.
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;

    cout << "Enter two numbers:\n";
    cin >> num1 >> num2;

    cout << (num1 > num2 ? num1 : num2) << " is larger.\n";
    return 0;
}