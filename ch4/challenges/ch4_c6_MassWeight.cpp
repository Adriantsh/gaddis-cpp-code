// Determine an object's weight from its mass 
// and if it is heavy or light
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double g = 9.8, HEAVY = 1000, LIGHT = 10;
    double mass, weight;

    cout << "Enter the object's mass in kilograms.\n";
    cin >> mass;

    weight = g * mass;

    cout << setprecision(2) << fixed << showpoint;
    cout << "The object's weight is " << weight << " newtons.\n";
    if (weight < LIGHT)
        cout << "The object is light.\n";
    else if (weight > HEAVY)
        cout << "The object is heavy.\n";
    return 0;
}