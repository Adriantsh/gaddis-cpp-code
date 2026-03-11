// Calculate the cost of a phone service bill based on the plan.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double FLAT_A = 39.99, GIGS_A = 4, RATE_A = 10,
                 FLAT_B = 59.99, GIGS_B = 8, RATE_B = 5,
                 FLAT_C = 69.99;
    char plan;
    double gigs, charges;

    cout << "Enter the plan you purchased (A, B, or C).\n";
    cin >> plan;
    cout << "Enter the number of gigabytes used.\n";
    cin >> gigs;

    cout << setprecision(2) << fixed << showpoint;
    
    switch (plan)
    {
        case 'A' :
            charges = FLAT_A + RATE_A * (gigs - GIGS_A);
            cout << "Your monthly bill is $" << charges << endl;
            break;
        case 'B' :
            charges = FLAT_B + RATE_B * (gigs - GIGS_B);
            cout << "Your monthly bill is $" << charges << endl;
            break;
        case 'C' :
            charges = FLAT_C;
            cout << "Your monthly bill is $" << charges << endl;
            break;
        default :
            cout << "Please enter A, B, or C.\n";
    }
    return 0;
}