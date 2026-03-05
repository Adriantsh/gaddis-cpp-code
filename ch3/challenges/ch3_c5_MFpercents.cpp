// Calculate the percent of of Males and Females in a class.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int males, females, total;
    double perM, perF;

    cout << "Enter the number of males in the class:\n";
    cin >> males;
    cout << "Enter the number of females in the class:\n";
    cin >> females;

    total = males + females;
    perM = 100 * males / static_cast<double>(total);
    perF = 100 * females / static_cast<double>(total);

    cout << setprecision(2) << fixed << showpoint;
    cout << "The class is " << perM << "% male and "
         << perF << "\% female.\n";
    return 0;
}