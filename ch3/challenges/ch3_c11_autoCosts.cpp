// Calculate the total monthly and annual cost of owning an auto
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double loan, insurance, gas, oil, tires, 
           maintenance, total_monthly, total_yearly;

    cout << "What is the monthly loan payment?\n";
    cin >> loan;
    cout << "What is the monthly cost of insurance?\n";
    cin >> insurance;
    cout << "What is the monthly cost of gas?\n";
    cin >> gas;
    cout << "What is the monthly cost of oil?\n";
    cin >> oil;
    cout << "What is the monthly cost of tires?\n";
    cin >> tires;
    cout << "What is the monthly cost of other maintenance?\n";
    cin >> maintenance;

    total_monthly = loan + insurance + gas + oil + tires + maintenance;
    total_yearly = 12 * total_monthly;

    cout << setprecision(2) << fixed << showpoint;
    cout << "The monthly cost of owning a car is $" << total_monthly << endl;
    cout << "The annual cost of owning a car is $" << total_yearly << endl;
    return 0;
}