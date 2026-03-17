// Find the error in this program
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 10, result;

    num1++;
    result = num1 + num2 + 1;   // ++ operand not an lvalue
    cout << num1 << " " << num2 << " " << result;
    return 0;
}