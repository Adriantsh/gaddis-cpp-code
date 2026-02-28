// Calcule the average July high temp if temps rise by 2% in NYC, Denver, Phoenix
#include <iostream>
using namespace std;

int main()
{
    double NYC = 85.0, Denver = 88.0, Pheonix = 106.0,
           incFactor = 1.02, newHigh;

    newHigh = NYC * incFactor;
    cout << "The new avg July high temp in NYC would be " << newHigh << " degrees Fahrenheit.\n";

    newHigh = Denver * incFactor;
    cout << "The new avg July high temp in Denver would be " << newHigh << " degrees Fahrenheit.\n";

    newHigh = Pheonix * incFactor;
    cout << "The new avg July high temp in Pheonix would be " << newHigh << " degrees Fahrenheit.\n";

    return 0;
}