// Select a restaurant based on dietary restrictions.
/*
            vegi    gluten-free     vegan 
    TCK     Y       Y               Y
    CC      Y       Y               Y
    MSPC    Y       Y               N
    MFI     Y       N               N
    JGB     N       N               N
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    string vegi, vegan, gluten;

    cout << "Answer the following prompts with yes or no:\n"
         << "Is anyone in your party a vegetarian?\n";
    cin >> vegi;
    cout << "Is anyone in your party a vegan?\n";
    cin >> vegan;
    cout << "Is anyone in your party gluten-free?\n";
    cin >> gluten;
    cout << "Here are your restaurant choices:\n"
         << "\tThe Chef's Kitchen\n"
         << "\tCorner Café\n";
    
    if (vegan == "no")
    {
        cout << "\tMain Street Pizza Company\n";
        if (gluten == "no")
        {
            cout << "\tMama's Fine Italian\n";
            if (vegi == "no")
                cout << "\tJoe's Gourmet Burgers\n";
        }
    }
    return 0;
}