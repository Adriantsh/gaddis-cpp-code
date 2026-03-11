// Convert a number from 1 to 10 to a roman numeral
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number from 1 to 10.\n";
    cin >> num;

    cout << "The roman numeral for that number is: ";
    switch (num)
    {
        case 1: cout << "I";
                break;
        case 2: cout << "II";
                break;
        case 3: cout << "III";
                break;
        case 4: cout << "IV";
                break;
        case 5: cout << "V";
                break;
        case 6: cout << "VI";
                break;
        case 7: cout << "VII";
                break;
        case 8: cout << "VIII";
                break;
        case 9: cout << "IX";
                break;
        case 10: cout << "X";
                 break;
        default: cout << "That is not a number between 1 and 10.";
    }
    cout << endl;
    return 0;
}