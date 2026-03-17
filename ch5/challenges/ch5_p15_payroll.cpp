// Display a weekly payroll report, including
// employee number, gross pay, state tax, 
// federal tax, and FICA withholdings.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double employee_num, gross, state, federal, fica, 
           net, total_net,
           total_gross = 0, 
           total_state = 0, 
           total_federal = 0, 
           total_fica = 0;

    cout << "When you have finished entering info for all employees,\n"
         << "enter 0 for the employee number.\n";

    cout << "Employee number: ";
    cin >> employee_num;
    while (employee_num != 0)
    {
        do
        {
            // Gross pay
            cout << "Gross pay: ";
            cin >> gross;
            while (gross < 0)
            {
                cout << "Enter a non-negative amount: ";
                cin >> gross;
            }

            // State tax
            cout << "State tax: ";
            cin >> state;
            while (state < 0)
            {
                cout << "Enter a non-negative amount: ";
                cin >> state;
            }
            while (state > gross)
            {
                cout << "Enter an amount less than or equal the gross pay: ";
                cin >> state;
            }

            // Federal tax
            cout << "Federal tax: ";
            cin >> federal;
            while (federal < 0)
            {
                cout << "Enter a non-negative amount: ";
                cin >> federal;
            }
            while (federal > gross)
            {
                cout << "Enter an amount less than or equal the gross pay: ";
                cin >> federal;
            }

            // FICA
            cout << "FICA withholdings: ";
            cin >> fica;
            while (fica < 0)
            {
                cout << "Enter a non-negative amount: ";
                cin >> fica;
            }
            while (fica > gross)
            {
                cout << "Enter an amount less than or equal the gross pay: ";
                cin >> fica;
            }

            // Check if net pay is negative
            net = gross - state - federal - fica;
            if (net < 0)
                cout << "The sum state tax, federal tax, and FICA withholdings\n"
                     << "cannot be greater than the gross pay.\n"
                     << "Please enter the information for this employees again.\n";

        } while (net < 0);
        
        total_gross += gross;
        total_state += state;
        total_federal += federal;
        total_fica += fica;

        cout << "Employee number: ";
        cin >> employee_num;
    }

    total_net = total_gross - total_state - total_federal - total_fica;

    cout << setprecision(2) << fixed << showpoint;
    const int WIDTH_1 = 30, WIDTH_2 = 10;
    
    cout << endl << left << setw(WIDTH_1) << "Total gross pay:" << "$" 
         << right << setw(WIDTH_2) << total_gross << endl;
    cout << left << setw(WIDTH_1) << "Total state tax:" << "$" 
         << right << setw(WIDTH_2) << total_state << endl;
    cout << left << setw(WIDTH_1) << "Total federal tax:" << "$" 
         << right << setw(WIDTH_2) << total_federal << endl;
    cout << left << setw(WIDTH_1) << "Total FICA withholdings:" << "$" 
         << right << setw(WIDTH_2) << total_fica << endl;
    cout << left << setw(WIDTH_1) << "Total net pay:" << "$" 
         << right << setw(WIDTH_2) << total_net << endl << endl;
    
    return 0;
}
