// Calculate available credit
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double maxCred, usedCred, availCred;

    cout << "Input your maximum credit.\n";
    cin >> maxCred;
    cout << "Input the amount of credit used already.\n";
    cin >> usedCred;

    availCred = maxCred - usedCred;
    cout << setprecision(2) << fixed << showpoint;
    cout << "You have $" << availCred << " of credit available.\n";
    return 0;
}