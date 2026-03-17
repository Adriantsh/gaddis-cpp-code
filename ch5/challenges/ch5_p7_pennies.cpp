// Display the earnings of someone who makes a penny a day
// and who's salary doubles each day.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int WIDTH = 9;
    int days;
    double earnings = 0, salary = 0.01;

    cout << "Enter the number fo days: ";
    cin >> days;

    cout << setprecision(2) << fixed << showpoint << left;

    // Header
    cout << endl << setw(WIDTH) << "Day" 
         << setw(WIDTH) << "Salary" << endl;
    for (int c = 0; c < 2 * WIDTH; c++)
        cout << "-";
    cout << endl;

    // Body
    for (int d = 1; d <= days; d++)
    {
        cout << setw(WIDTH) << d
             << setw(WIDTH) << salary << endl;
        earnings += salary;
        salary *= 2;
    }

    cout << "The total earnings after " << days
         << " days is $" << earnings << endl;

    return 0;
}