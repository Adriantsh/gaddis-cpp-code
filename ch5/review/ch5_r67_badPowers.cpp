// This program uses a loop to raise a number to a power.
#include <iostream>
using namespace std;

int main()
{
    int num, bigNum, power, count;

    cout << "Enter an positive integer: ";          // missing positive
    cin >> num;
    cout << "What power do you want it raised to? ";
    cin >> power;
    bigNum = num;
    count = 1;      // missing
    while (count++ < power)            // extra ;
        bigNum *= num;
    cout << "The result is " << bigNum << endl;     // missing 2nd "
    return 0;
}