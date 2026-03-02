// Display ASCII code of letter
#include <iostream>
using namespace std;
int main()
{
    char letter;

    cout << "Enter a character: ";
    cin >> letter;
    cout << "The ASCII code for the character \""<< letter << "\" is " 
         << static_cast<int>(letter) << ".\n";
    return 0;
}