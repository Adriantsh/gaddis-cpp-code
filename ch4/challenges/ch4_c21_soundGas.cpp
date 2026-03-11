// Given a medium, calculate the distance sound 
// will travel in a given amount of time in that medium
// Modified from ch4_c20_sound.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double SPEED_C02 = 258,
                 SPEED_AIR = 331.5,
                 SPEED_HELIUM = 972,
                 SPEED_HYDROGEN = 1270,
                 MAX_TIME = 30;
    double distance, time, speed;
    int select;

    cout << "Enter 1 for a sound wave in Carbon Dioxide.\n"
         << "Enter 2 for a sound wave in air.\n"
         << "Enter 3 for a sound wave in Helium.\n"
         << "Enter 4 for a sound wave in Hydrogen.\n";
    cin >> select;

    switch (select)
    {
        case 1: speed = SPEED_C02;
                break;
        case 2: speed = SPEED_AIR;
                break;
        case 3: speed = SPEED_HELIUM;
                break;
        case 4: speed = SPEED_HYDROGEN;
                break;
        default:
            speed = 0;
            cout << "Please enter 1, 2, 3, or 4.\n";
    }
    if (speed != 0)
    {
        cout << setprecision(2) << fixed << showpoint;
        
        cout << "Enter the number of seconds it took for the sound\n"
             << "to travel from its source to the location at which\n"
             << "it was detected.\n";
        cin >> time;

        distance = time * speed;

        if (time >= 0 && time <= MAX_TIME)
            cout << "The source was " << distance
                 << " meters from the detection location.\n";
        else
            cout << "Enter number between 0 and " << MAX_TIME << endl;
    }
    return 0;
}