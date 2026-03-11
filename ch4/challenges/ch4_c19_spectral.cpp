// Determine the type of radiation of an
// electromagnetic wave.
#include <iostream>
using namespace std;

int main()
{
    const double UPPER_MICRO = 1e-2,
                 UPPER_INFRARED = 1e-3,
                 UPPER_VISIBLE = 7e-7,
                 UPPER_ULTRAVIOLET = 4e-7,
                 UPPER_XRAY = 1e-8,
                 UPPER_GAMMA = 1e-11;
    double wavelength;

    cout << "Enter the wavelength of the \n"
         << "electromegnetic wave.\n";
    cin >> wavelength;

    if (wavelength <= 0)
        cout << "Enter a positive number.\n";
    else if (wavelength < UPPER_GAMMA)
        cout << "That is a gamma ray.\n";
    else if (wavelength < UPPER_XRAY)
        cout << "That is an x-ray.\n";
    else if (wavelength < UPPER_ULTRAVIOLET)
        cout << "That is ultraviolet radiaton.\n";
    else if (wavelength < UPPER_VISIBLE)
        cout << "That is visible light.\n";
    else if (wavelength < UPPER_INFRARED)
        cout << "That is infrared radiation.\n";
    else if (wavelength < UPPER_MICRO)
        cout << "That is microwave radiation.\n";
    else
        cout << "That is a radio wave.\n";
    
    return 0;
}