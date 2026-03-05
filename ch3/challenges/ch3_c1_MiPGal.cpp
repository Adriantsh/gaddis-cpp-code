// Calculate car's gas mileage
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double gallons, miles, mpg;
    cout << "Enter the number of gallons of gas the car can hold: \n";
    cin >> gallons;
    cout << "Enter the number of miles the car can be driven on a full tank: \n";
    cin >> miles;
    mpg = miles / gallons;
    cout << setprecision(2) << fixed << showpoint;
    cout <<  "The car's gas mileage is " << mpg << " miles per gallon.\n";
    return 0;
}