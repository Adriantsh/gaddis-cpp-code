// Determine the number of points to award
// based off number of books bought
#include <iostream>
using namespace std;

int main()
{
    const int POINTS_0 = 0,
              POINTS_1 = 5,
              POINTS_2 = 15,
              POINTS_3 = 30,
              POINTS_4_OR_UP = 60;
    int books;

    cout << "How many books were bought?\n";
    cin >> books;

    switch (books)
    {
        case 0 : cout << "You earned " << POINTS_0 << " points.\n";
                 break;
        case 1 : cout << "You earned " << POINTS_1 << " points.\n";
                 break;
        case 2 : cout << "You earned " << POINTS_2 << " points.\n";
                 break;
        case 3 : cout << "You earned " << POINTS_3 << " points.\n";
                 break;
        default : cout << "You earned " << POINTS_4_OR_UP << " points.\n";
    }
    return 0;
}