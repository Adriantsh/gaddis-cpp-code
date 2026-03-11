// Calculate the cost of a phone service bill based on the plan.
// Modified from ch4_c25_serviceProvider.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double FLAT_A = 39.99, GIGS_A = 4, RATE_A = 10,
                 FLAT_B = 59.99, GIGS_B = 8, RATE_B = 5,
                 FLAT_C = 69.99;
    char plan;
    double gigs, charges_A, charges_B, savings;

    cout << "Enter the plan you purchased (A, B, or C).\n";
    cin >> plan;
    cout << "Enter the number of gigabytes used.\n";
    cin >> gigs;

    charges_A = FLAT_A + RATE_A * (gigs - GIGS_A);
    charges_B = FLAT_B + RATE_B * (gigs - GIGS_B);

    cout << setprecision(2) << fixed << showpoint;
    
    switch (plan)
    {
        case 'A' :            
            cout << "Your monthly bill is $" << charges_A << endl;
            
            savings = charges_A - charges_B;
            if (savings >= .01)
                cout << "You would have saved $" << savings << " by switching to plan B.\n";

            savings = charges_A - FLAT_C;
            if (savings >= .01)
                cout << "You would have saved $" << savings << " by switching to plan C.\n";
            break;

        case 'B' :
            cout << "Your monthly bill is $" << charges_B << endl;

            savings = charges_B - FLAT_C;
            if (savings >= .01)
                cout << "You would have saved $" << savings << " by switching to plan C.\n";
            break;

        case 'C' :
            cout << "Your monthly bill is $" << FLAT_C << endl;
            break;
        default :
            cout << "Please enter A, B, or C.\n";
    }
    return 0;
}