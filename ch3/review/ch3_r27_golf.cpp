// Calculate the average of 3 golf scores
#include <iostream>
using namespace std;

int main()
{
    int score1, score2, score3;
    double avg;

    cout << "Input the score for the three games of golf, seperated by spaces.\n";
    cin >> score1 >> score2 >> score3;
    avg = (score1 + score2 + score3) / 3.0;
    cout << "The average score is " << avg << ".\n";
    return 0;
}