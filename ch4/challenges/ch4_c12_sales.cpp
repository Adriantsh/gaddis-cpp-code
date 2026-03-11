// Compute the total cost of a purchase
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RETAIL_PRICE = 99,
                 DISCOUNT_1 = 0.2,
                 DISCOUNT_2 = 0.3,
                 DISCOUNT_3 = 0.4,
                 DISCOUNT_4 = 0.5;
    const int BIN_1 = 10,
              BIN_2 = 20,
              BIN_3 = 50,
              BIN_4 = 100;
    double total;
    int units;

    cout << "How many units of the package were sold?\n";
    cin >> units;

    if (units <= 0)
        cout << "Enter a number greater than 0.\n";
    else if (units < BIN_1)
        total = RETAIL_PRICE * units;
    else if (units < BIN_2)
        total = RETAIL_PRICE * (1 - DISCOUNT_1) * units;
    else if (units < BIN_3)
        total = RETAIL_PRICE * (1 - DISCOUNT_2) * units;
    else if (units < BIN_4)
        total = RETAIL_PRICE * (1 - DISCOUNT_3) * units;
    else
        total = RETAIL_PRICE * (1 - DISCOUNT_4) * units;
    
    cout << setprecision(2) << fixed << showpoint;
    if (units > 0)
        cout << "The total cost of the purchase is $" << total << endl;

    return 0;
}