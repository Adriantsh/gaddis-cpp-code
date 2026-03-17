// Display the calories burned every 5 mins
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double CALS_PER_MIN = 3.6;
    const int MINS = 30, INTER = 5;

    double cals;

    cout << setprecision(1) << fixed << showpoint;

    for (int m = INTER; m <= MINS; m += INTER)
    {
        cals = m * CALS_PER_MIN;
        cout << "After " << m << " minutes, "
             << cals << " calories have been burned.\n";
    }

    return 0;
}