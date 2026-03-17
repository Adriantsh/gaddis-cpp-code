// Display a square made of Xs of a given size.
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the square side length.\n"
         << "Cannot be greater than 15.\n";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << "X";
        cout << endl;
    }
    return 0;
}