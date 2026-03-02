// Program should produce the following output:
//     Wolftgang Smith
// Wolfgang Smith
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string person = "Wolfgang Smith";
    cout << right;
    cout << setw(20);
    cout << person << endl;
    cout << left;
    cout << person << endl;
    return 0;
}