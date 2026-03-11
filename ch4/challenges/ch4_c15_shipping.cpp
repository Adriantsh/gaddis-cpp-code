// Calculate the charges for a package to be shipped
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double WEIGHT_A = 2,
                 WEIGHT_B = 6,
                 WEIGHT_C = 10,
                 MAX_WEIGHT = 20,
                 RATE_A = 1.1,
                 RATE_B = 2.2,
                 RATE_C = 3.7,
                 RATE_D = 4.8,
                 MIN_MILES = 10, MAX_MILES = 3000,
                 MI_UNIT = 500;
    double weight, distance, charges;
    
    cout << "Enter the weight of the package in kg.\n";
    cin >> weight;
    cout << "Enter the distance shipped.\n";
    cin >> distance;

    if (weight <= WEIGHT_A)
        charges = distance * RATE_A / MI_UNIT;
    else if (weight <= WEIGHT_B)
        charges = distance * RATE_B / MI_UNIT;
    else if (weight <= WEIGHT_C)
        charges = distance * RATE_C / MI_UNIT;
    else
        charges = distance * RATE_D / MI_UNIT;
    
    cout << setprecision(2) << fixed << showpoint;
    
    if (weight < 0 || weight > MAX_WEIGHT)
        cout << "The weight of the package must be between\n"
             << "0 and " << MAX_WEIGHT << "kg.\n";
    else if (distance < MIN_MILES || distance > MAX_MILES)
        cout << "The distance shipped must be between\n"
             << MIN_MILES << " and " << MAX_MILES << "mi.\n";
    else
        cout << "It will cost $" << charges << " to ship this package.\n";

    return 0;
}