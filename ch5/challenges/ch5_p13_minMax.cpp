// Display the largest and smallest numbers entered.
#include <iostream>
using namespace std;

int main()
{
    const int SENTINEL = -99;
    int min, max, num;

    cout << "Enter integers.\n"
         << "When you are done entering integers, enter -99.\n";
    
    cin >> num;
    max = min = num;

    while (num != SENTINEL)
    {
        if (num > max)
            max = num;
        if (num < min)
            min = num;
        cin >> num;
    }

    if (max == -99)
        cout << "No numbers were entered.\n";
    else
    {
        cout << "Largest number: " << max << endl;
        cout << "Smallest number: " << min << endl;
    }
    return 0;
}