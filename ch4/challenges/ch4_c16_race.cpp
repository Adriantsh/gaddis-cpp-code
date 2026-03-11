// Display who came first, second and third in a race.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    double time1, time2, time3;
    string name1, name2, name3;
    bool tie, bad_input;

    cout << "Enter the name of the first runner.\n";
    getline(cin, name1);
    cout << "Enter the first runner's time.\n";
    cin >> time1;
    cout << "Enter the name of the second runner.\n";
    cin.ignore();
    getline(cin, name2);
    cout << "Enter the second runner's time.\n";
    cin >> time2;
    cout << "Enter the name of the third runner.\n";
    cin.ignore();
    getline(cin, name3);
    cout << "Enter the third runner's time.\n";
    cin >> time3;

    bad_input = ((time1 <= 0) || (time2 <= 0) || (time3 <= 0));
    tie = ((time1 == time2) || (time1 == time3) || (time2 == time3));


    if (!tie && !bad_input)
    {
        if (time1 < time2 && time1 < time3)
        {
            cout << name1 << " came in first.\n";

            if (time2 < time3)
                cout << name2 << " came in second.\n"
                     << name3 << " came in third.\n";
            else
                cout << name3 << " came in second.\n"
                     << name2 << " came in third.\n";
        }
        else if (time2 < time3 && time2 < time1)
        {
            cout << name2 << " came in first.\n";

            if (time1 < time3)
                cout << name1 << " came in second.\n"
                     << name3 << " came in third.\n";
            else
                cout << name3 << " came in second.\n"
                     << name1 << " came in third.\n";
        }
        else
        {
            cout << name3 << "came in first.\n";

            if (time1 < time2)
                cout << name1 << " came in second.\n"
                     << name2 << " came in third.\n";
            else
                cout << name2 << " came in second.\n"
                     << name1 << " came in third.\n";
        }
    }
    else if (!bad_input)
    {
        if (time1 == time2 && time1 == time3)
        {
            cout << name1 << ", " << name2 << ", and " << name3 << " all tied for 1st.\n";
        }
        else
        {
            if (time1 == time2)
            {
                if (time1 < time3)
                    cout << name1 << " and " << name2 << " tied for first.\n"
                         << name3 << " came in third.\n";
                else
                    cout << name3 << " came in first.\n"
                         << name1 << " and " << name2 << " tied for third.\n";
            }
            else if (time1 == time3)
            {
                if (time1 < time2)
                    cout << name1 << " and " << name3 << " tied for first.\n"
                         << name2 << " came in third.\n";
                else
                    cout << name2 << " came in first.\n"
                         << name1 << " and " << name3 << " tied for third.\n";
            }
            else
            {
                if (time2 < time1)
                    cout << name2 << " and " << name3 << " tied for first.\n"
                         << name1 << " came in third.\n";
                else
                    cout << name1 << " came in first.\n"
                         << name2 << " and " << name3 << " tied for third.\n";
            }
        }
    }
    else
        cout << "All runners' times must be greater than 0.\n";

    return 0;
}