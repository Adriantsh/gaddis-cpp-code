// Compute and display bank service fees for the month.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double RATE_A = .1,
                 RATE_B = .08,
                 RATE_C = .06,
                 RATE_D = .04,
                 MIN_BALANCE = 400,
                 BALANCE_FEE = 15;
    const int UPPER_A = 20,
              UPPER_B = 40,
              UPPER_C = 60;
    double balance, fee;
    int checks;

    cout << "What is the beginning balance?\n";
    cin >> balance;
    cout << "How many checks were written?\n";
    cin >> checks;

    if (checks < UPPER_A)
        fee = checks * RATE_A;
    else if (checks < UPPER_B)
        fee = checks * RATE_B;
    else if (checks < UPPER_C)
        fee = checks * RATE_C;
    else
        fee = checks * RATE_D;
    
    if (balance < MIN_BALANCE)
        fee += BALANCE_FEE;
    
    cout << setprecision(2) << fixed << showpoint;
    
    if (checks < 0)
        cout << "Please enter a positive number of checks.\n";
    else
        cout << "The bank's service fees this month are $" << fee << endl;
    
    if (balance < 0)
        cout << "URGENT! Your account is overdrawn!\n";
    
    return 0;
}