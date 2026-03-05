// Calculate sales tax
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const int WIDTH_1 = 20, WIDTH_2 = 10;
    const double STATE_TAX_RATE = 0.04, 
                 COUNTY_TAX_RATE = 0.02;
    string month;
    int year;
    double total_collected, sales, 
           county_tax, state_tax, total_tax;

    cout << "Input the year:\n";
    cin >> year;
    cout << "Input the month:\n";
    cin >> month;
    cout << "Input the total amount collected at the register:\n";
    cin >> total_collected;

    sales = total_collected / (1 + STATE_TAX_RATE + COUNTY_TAX_RATE);
    state_tax = STATE_TAX_RATE * sales;
    county_tax = COUNTY_TAX_RATE * sales;
    total_tax = state_tax + county_tax;

    cout << setprecision(2) << fixed << showpoint;
    cout << "\nMonth: " << month << endl;
    cout << "Year: " << year << endl;
    cout << "-------------------------------\n";
    cout << left << setw(WIDTH_1) << "Total Collected:" << "$"
         << right << setw(WIDTH_2) << total_collected << endl;
    cout << left << setw(WIDTH_1) << "Sales:" << "$"
         << right << setw(WIDTH_2) << sales << endl;
    cout << left << setw(WIDTH_1) << "County Sales Tax:" << "$"
         << right << setw(WIDTH_2) << county_tax << endl;
    cout << left << setw(WIDTH_1) << "State Sales Tax:" << "$"
         << right<< setw(WIDTH_2) << state_tax << endl;
    cout << left << setw(WIDTH_1) << "Total Sales Tax:" << "$"
         << right << setw(WIDTH_2) << total_tax << endl;
    cout << "-------------------------------\n\n";
    return 0;
}