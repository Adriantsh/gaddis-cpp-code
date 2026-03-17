// Predict the size of a poplulatin of organisms.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;
    double pop, inc;

    cout << "Enter the starting population: ";
    cin >> pop;
    while (pop < 2)
    {
        cout << "Enter a value greater or equal 2.\n";
        cin >> pop;
    }
    cout << "Enter the average daily population increase as a percent: ";
    cin >> inc;
    while (inc < 0)
    {
        cout << "Enter a positive value.\n";
        cin >> inc;
    }
    cout << "Enter the number of days they will multiply: ";
    cin >> days;
    while (days < 1)
    {
        cout << "Enter at value greater or equal to 1.\n";
        cin >> days;
    }

    cout << setprecision(0) << fixed;

    for (int d = 1; d <= days; d++)
    {
        cout << "Population on day " << d << ": "
             << pop << endl;
        pop *= 1 + inc / 100;
    }
    
    return 0;
}
