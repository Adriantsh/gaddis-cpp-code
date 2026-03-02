// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get().
#include <iostream>
using namespace std;

int main()
{
    char ch;                // Define a character variable
    int number;             // Define a number variable
    cout << "Enter a number: ";
    cin >> number;          // Read an integer
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "Thank You!\n";
    return 0;
}