// Display and add 2 random numbers to add
// Check is solution is correct and if not give correct soln.
// Modified from ch4_c11_mathTutor2.cpp
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const int MAX_DIGITS = 3, DIV_DECIMALS = 4;
    int num1, num2, max_val, select;
    double stud_val, correct_val, error, max_error;
    char symbol;
    unsigned seed;

    max_val = static_cast<int>(pow(10, MAX_DIGITS));

    for ( ; ; )
    {
        // Display menu
        cout << "\nSelect an operation to practice (Enter 1-5):\n"
             << "\t1. Addition\n"
             << "\t2. Subtraction\n"
             << "\t3. Multiplication\n"
             << "\t4. Division\n"
             << "\t5. Quit the program\n";
        cin >> select;

        // Quit?
        if (select == 5)
            break;
        // Input validation
        if (select < 1 || select > 5)
        {
            cout << "Please enter a number between 1 and 5.\n";
            continue;
        }

        // Get random numbers
        seed = time(0);
        srand(seed);
        num1 = rand() % max_val;
        num2 = rand() % max_val;

        cout << setprecision(0) << fixed;

        switch (select)
        {
            case 1:
                correct_val = num1 + num2;
                symbol = '+';
                break;
            case 2:
                correct_val = num1 - num2;
                symbol = '-';
                break;
            case 3:
                correct_val = num1 * num2;
                symbol = '*';
                break;
            case 4:
                // Make sure the denominator is not 0.
                while (num2 == 0)
                {
                    seed = time(0);
                    srand(seed);
                    num2 = rand() % max_val;
                }
                correct_val = static_cast<double>(num1) / num2;
                symbol = '/';
                cout << setprecision(DIV_DECIMALS);
                cout << "\nEnter the result to "
                     << DIV_DECIMALS << " decmical places.\n";
                break;
        }

        // Display problem
        cout << endl << setw(MAX_DIGITS + 1) << num1 << endl;
        cout << symbol << setw(MAX_DIGITS) << num2 << endl;
        for (int c = 0; c < (MAX_DIGITS + 1); c++)
            cout << "-";
        cout << endl;
        cin >> stud_val;

        // Grade
        error = abs(stud_val - correct_val);
        max_error = pow(10,-DIV_DECIMALS);
        if ((error == 0) || ((error < max_error) && (select == 4)))
            cout << "\nCorrect Answer!\n";
        else
            cout << "\nIncorrect. The correct answer is "
                << correct_val << endl;
    }
    return 0;
}