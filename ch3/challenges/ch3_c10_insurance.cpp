// Calculate the minimum amount of insurance to buy.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double INSUR_PERCENT = 0.8;
    double cost, insur;

    cout << "What is the cost to replace your property?\n";
    cin >> cost;

    insur = cost * INSUR_PERCENT;
    cout << setprecision(2) << fixed << showpoint;
    cout << "Minimum amount of insurance you should buy: $" << insur << endl;
    return 0;
}