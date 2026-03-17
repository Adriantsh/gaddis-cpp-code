// This program averages a set of numbers.
#include <iostream>
using namespace std;

int main()
{
    int numCount, total;
    double average;

    cout << "How many numbers do you want to average? ";
    cin >> numCount;
    total = 0;          // missing
    for (int count = 0; count < numCount; count++)
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        total += num;   // extra count++;
    }
    average = static_cast<double>(total) / numCount;    // missing static_cast<double>
    cout << "The average is " << average << endl;       // missing 2nd "
    return 0;
}