// Display 2 different triangular patterns of pluses.
#include <iostream>
using namespace std;

int main()
{
    const int ROWS = 10;

    // Pattern A
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "+";
        cout << endl;
    }
    // Pattern B
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = i; j <= ROWS; j++)
            cout << "+";
        cout << endl;
    }

    return 0;
}