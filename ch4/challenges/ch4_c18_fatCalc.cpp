// Calculate the percentage of calories that come from fat.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double LOW_FAT = 0.3,
                 CALS_PER_G_FAT = 9;
    double cals, fat, cals_from_fat, percent_fat;

    cout << "Enter the number of calories in a food.\n";
    cin >> cals;
    cout << "Enter the fat grams in that food.\n";
    cin >> fat;

    cals_from_fat = CALS_PER_G_FAT * fat;
    percent_fat = cals_from_fat / cals * 100;

    cout << setprecision(2) << fixed << showpoint;
    
    if (cals > 0 && fat >= 0)
    {
        if (percent_fat <= 100)
        {
            cout << "The precentage of calories that come from fat is "
                 << percent_fat << "\%\n";
            if (percent_fat <= 30)
                cout << "This is a low fat food.\n";
        }
        else
            cout << "Either the calories or fat grams\n"
                 << "have been incorrectly entered.\n";
    }
    else
        cout << "The calories and fat grams cannot be less than 0.\n"
             << "The calories cannot be 0.\n";
    return 0;
}