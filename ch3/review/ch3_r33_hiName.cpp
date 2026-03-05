// Find the errors
#include <iostream>     // extra ;
#include <string>       // missing
using namespace std;

int main()
{
    string name;            // char name,go;
    cout << "Enter your name: ";
    getline(cin, name);     // getline >> name;   
    cout << "Hi " << name << endl;
    return 0;
}