// Display the number of mins, hours, and days in a 
// given amount of seconds if each of those values is non-zero.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double S_MIN = 60, S_HR = 3600, S_DAY = 86400;
    double secs, mins, hrs, days;
    char flag;

    cout << "Enter a number of seconds.\n";
    cin >> secs;

    flag = secs < 0 ? 0
         : secs < S_MIN ? 'S'
         : secs < S_HR ? 'M'
         : secs < S_DAY ? 'H' : 'D';
    
    cout << setprecision(2) << fixed << showpoint;
    switch (flag)
    {
        case 'D' : 
            days = secs / S_DAY;
            cout << "There are " << days << " days in " 
                 << secs << " seconds.\n";
        case 'H' :
            hrs = secs / S_HR;
            cout << "There are " << hrs << " hours in " 
                 << secs << " seconds.\n";
        case 'M' :
            mins = secs / S_MIN;
            cout << "There are " << mins << " minutes in "
                 << secs << " seconds.\n";
        case 'S' : 
            break;
        default :
            cout << "That is not a valid number of seconds.";
    }
    return 0;
}