// Calculate number of acres
#include <iostream>
using namespace std;

int main()
{
    double acresPerFt2 = 43650.0, ft2 = 391876.0, acres;
    acres = ft2 * acresPerFt2;
    cout << "Number of Acres: " << acres << endl;
    return 0;
}