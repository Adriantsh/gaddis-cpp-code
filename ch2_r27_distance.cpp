/*
    Store 20 in the speed variable.
    Store 10 in the time variable.
    Multiply speed by time and store the result in the distance variable.
    Display the contents of the distance variable.
*/ 
#include <iostream>
using namespace std;

int main()
{
    double speed = 20.0, time = 10.0, distance;
    distance = speed * time;
    cout << "Distance: " << distance << endl;
}