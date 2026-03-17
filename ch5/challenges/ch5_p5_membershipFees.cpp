// Display projected membership fees over the next 6 years.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double BASE = 2500, RATE = 0.04, YRS = 6;
    double fee = BASE;

    cout << setprecision(2) << fixed << showpoint;
    
    for (int yr = 0; yr <= YRS; yr++)
    {
        cout << "After " << yr << " years, the membership will cost $"
             << fee << endl;
        fee *= 1 + RATE;
    }

    return 0;
}