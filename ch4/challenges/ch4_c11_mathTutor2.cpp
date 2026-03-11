// Display and add 2 random numbers to add
// Check is solution is correct and if not give correct soln.
// Modified from ch3_c17_mathTutor.cpp
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime> 
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const int MAX_DIGITS = 3;
    const string LINE = "----\n";
    int num1, num2, stud_sum, correct_sum, max_val;

    unsigned seed = time(0);
    srand(seed);

    max_val = static_cast<int>(pow(10, MAX_DIGITS));
    num1 = rand() % max_val;
    num2 = rand() % max_val;
    correct_sum = num1 + num2;

    cout << setw(MAX_DIGITS + 1) << num1 << endl;
    cout << "+" << setw(MAX_DIGITS) << num2 << endl;
    cout << LINE;
    cin >> stud_sum;

    if (stud_sum == correct_sum)
        cout << "Correct Answer!\n";
    else
        cout << "Incorrect. The correct answer is "
             << correct_sum << endl;
    return 0;
}
