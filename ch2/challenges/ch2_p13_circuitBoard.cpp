// Calculate selling price of circuit board
#include <iostream>
using namespace std;

int main()
{
    double percentProfit = 0.35, cost = 14.95, margin, sellPrice;
    margin = percentProfit * cost;
    sellPrice = cost + margin;
    cout << "The selling price of the circuit board is $" << sellPrice << endl;
    return 0;
}