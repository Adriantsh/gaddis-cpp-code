// Calculate assessment value and property tax
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double ASSESS_PERCENT = 0.6, TAX_RATE = 0.0075;
    double actual_val, assess_val, tax;

    cout << "Enter the actual value of the property:\n";
    cin >> actual_val;

    assess_val = ASSESS_PERCENT * actual_val;
    tax = TAX_RATE * assess_val;

    cout << setprecision(2) << fixed << showpoint;
    cout << "The assessment value is $" << assess_val << endl;
    cout << "The property tax will be $" << tax << endl;
    return 0;
}