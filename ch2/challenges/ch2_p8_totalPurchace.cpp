// Calculate subtotal, sales tax, total for each item
#include <iostream>
using namespace std;

int main()
{
    double item1 = 15.95,
           item2 = 24.95,
           item3 = 6.95,
           item4 = 12.95,
           item5 = 3.95,
           taxRate = 0.07,
           salesTax, total;
    
    salesTax = item1 * taxRate;
    total = item1 + salesTax;
    cout << "For item 1, the subtotal is $" << item1
         << ", the sales tax is $" << salesTax
         << ", and the total is $" << total << ".\n";

    salesTax = item2 * taxRate;
    total = item2 + salesTax;
    cout << "For item 2, the subtotal is $" << item2
         << ", the sales tax is $" << salesTax
         << ", and the total is $" << total << ".\n";

    salesTax = item3 * taxRate;
    total = item3 + salesTax;
    cout << "For item 3, the subtotal is $" << item3
         << ", the sales tax is $" << salesTax
         << ", and the total is $" << total << ".\n";

    salesTax = item4 * taxRate;
    total = item4 + salesTax;
    cout << "For item 4, the subtotal is $" << item4
         << ", the sales tax is $" << salesTax
         << ", and the total is $" << total << ".\n";

    salesTax = item5 * taxRate;
    total = item5 + salesTax;
    cout << "For item 5, the subtotal is $" << item5
         << ", the sales tax is $" << salesTax
         << ", and the total is $" << total << ".\n";

    return 0;
}