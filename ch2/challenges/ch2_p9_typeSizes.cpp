// Display the ammount of memory used for various data types
#include <iostream>
using namespace std;

int main()
{
    int size;
    
    size = sizeof(char);
    cout << "Variables of type char use " << size << " bytes of memory.\n";

    size = sizeof(int);
    cout << "Variables of type int use " << size << " bytes of memory.\n";

    size = sizeof(float);
    cout << "Variables of type float use " << size << " bytes of memory.\n";

    size = sizeof(double);
    cout << "Variables of type double use " << size << " bytes of memory.\n";

    return 0;
}