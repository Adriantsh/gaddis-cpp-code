// Calculates number of calories from cookies eaten
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int COOKIES_PER_BAG = 30;
    const double SERVINGS_PER_BAG = 10,
                 CALS_PER_SERVING = 300;
    int cookies_eaten;
    double cals_consumed;

    cout << "How many cookies did you eat?\n";
    cin >> cookies_eaten;
    cals_consumed = cookies_eaten / COOKIES_PER_BAG * SERVINGS_PER_BAG * CALS_PER_SERVING;
    cout << setprecision(1) << fixed << showpoint;
    cout << "You consumed " << cals_consumed << " calories.\n";
    return 0;
}