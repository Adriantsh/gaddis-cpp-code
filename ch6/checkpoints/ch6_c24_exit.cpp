// Predict the output:
/*
    1.2
*/
#include <iostream>
using namespace std;

void showVals(double, double);

int main()
{
    double x = 1.2, y = 4.5;

    showVals(x, y);
    return 0;
}
void showVals(double p1, double p2)
{
    cout << p1 << endl;
    exit(0);
    cout << p2 << endl;
}