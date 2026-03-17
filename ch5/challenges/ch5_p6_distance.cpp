// Display the distance a vehicle has traveld at each hour of its journey
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int WIDTH = 17;
    double speed, hrs, dist;

    cout << "Enter the speed of the vehicle in mph: ";
    cin >> speed;
    cout << "Enter the number of hours traveled: ";
    cin >> hrs;

    cout << setprecision(1) << fixed << showpoint << left;

    // Header
    cout << endl << setw(WIDTH) << "Hour" 
         << setw(WIDTH) << "Distance Traveled" << endl;
    for (int c = 0; c < 2 * WIDTH; c++)
        cout << "-";
    cout << endl;

    // Body
    for (int h = 1; h <= hrs; h++)
    {
        dist = speed * h;
        cout << setw(WIDTH) << h
             << setw(WIDTH) << dist << endl;
    }
    return 0;
}