// This program has a partiaally initialized array.
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int numbers[SIZE] = {1, 2, 3, 8};   // Initialize first 4 elements

    cout << "Here are the contents of the array:\n";
    for (int index = 0; index < SIZE; index++)
        cout << numbers[index] << " ";

    cout << endl;
    return 0;
}