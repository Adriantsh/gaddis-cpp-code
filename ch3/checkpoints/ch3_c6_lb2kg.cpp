// Convert weight in pounds to kilograms
#include <iostream>
using namespace std;

int main()
{
    double pounds, kilograms;

    // Write code here that prompts the user
    // to enter his or her wight and reads
    // the input into the pounds variables.
    cout << "Enter your weight in pounds.\n";
    cin >> pounds;

    // The following line does the conversion.
    kilograms = pounds / 2.2;

    // Write code here that displays the user's weight
    // in kilograms
    cout << "Your weight in kilograms is " << kilograms << "kg.\n";

    return 0;
}