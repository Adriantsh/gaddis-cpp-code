// Find the errors.
// This program uses a switch-case statement to assign a
// letter grade (A, B, C, D, F) to a numeric test score.
#include <iostream>
using namespace std;

int main()
{
    char letter;
    double testScore;

    cout << "Enter your test score and I will tell you\n";
    cout << "the letter grade you earned: ";
    cin >> testScore;

    letter = testScore < 0 ? 0
            : testScore < 60.0 ? 'F' 
            : testScore < 70.0 ? 'D'
            : testScore < 80.0 ? 'C'
            : testScore < 90.0 ? 'B'
            : testScore <= 100.0 ? 'A' : 0;

    switch (letter)                             // switch expression must be an int
    {
        case ('F'):                             // case expressions must be const
                cout << "Your grade is F.\n";
                break;
        case ('D'):
                cout << "Your grade is D.\n";
                break;
        case ('C'):
                cout << "Your grade is C.\n";
                break;
        case ('B'):
                cout << "Your grade is B.\n";
                break;
        case ('A'):
                cout << "Your grade is A.\n";
                break;
        default:
                cout << "That score isn't valid\n";
    }
    return 0;
}