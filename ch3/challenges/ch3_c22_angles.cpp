// Calculate the sine, cosine, and tangent of an angle
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double angle, sine, cosine, tangent;

    cout << "Enter an angle in radians:\n";
    cin >> angle;

    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);

    cout << setprecision(4) << fixed;
    cout << "The sine of the angle is " << sine << endl;
    cout << "The cosine of the angle is " << cosine << endl;
    cout << "The tangent of the angle is " << tangent << endl;
    return 0;
}