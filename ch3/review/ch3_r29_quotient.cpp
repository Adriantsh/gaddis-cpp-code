// Find the errors
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;
    float quotient;
    cout << "Enter two numbers and I will divide\n";
    cout << "the first by the second for you.\n";
    cin >> number1 >> number2;      // , instead of 2nd >>
    quotient = static_cast<float>(number1) / number2;   // float<static_cast>
    cout << quotient;
    return 0;
}