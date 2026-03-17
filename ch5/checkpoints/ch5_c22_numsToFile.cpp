// Write the numbers 1 through 10 to a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    const int MAX_NUM = 10;
    const string FILE_NAME = "ch5_c22_nums.txt";
    ofstream outputFile;

    outputFile.open(FILE_NAME);

    for (int count = 1; count <= MAX_NUM; count++)
    {
        outputFile << count << endl;
    }

    outputFile.close();
    return 0;
}