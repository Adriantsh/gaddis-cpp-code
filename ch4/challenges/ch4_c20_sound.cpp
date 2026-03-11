// Given a medium, calculate the time it takes 
// for sound to travel a given distance in that medium.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double SPEED_AIR = 1100,
                 SPEED_WATER = 4900,
                 SPEED_STEEL = 16400;
    double distance, time, speed;
    int select;

    cout << "Enter 1 for a sound wave in air.\n"
         << "Enter 2 for a sound wave in water.\n"
         << "Enter 3 for a sound wave in steel.\n";
    cin >> select;

    switch (select)
    {
        case 1: speed = SPEED_AIR;
                break;
        case 2: speed = SPEED_WATER;
                break;
        case 3: speed = SPEED_STEEL;
                break;
        default:
            speed = 0;
            cout << "Please enter 1, 2, or 3.\n";
    }
    if (speed != 0)
    {
        cout << setprecision(4) << fixed << showpoint;
        
        cout << "Enter the distance that the sound wave travels in feet.\n";
        cin >> distance;

        time = distance / speed;

        if (distance >= 0)
            cout << "The sound wave will take " << time
                 << " seconds to travel that far in the chosen medium.\n";
        else
            cout << "Enter a distance that is non-negative.\n";
    }
        return 0;
}           