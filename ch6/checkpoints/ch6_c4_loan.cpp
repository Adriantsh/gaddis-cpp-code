// Program completed by adding the definitions of 
// qualify() and noQualify()
// Determines whether a person qualifies for a loan
#include <iostream>
using namespace std;

void qualify()
{
    cout << "You qualify! The annual interest rate is 12 percent.\n";
}

void noQualify()
{
    cout << "You do not qualify. You must earn at least $17000 a year\n"
         << "and have worked at your job for at least 2 years.\n";
}

int main()
{
    double salary;
    int years;

    cout << "This program will determine if you qualify\n";
    cout << "for our credit card.\n";
    cout << "What is your annual salary? ";
    cin >> salary;

    cout << "How many years have you worked at your ";
    cout << "current job? ";
    cin >> years;
    if (salary >= 17000.00 && years >= 2)
        qualify();
    else
        noQualify();
    return 0;
}
