// Calculate the average of test scores.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double score1, score2, score3, score4, score5, avg;

    cout << "Enter the 5 test scores, seperated by spaces:\n";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    avg = (score1 + score2 + score3 + score4 + score5) / 5.0;
    cout << setprecision(1) << fixed << showpoint;
    cout << "The average test score is " << avg << endl;
    return 0;
}