// This program displays the sum of the numbers 1-100.
#include <iostream>
using namespace std;

int main()
{
    int count = 0, total = 0;   // count init at 1, missing total init to 0

    while (count++ < 100)       // missing ++, <= instead of <
        total += count;
    cout << "The sum of the numbers 1-100 is ";
    cout << total << endl;
    return 0;
}