/*
    Store 172.5 in the force variable.
    Store 27.5 in the area variable.
    Divide area by force and store the result in the pressure variable.
    Display the contents of the distance variable.
*/
#include <iostream>
using namespace std;

int main()
{
    double force = 172.5, area = 27.5, pressure;
    pressure = force * area;
    cout << "Pressure: " << pressure << endl;
    return 0;
}