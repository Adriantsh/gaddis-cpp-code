// Calculate sales tax and total
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sale, taxRate, salesTax, total;

    cout << "Input the amount of the sale: ";
    cin >> sale;
    cout << "Input the tax rate: ";
    cin >> taxRate;

    salesTax = sale * taxRate;
    total = salesTax + sale;

    cout << setprecision(2) << fixed << showpoint;
    cout << "The sales tax is $" << salesTax << ".\n";
    cout << "The total is $" << total << ".\n";
    return 0;
}