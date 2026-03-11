// Display the dates and heights of pole vault jumps 
// in decreasing order of height
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double MIN_HEIGHT = 2.0, MAX_HEIGHT = 5.0;
    double h1, h2, h3;
    string date1, date2, date3;
    bool bad_input;
    int high, med, low;

    cout << "Enter the date of the first vault.\n";
    getline(cin, date1);
    cout << "Enter the first vault's height.\n";
    cin >> h1;
    cout << "Enter the date of the second vault.\n";
    cin.ignore();
    getline(cin, date2);
    cout << "Enter the second vault's height.\n";
    cin >> h2;
    cout << "Enter the date of the third vault.\n";
    cin.ignore();
    getline(cin, date3);
    cout << "Enter the third vault's height.\n";
    cin >> h3;

    bad_input = (h1 < MIN_HEIGHT) || (h1 > MAX_HEIGHT) ||
                (h2 < MIN_HEIGHT) || (h2 > MAX_HEIGHT) ||
                (h3 < MIN_HEIGHT) || (h3 > MAX_HEIGHT);

    cout << setprecision(2) << fixed << showpoint;

    if (!bad_input)
    {
        if (h1 >= h2 && h1 >= h3)
        {
            cout << "Date: " << setw(10) << date1 
                 << "\tHeight: " << setw(10) << h1 
                 << "m\n";
            if (h2 >= h3)
            {
                cout << "Date: " << setw(10) << date2
                     << "\tHeight: " << setw(10) << h2 
                     << "m\n";
                cout << "Date: " << setw(10) << date3 
                     << "\tHeight: " << setw(10) << h3
                     << "m\n";
            }
            else
            {
                cout << "Date: " << setw(10) << date3
                     << "\tHeight: " << setw(10) << h3
                     << "m\n";
                cout << "Date: " << setw(10) << date2
                     << "\tHeight: " << setw(10) << h2
                     << "m\n";
            }
        }
        else if (h2 >= h1 && h2 >= h3)
        {
            cout << "Date: " << setw(10) << date2 
                 << "\tHeight: " << setw(10) << h2 
                 << "m\n";
            if (h1 >= h3)
            {
                cout << "Date: " << setw(10) << date1
                     << "\tHeight: " << setw(10) << h1 
                     << "m\n";
                cout << "Date: " << setw(10) << date3 
                     << "\tHeight: " << setw(10) << h3
                     << "m\n";
            }
            else
            {
                cout << "Date: " << setw(10) << date3
                     << "\tHeight: " << setw(10) << h3
                     << "m\n";
                cout << "Date: " << setw(10) << date1
                     << "\tHeight: " << setw(10) << h1
                     << "m\n";
            }
        } 
        else
        {
            cout << "Date: " << setw(10) << date3 
                 << "\tHeight: " << setw(10) << h3 
                 << "m\n";
            if (h1 >= h2)
            {
                cout << "Date: " << setw(10) << date1
                     << "\tHeight: " << setw(10) << h1 
                     << "m\n";
                cout << "Date: " << setw(10) << date2 
                     << "\tHeight: " << setw(10) << h2
                     << "m\n";
            }
            else
            {
                cout << "Date: " << setw(10) << date2
                     << "\tHeight: " << setw(10) << h2
                     << "m\n";
                cout << "Date: " << setw(10) << date1
                     << "\tHeight: " << setw(10) << h1
                     << "m\n";
            }
        } 
    }
    else
        cout << "All heights must be between " 
             << MIN_HEIGHT << " and " << MAX_HEIGHT << " meters.\n";
    return 0;
}