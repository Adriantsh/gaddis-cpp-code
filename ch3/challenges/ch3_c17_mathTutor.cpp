// Display and add 2 random numbers to add
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const int MAX_DIGITS = 3;
    const string LINE = "----";
    int num1, num2, sum, max_val;

    unsigned seed = time(0);
    srand(seed);

    max_val = static_cast<int>(pow(10, MAX_DIGITS));
    num1 = rand() % max_val;
    num2 = rand() % max_val;
    sum = num1 + num2;

    cout << setw(MAX_DIGITS + 1) << num1 << endl;
    cout << "+" << setw(MAX_DIGITS) << num2 << endl;
    cout << LINE;
    cin.get();
    cout << setw(MAX_DIGITS + 1) << sum << endl;
    return 0;
}
