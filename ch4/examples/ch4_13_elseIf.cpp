// This program uses nested if/else if statemnests to assign a
// letter grade (A, B, C, D, or F) to a numeric test score.
// Modified from ch4_12_quadNestedIf.cpp
#include <iostream>
using namespace std;

int main()
{
    // Constants for grade threshold
    const int A_SCORE = 90,
              B_SCORE = 80,
              C_SCORE = 70,
              D_SCORE = 60;
        
    int testScore; // To hold a numeric test score

    // get the numeric test score.
    cout << "Enter your numeric test score and I will\n";
    cout << "tell you the letter grade you earned: ";
    cin >> testScore;

    // Determine the letter grade.
    if (testScore >= A_SCORE)
        cout << "Your grade is A.\n";
    else if (testScore >= B_SCORE)
        cout << "Your grade is B.\n";
    else if (testScore >= C_SCORE)
        cout << "Your grade is C.\n";
    else if (testScore >= D_SCORE)
        cout << "Your grade is D.\n";
    else
        cout << "Youre grade is F.\n";
    
    return 0;
}