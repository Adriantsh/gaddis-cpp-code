// Display rising ocean height over the next 25 years.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int YRS = 25;
    const double MM_PER_YR = 1.5;
    double height;

    cout << setprecision(1) << fixed << showpoint;
    
    for (int yr = 1; yr <= YRS; yr ++)
    {
        height = MM_PER_YR * yr;
        cout << "In " << yr << " years, the ocean will have risen "
             << height << "mm.\n";
    }
    
    return 0;
}