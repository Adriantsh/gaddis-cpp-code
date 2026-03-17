// This program writes data to a single line in a file.
// Modified from ch5_15_outputFile.cpp
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("ch5_16_demofile.txt");

    cout << "Now writing data to the file.\n";

    // Write four names to the file.
    outputFile << "Bach";
    outputFile << "Beethoven";
    outputFile << "Mozart";
    outputFile << "Schubert";

    // Close the file
    outputFile.close();
    cout << "Done.\n";
    return 0;
}