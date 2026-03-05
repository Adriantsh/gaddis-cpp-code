// 157.05 yen
// 0.86 euro
// Converts US dollar amounts to Yen and Euros
// Conversion rate is from Mar 4 2026
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double YEN_PER_DOLLAR = 157.05, EUROS_PER_DOLLAR = 0.86;
    double dollars, yen, euros;

    cout << "Enter the US dollar amount:\n";
    cin >> dollars;

    yen = YEN_PER_DOLLAR * dollars;
    euros = EUROS_PER_DOLLAR * dollars;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Amount in yen: " << yen << endl;
    cout << "Amount in euros: " << euros << endl;
    return 0;
}