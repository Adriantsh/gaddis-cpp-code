// Convert temperatures in Celsius to Fahrenheit.
// Modified from ch3_c12_tempConversion.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_TEMP = 20;
    double temp_F;

    cout << setprecision(1) << fixed << showpoint << left;

    // Header
    const int WIDTH = 10;
    cout << endl << setw(WIDTH) << "Celcius" 
         << setw(WIDTH) << "Fahrenheit" << endl;
    for (int c = 0; c < 2 * WIDTH; c++)
        cout << "-";
    cout << endl;

    // Body
    for (int t = 0; t <= MAX_TEMP; t++)
    {
        temp_F = 9.0 / 5.0 * t + 32.0;
        cout << setw(WIDTH) << t
             << setw(WIDTH) << temp_F << endl;
    }

    return 0;
}