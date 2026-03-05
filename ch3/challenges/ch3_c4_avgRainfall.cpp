// Calculate the average rainfall for three months
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string month1, month2, month3;
    double rain1, rain2, rain3, avg;

    cout << "Enter the name of the first month:\n";
    cin >> month1;
    cout << "What was the rainfall in inches for that month?\n";
    cin >> rain1;

    cout << "Enter the name of the second month:\n";
    cin >> month2;
    cout << "What was the rainfall in inches for that month?\n";
    cin >> rain2;

    cout << "Enter the name of the third month:\n";
    cin >> month3;
    cout << "What was the rainfall in inches for that month?\n";
    cin >> rain3;

    avg = (rain1 + rain2 + rain3) / 3.0;
    cout << setprecision(2) << fixed << showpoint;
    cout << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << avg << " inches.\n";
    return 0;
}