// Display the characters for ASCII codes 0 through 127
#include <iostream>
using namespace std;

int main()
{
    char character;
    
    for (int row = 0; row < 8; row++)
    {
        for (int c = 0; c < 16; c++)
        {
            character = 16 * row + c;
            cout << character << " ";
        }
        cout << endl;
    }
    return 0;
}