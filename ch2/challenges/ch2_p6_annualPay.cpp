// Calculate employee's total annual pay
#include <iostream>
using namespace std;

int main()
{
    double payAmount = 2200.0, annualPay;
    int payPeriods = 26;

    annualPay = payAmount * payPeriods;
    cout << "Total Annual Pay: $" << annualPay;
    return 0;
}