// Calculate the balance of a savings account after a period of time
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double annual_rate, balance, months,
           interest, deposit, withdraw,
           total_interest = 0,
           total_deposit = 0,
           total_withdraw = 0;
    
    cout << "Enter the annual interest rate: ";
    cin >> annual_rate;
    while (annual_rate < 0)
    {
        cout << "Enter a non-negative interest rate: ";
        cin >> annual_rate;
    }
    
    cout << "Enter the starting balance: ";
    cin >> balance;
    if (balance < 0)
    {
        cout << "\nYour account balance is less than $0.00\n";
        cout << "The account has been closed.\n";
        months = 0;
    }
    else
    {
        cout << "Enter the number of months since\n"
             << "the account was established: ";
        cin >> months;
    }


    for (int m = 1; m <= months; m++)
    {
        
        cout << "Enter the ammount deposited in month "
             << m << ": ";
        cin >> deposit;
        while (deposit < 0)
        {
            cout << "Enter a non-negative amount: ";
            cin >> deposit;
        }
        balance += deposit;
        total_deposit += deposit;

        cout << "Enter the ammount withdrawn in month "
             << m << ": ";
        cin >> withdraw;
        while (withdraw < 0)
        {
            cout << "Enter a non-negative amount: ";
            cin >> withdraw;
        }
        balance -= withdraw;
        total_withdraw += withdraw;

        if (balance < 0)
        {
            cout << "\nYour account balance is less than $0.00\n";
            cout << "The account has been closed.\n";
            break;
        }

        interest = balance * annual_rate / 12;
        total_interest += interest;
        balance += interest;
    }

    cout << setprecision(2) << fixed << showpoint;
    const int WIDTH_1 = 30, WIDTH_2 = 10;

    cout << endl << left << setw(WIDTH_1) << "Ending balance:" << "$" 
         << right << setw(WIDTH_2) << balance << endl;
    cout << left << setw(WIDTH_1) << "Total amount deposited:" << "$" 
         << right << setw(WIDTH_2) << total_deposit << endl;
    cout << left << setw(WIDTH_1) << "Total amount withdrawn:" << "$" 
         << right << setw(WIDTH_2) << total_withdraw << endl;
    cout << left << setw(WIDTH_1) << "Total interest earned:" << "$" 
         << right << setw(WIDTH_2) << total_interest << endl << endl;

    return 0;
}