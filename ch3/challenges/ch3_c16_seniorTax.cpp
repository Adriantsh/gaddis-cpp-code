// Calculate quarterly installments of property tax for seniors 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double ASSESS_PERCENT = 0.6, EXEMPTION = 5000.0;
    double actual_val, assess_val, tax_rate, tax, quarterly;

    cout << "Enter the actual value of the property:\n";
    cin >> actual_val;
    cout << "Enter the property tax per $100 of value:\n";
    cin >> tax_rate;

    assess_val = ASSESS_PERCENT * actual_val - EXEMPTION;
    assess_val = (abs(assess_val) + assess_val) / 2; // If negative make 0
    tax = assess_val * tax_rate / 100;
    quarterly = tax / 4;

    cout << setprecision(2) << fixed << showpoint;
    cout << "The annual property tax will be $" << tax << endl;
    cout << "The quarterly tax bill will be $" << quarterly << endl;
    return 0;
}