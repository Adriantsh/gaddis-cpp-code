// Lead the user through steps to fix their wifi
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    switch (0)
    {
        case 0 :  
            cout << "Answer either yes or no to the following prompts:\n"
                 << "Reboot the computer and try to connect.\n"
                 << "Did that fix the problem?\n";
            cin >> input;
            if (input == "yes")
                break;
        case 1 : 
            cout << "Reboot the router and try to connect.\n"
                 << "Did that fix the problem?\n";
            cin >> input;
            if (input == "yes")
                break;
        case 2 :
            cout << "Make sure the cables between the router\n"
                 << "and the modem are plugged in firmly.\n"
                 << "Did that fix the problem?\n";
            cin >> input;
            if (input == "yes")
                break;
        case 3 :
            cout << "Move the router to a new location and try to connect.\n"
                 << "Did that fix the problem?\n";
            cin >> input;
            if (input == "yes")
                break;
        case 4 :
            cout << "Get a new router.\n";
    }
    return 0;
}