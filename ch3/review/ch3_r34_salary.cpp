// Predict the output w/ input 38700:
// Your monthly wages are 3225
#include <iostream>
using namespace std;

int main()
{
    double salary, monthly;
    cout << "What is your annual salary? ";
    cin >> salary;
    monthly = static_cast<int>(salary) / 12;
    cout << "Your monthly wages are " << monthly << endl;
    return 0;
}