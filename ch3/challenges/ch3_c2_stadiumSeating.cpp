// Calculate the income generated from ticket sales.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A, B, C;
    const double COST_A = 15, COST_B = 12, COST_C = 9;
    double total;

    cout << "Enter the number of Class A tickets sold: \n";
    cin >> A;
    cout << "Enter the number of Class B tickets sold: \n";
    cin >> B;
    cout << "Enter the number of Class C tickets sold: \n";
    cin >> C;
    total = COST_A * A + COST_B * B + COST_C * C;
    cout << setprecision(2) << fixed << showpoint;
    cout << "A total of $" << total << " was generated from ticket sales.\n";
    return 0;
}