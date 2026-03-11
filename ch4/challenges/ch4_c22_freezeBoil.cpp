// Display substances that will freeze or boil at a given temperature
#include <iostream>
using namespace std;

int main()
{
    const double FREEZE_ETHYL = -173, BOIL_ETHYL = 172,
                 FREEZE_MERCURY = -38, BOIL_MERCURY = 676,
                 FREEZE_OXYGEN = -362, BOIL_OXYGEN = -306,
                 FREEZE_WATER = 32, BOIL_WATER = 212;
    double temp;

    cout << "Enter a temperature in Fahrenheit.\n";
    cin >> temp;

    cout << "\nThe following substances will freeze at that temperature:\n";

    if (temp < FREEZE_WATER)
        cout << "Water\n";
    if (temp < FREEZE_MERCURY)
        cout << "Mercury\n";
    if (temp < FREEZE_ETHYL)
        cout << "Ethyl alcohol\n";
    if (temp < FREEZE_OXYGEN)
        cout << "Oxygen\n";

    cout << "\nThe following substances will boil at that temperature:\n";

    if (temp > BOIL_OXYGEN)
        cout << "Oxygen\n";
    if (temp > BOIL_ETHYL)
        cout << "Ethyl alcohol\n";
    if (temp > BOIL_WATER)
        cout << "Water\n";
    if (temp > BOIL_MERCURY)
        cout << "Mercury\n";
    cout << endl;
    
    return 0;
}