// Determine if someone is underweight, overweight or
// has optimal weight.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double MIN_BMI = 18.5, MAX_BMI = 25., BMI_CONST = 703.;
    double weight, height, BMI;

    cout << "Enter your height in inches.\n";
    cin >> height;
    cout << "Enter your weight in pounds.\n";
    cin >> weight;

    BMI = BMI_CONST * weight / (height * height);

    cout << setprecision(2) << fixed << showpoint;
    cout << "Your BMI is " << BMI << endl;

    if (BMI < MIN_BMI)
        cout << "You are underweight.\n";
    else if (BMI > MAX_BMI)
        cout << "You are overweight.\n";
    else
        cout << "Your weight is optimal.\n";
    return 0;
}