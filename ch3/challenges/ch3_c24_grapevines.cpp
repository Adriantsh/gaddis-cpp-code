// Calculate the number of grapevines that can be planted in a row
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    unsigned V;
    double R, E, S;

    cout << "Enter the length of the row, in feet:\n";
    cin >> R;
    cout << "Enter the space used by the end-post assembly, in feet:\n";
    cin >> E;
    cout << "Enter the amount of space between vines, in feet:\n";
    cin >> S;

    V = (R -  2 * E) / S;   // truncate and make non-negative
    
    cout << V << " grapevine(s) will fit in a row.\n";
    return 0;
}