// Ask the user to enter a number of pennies, nickels,
// dimes, and quarters which total to a dollar.
#include <iostream>
using namespace std;

int main()
{
    int pennies, nickels, dimes, quarters, cents;

    cout << "Enter a quantity of pennies, nickels,\n"
         << "dimes, and quarters which total to a dollar.\n"
         << "Number of pennies: ";
    cin >> pennies;
    cout << "Number of nickels: ";
    cin >> nickels;
    cout << "Number of dimes: ";
    cin >> dimes;
    cout << "Number of quarters: ";
    cin >> quarters;

    cents = pennies + 5 * nickels + 10 * dimes + 25 * quarters;
    if (cents < 100)
        cout << "Those coins add up to less than a dollar.\n";
    else if (cents == 100)
        cout << "Congratulations! Those coins add up to a dollar.\n";
    else
        cout << "Those coins add up to more than a dollar.\n";
    return 0;
}