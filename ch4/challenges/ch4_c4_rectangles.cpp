// Determine which rectangle has the larger area.
#include <iostream>
using namespace std;

int main()
{
    double lengthA, widthA, areaA,
           lengthB, widthB, areaB;
    
    cout << "Enter the length and width of rectangle A.\n";
    cin >> lengthA >> widthA;
    cout << "Enter the length and width of rectangle B.\n";
    cin >> lengthB >> widthB;

    areaA = lengthA * widthA;
    areaB = lengthB * widthB;

    if (areaA > areaB)
        cout << "Rectangle A has the greater area.";
    else if (areaA < areaB)
        cout << "Rectangle B has the greater area.";
    else if (areaA == areaB)
        cout << "Rectangle A and rectangle B have equal area.";
    
    return 0;
}