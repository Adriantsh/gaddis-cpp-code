// Determine if day times month equals year for  given date
#include <iostream>
using namespace std;

int main()
{
    int day, month, year;

    cout << "Enter the day portion of a date in numeric form:\n";
    cin >> day;
    cout << "Enter the month portion of a date in numeric form:\n";
    cin >> month;
    cout << "Enter the last two digits of the year:\n";
    cin >> year;

    cout << (day * month == year
             ? "The date is magic!" 
             : "The date is not magic.") << endl;
    return 0;
}