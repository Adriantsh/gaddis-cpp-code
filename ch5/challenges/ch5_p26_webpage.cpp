// Create an html file for a website that
// displays the user's information.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string name, blurb;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Describe yourself: ";
    getline(cin, blurb);

    ofstream outFile("ch5_p26_webpage.html");

    outFile << "<html>\n"
            << "<head>\n"
            << "</head>\n"
            << "<body>\n"
            << "\t<center>\n"
            << "\t\t<h1>" << name <<"</h1>\n"
            << "\t</center>\n"
            << "\t<hr />\n"
            << "\t" << blurb << "\n"
            << "\t<hr />\n"
            << "</body>\n"
            << "</html>\n";

    outFile.close();
    
    return 0;
}