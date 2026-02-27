// Compute sales tax
#include <iostream>
using namespace std;

int main()
{
    double stateRate = 0.04, 
           countyRate = 0.02,
           purchase = 95.0,
           totalTaxRate, 
           totalTax;
    
    totalTaxRate = stateRate + countyRate;
    totalTax = purchase * totalTaxRate;

    cout << "Total Sales Tax: $" << totalTax << endl;
    return 0;
}