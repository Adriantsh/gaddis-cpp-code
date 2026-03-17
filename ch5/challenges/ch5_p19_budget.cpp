// Determine if the user is over or under their monthly budget
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double cost, budget, difference, total = 0;

    cout << "Enter the amount you have budgeted for this month: ";
    cin >> budget;

    cout << "Enter each of your expenses for the month.\n"
         << "When you are finished, enter -1.\n";
    cin >> cost;

    while(cost != -1)
    {
        total += cost;
        cin >> cost;
    }

    difference = total - budget;

    cout << setprecision(2) << fixed << showpoint;

    if (difference > 0)
        cout << "You went over your budget by $" 
             << difference << endl;
    else if (difference < 0)
        cout << "You were under your budget by $"
             << -difference << endl;
    else
        cout << "You hit your budget exactly!\n";

    return 0;
}