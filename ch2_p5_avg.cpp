// Calculate Avg
#include <iostream>
using namespace std;

int main()
{
    double a = 28, b = 32,
           c = 37, d = 24,
           e = 33, sum, avg;
    
    sum = a + b + c + d + e;
    avg = sum / 5.0;

    cout << "Average: " << avg << endl;
    return 0;
}