// Calculate monthly payment of a loan
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int WIDTH_1 = 25, WIDTH_2 = 15;
    int N;
    double L, Rate, payment, 
           total_paid, interest_paid, A;
    
    cout << "Enter the loan amount:\n";
    cin >> L;
    cout << "Enter the monthly interest rate:\n";
    cin >> Rate;
    cout << "Enter the number of payments:\n";
    cin >> N;

    A = pow((1 + Rate), N);     // Intermediate calculation step
    payment = L * Rate * A / (A - 1);
    total_paid = N * payment;
    interest_paid = total_paid - L;

    cout << setprecision(2) << fixed << showpoint;
    cout << left << setw(WIDTH_1) << "Loan Amount:" << "$"
         << right << setw(WIDTH_2) << L << endl;
    cout << left << setw(WIDTH_1) << "Monthly Interest Rate:"
         << right << setw(WIDTH_2) << Rate << "\%" << endl;
    cout << left << setw(WIDTH_1 + 1) << "Number of Payments:"
         << right << setw(WIDTH_2) << N << endl;
    cout << left << setw(WIDTH_1) << "Monthly Payment:" << "$"
         << right<< setw(WIDTH_2) << payment << endl;
    cout << left << setw(WIDTH_1) << "Amount Paid Back:" << "$"
         << right << setw(WIDTH_2) << total_paid << endl;
    cout << left << setw(WIDTH_1) << "Interest Paid:" << "$"
         << right << setw(WIDTH_2) << interest_paid << endl;
    return 0;
}