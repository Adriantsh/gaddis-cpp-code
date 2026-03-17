// Display the numbers in ch5_r44_Numbers.txt
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile("ch5_r44_Numbers.txt");

    int num;
    while (inFile >> num)
        cout << num << endl;
    
    inFile.close();
    return 0;
}