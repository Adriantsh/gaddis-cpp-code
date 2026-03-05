// Calculate the number of slices a pizza can be divided into.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159, AREA = 14.125;
    double diameter, slices;

    cout << "Input the diameter of the pizza in inches:\n";
    cin >> diameter;

    slices = PI * diameter * diameter / 4 / AREA;

    cout << setprecision(1) << fixed;
    cout << "The pizza can be divided into " << slices << " slices.\n";
    return 0;
}