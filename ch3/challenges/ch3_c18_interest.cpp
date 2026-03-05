// Calculate compounded interest on principle
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int WIDTH_1 = 20, WIDTH_2 = 10;
    int num_compound;
    double principle, rate, interest, total;
    
    cout << "Enter the interest rate:\n";
    cin >> rate;
    cout << "Enter the principle:\n";
    cin >> principle;
    cout << "Enter the number of times the interest is compounded:\n";
    cin >> num_compound;

    total = principle * pow((1 + rate / num_compound), num_compound);
    interest = total - principle;

    cout << setprecision(2) << fixed << showpoint;
    cout << left << setw(WIDTH_1) << "Interest Rate:"
         << right << setw(WIDTH_2 + 1) << rate << "\%" << endl;
    cout << left << setw(WIDTH_1) << "Times Compounded:"
         << right << setw(WIDTH_2 + 1) << num_compound << endl;
    cout << left << setw(WIDTH_1) << "Principle:" << "$"
         << right << setw(WIDTH_2) << principle << endl;
    cout << left << setw(WIDTH_1) << "Interest:" << "$"
         << right<< setw(WIDTH_2) << interest << endl;
    cout << left << setw(WIDTH_1) << "Amount in Savings" << "$"
         << right << setw(WIDTH_2) << total << endl;
    return 0;
}