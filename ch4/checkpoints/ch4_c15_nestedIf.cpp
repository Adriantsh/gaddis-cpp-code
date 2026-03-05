// Predict the output
// 5: "Zero\n"; 15: "Zero\nTen\n"; 30: "Zero\nTen\nTwenty"; -1: ""
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Zero\n";

        if (number > 10)
        {
            cout << "Ten\n";

            if (number > 20)
            {
                cout << "Twenty\n";
            }
        }
    }
    return 0;
}