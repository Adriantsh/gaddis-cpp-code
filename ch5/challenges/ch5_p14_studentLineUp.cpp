// Determine which student should be at the front and back
// of an alphabetically ordered line.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num_students;
    string first, last, name;

    cout << "How many students are there in the class? ";
    cin >> num_students;

    cout << "Enter the first name of each student:\n";
    cin >> name;
    first = last = name;
    
    for (int s = 1; s < num_students; s++)
    {
        cin >> name;
        if (name > last)
            last = name;
        if (name < first)
            first = name;
    }

    cout << "First student in line: " << first << endl
         << "Last student in line: " << last << endl;
         
    return 0;
}