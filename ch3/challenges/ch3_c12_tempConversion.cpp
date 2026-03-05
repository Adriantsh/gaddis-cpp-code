// Convert a temperature in Celsius to Fahrenheit.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double temp_F, temp_C;

    cout << "Enter the temperature in Celcius:\n";
    cin >> temp_C;

    temp_F = 9.0 / 5.0 * temp_C + 32.0;

    cout << setprecision(1) << fixed << showpoint;
    cout << "The temperature in Fahrenheit is " << temp_F << " degrees.\n";
    return 0;
}