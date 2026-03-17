// Display the total of the numbers in ch5_r44_Numbers.txt
// Modified from ch5_r45_readNums.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("ch5_r44_Numbers.txt");

    int num, sum = 0;
    while (inFile >> num)
        sum += num;
    
    cout << "The sum is " << sum << endl;
    inFile.close();
    return 0;
}