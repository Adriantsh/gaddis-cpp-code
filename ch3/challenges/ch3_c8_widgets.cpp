// Calculate widgets based on pallet weight.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double WIDGET_LB = 12.5;
    double pallet, total;
    int widgets;

    cout << "What is the weight of the pallet alone in lbs?\n";
    cin >> pallet;
    cout << "What is the weight of the pallet with the widgets on it?\n";
    cin >> total;

    widgets = round((total - pallet) / WIDGET_LB);
    cout << "There are aproximately " << widgets << " widgets on the pallet.\n";
    return 0;
}