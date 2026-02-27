// The variable is assigned outside its scope.
// Fix: Switch the order of lines 8 and 9.
#include <iostream>
using namespace std;

int main()
{
    number = 62.7;
    double number;
    cout << number << endl;
    return 0;
}
