// Calculate average rainfall over a series of years
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int yrs;
    double rain, avg_rain,
           total_rain = 0;
    
    cout << "Enter the number of years: ";
    cin >> yrs;
    while (yrs < 1)
    {
        cout << "Please enter at least 1.\n";
        cin >> yrs;
    }

    cout << "Enter the rainfall in inches during the following periods:\n";

    for (int y = 1; y <= yrs; y++)
    {
        for (int m = 1; m <= 12; m++)
        {
            cout << "Year " << y << ", Month " << m << ": ";
            cin >> rain;
            while (rain < 0)
            {
                cout << "Please enter an non-negative value.\n";
                cin >> rain;
            }
            total_rain += rain;
        }
    }

    cout << setprecision(2) << fixed << showpoint;

    avg_rain = total_rain / yrs / 12;
    cout << "The total rain over the " << yrs << " year period was "
         << total_rain << " inches.\n"
         << "The average rainfall over that period was "
         << avg_rain << " inches per month.\n";
    
    return 0;
}