// Find the errors
// This program averages 3 test scores.
// It uses the variable perfectScore as a flag.
#include <iostream>                                         // missing #
using namespace std;

int main()
{
    cout << "Enter your 3 test scores and I will "          // extra ;
         << "average them: ";                               // missing final space
    int score1, score2, score3;                             // , instead of ;
    cin >> score1 >> score2 >> score3;
    double average;
    average = (score1 + score2 + score3) / 3.0;
    bool perfectScore;                                      // definition placed after assignment
    if (average == 100)                                     // extra ;  = instead of ==
        perfectScore = true;    // Set the flag variable
    else                                                    // missing else statement
        perfectScore = false;
    cout << "Your average is " << average << endl;
    if (perfectScore)                                       // extra ;
    {
        cout << "Congratulations!\n";
        cout << "That's aperfect score.\n";
        cout << "You deserve a pat on the back!\n";
    }
    return 0;                                               // inside block          
}