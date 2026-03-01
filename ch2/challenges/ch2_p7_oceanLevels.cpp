// Calculate the rise of the ocean's level
#include <iostream>
using namespace std;

int main()
{
    double rate = 1.5, height;
    int years;

    years = 5;
    height = rate * years;
    cout << "After " << years << " years, the ocean will be "
         << height << " millimeters higher." << endl;

    years = 7;
    height = rate * years;
    cout << "After " << years << " years, the ocean will be "
         << height << " millimeters higher." << endl;
    
    years = 10;
    height = rate * years;
    cout << "After " << years << " years, the ocean will be "
         << height << " millimeters higher." << endl;

    return 0;
}