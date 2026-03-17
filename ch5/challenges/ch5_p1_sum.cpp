// Sum numbers 1 to n
#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;

    do
    {
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0)
        cout << "That is not a positive number.\n";
    } while (num < 0);

    for (int c = 1; c <= num; c++)
        sum += c;
    
    cout << "The sum of the integers 1 to " << num 
         << " is " << sum << endl;

    return 0;
}