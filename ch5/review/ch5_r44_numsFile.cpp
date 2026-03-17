// Writes the numbers 1-100 into a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outFile("ch5_r44_Numbers.txt");

    for (int c = 1; c <= 100; c++)
        outFile << c << endl;
    
    outFile.close();
    return 0;
}