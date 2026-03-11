// Determine the number of days in a month.
#include <iostream>
using namespace std;

int main()
{
    int m, yr, leapYear;
    
    cout << "Enter a month using an integer from 1 to 12.\n";
    cin >> m;
    cout << "Enter a year.\n";
    cin >> yr;

    leapYear = (yr % 100 == 0) ? (yr % 400 == 0) : (yr % 4 == 0);

    if (m == 1 || m == 3 || m == 5 || m == 7 
        || m == 8 || m == 10 || m == 12)
        cout << "The month has 31 days.\n";
    else if (m == 4 || m == 6 || m == 9 || m == 11)
        cout << "The month has 30 days.\n";
    else if (m == 2 && leapYear)
        cout << "The month has 29 days.\n";
    else if (m == 2 && !leapYear)
        cout << "The month has 28 days.\n";
    else
        cout << "That is not a valid month.\n";
    
    return 0;
}