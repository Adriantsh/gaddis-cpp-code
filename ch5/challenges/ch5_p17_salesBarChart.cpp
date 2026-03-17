// Display a bar chart comparing sales at 5 stores.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double A_UNIT = 100;
    double store1, store2, store3, store4, store5;
    int a1, a2, a3, a4, a5;

    cout << "Enter the sales amount for store 1: ";
    cin >> store1;
    a1 = round(store1 / A_UNIT);
    cout << "Enter the sales amount for store 2: ";
    cin >> store2;
    a2 = round(store2 / A_UNIT);
    cout << "Enter the sales amount for store 3: ";
    cin >> store3;
    a3 = round(store3 / A_UNIT);
    cout << "Enter the sales amount for store 4: ";
    cin >> store4;
    a4 = round(store4 / A_UNIT);
    cout << "Enter the sales amount for store 5: ";
    cin >> store5;
    a5 = round(store5 / A_UNIT);

    cout << setprecision(2) << fixed << showpoint;
    cout << "\nSALES BAR CHART\n"
         << "(Each * = $" << A_UNIT << ")\n\n"
         << "Store 1: ";
    for (int a = 0; a < a1; a++)
        cout << "*";
    cout << "\nStore 2: ";
    for (int a = 0; a < a2; a++)
        cout << "*";
    cout << "\nStore 3: ";
    for (int a = 0; a < a3; a++)
        cout << "*";
    cout << "\nStore 4: ";
    for (int a = 0; a < a4; a++)
        cout << "*";
    cout << "\nStore 5: ";
    for (int a = 0; a < a5; a++)
        cout << "*";
    cout << endl << endl;
    return 0;
}