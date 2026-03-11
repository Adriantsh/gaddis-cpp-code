// Calculate and display the charges of a long distance phone call.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double RATE_A = .05,
                 RATE_B = .45,
                 RATE_C = .2,
                 START_B = 7,
                 START_C = 19.01;
    int start_min;
    double start, duration, charges;

    cout << "Enter the start time of the call in the form HH.MM.\n";
    cin >> start;
    cout << "Enter the duration of the call in minutes.\n";
    cin >> duration;

    start_min = fmod(start,1) * 100;

    cout << setprecision(2) << fixed << showpoint;

    if (start < 0 || duration < 0)
        cout << "Both the start time and the duration must be non-negative.\n";
    else if (start > 23.59)
        cout << "The start time must be be between 00:00 and 23:59\n";
    else if (start_min >= 60) 
        cout << "The number of minutes cannot be greater than 59.\n";
    else 
    {
        if (start < START_B)
            charges = RATE_A * duration;
        else if (start < START_C)
            charges = RATE_B * duration;
        else
            charges = RATE_C * duration;
        
        cout << "The charges for the call are $" << charges << endl;
    }
    return 0;
}