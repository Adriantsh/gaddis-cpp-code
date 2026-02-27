// Compute tax and tip
#include <iostream>
using namespace std;

int main()
{
    double mealCost = 88.67, 
           taxRate = 0.0675,
           tipRate = 0.2,
           taxAmt, taxxedMeal, tipAmt, totalBill;

    taxAmt = mealCost * taxRate;
    taxxedMeal = mealCost + taxAmt;
    tipAmt = taxxedMeal * tipRate;
    totalBill = taxxedMeal + tipAmt;

    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmt << endl;
    cout << "Tip Amount: $" << tipAmt << endl;
    cout << "Total Bill: $" << totalBill << endl;

    return 0;
}