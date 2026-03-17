// Read and display the numbers in ch5_c22_nums.txt
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const string FILE_NAME = "ch5_c22_nums.txt";
    int num;
    ifstream inFile;

    inFile.open(FILE_NAME);

    while (inFile >> num)
        cout << num << endl;

    inFile.close();
    return 0;
}