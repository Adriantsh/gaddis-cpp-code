// Calculate amount of paint needed to cover a wooden fence
#include <iostream>
using namespace std;

int main()
{
    double ft2_pg = 340.0, height = 6, length = 100,
           area, gals;

    area = height * length;
    gals = area / ft2_pg;

    cout << gals << " gallons of paint are needed to cover the fence. \n";
    return 0;
}