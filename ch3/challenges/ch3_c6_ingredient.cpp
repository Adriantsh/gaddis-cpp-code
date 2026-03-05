// Calculates the number cups of each ingredient needed to make
// a specific number of cookies
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int COOKIES_PER_RECIPE = 48;
    const double CUPS_SUGAR = 1.5, CUPS_BUTTER = 1, CUPS_FLOUR = 2.75;
    int cookies;
    double newSugar, newButter, newFlour, multiplier;

    cout << "How many cookies do you want to make?\n";
    cin >> cookies;

    multiplier = static_cast<double>(cookies) / COOKIES_PER_RECIPE;
    newSugar = multiplier * CUPS_SUGAR;
    newButter = multiplier * CUPS_BUTTER;
    newFlour = multiplier * CUPS_FLOUR;

    cout << setprecision(2) << fixed << showpoint;
    cout << "Cups of sugar needed: " << newSugar << endl;
    cout << "Cups of butter needed: " << newButter << endl;
    cout << "Cups of flour needed: " << newFlour << endl;
    return 0;
}