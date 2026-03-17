// Calculate the occupancy rate for a hotel
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int floors, occup, rooms, total_unoccup,
        total_rooms = 0, 
        total_occup = 0;
    double percent_occup;

    cout << "How many floors does the hotel have? ";
    cin >> floors;
    while (floors < 0)
    {
        cout << "Please enter a number greater than 0.\n";
        cin >> floors;
    }

    for (int f = 1; f <= floors; f++)
    {
        if (f == 13)
            continue;

        cout << "How many rooms does floor " << f << " have? ";
        cin >> rooms;
        while (rooms < 10)
        {
            cout << "There cannot be a less than 10 rooms per floor.\n"
                 << "Enter a valid number: ";
            cin >> rooms;
        }
        cout << "How many of those are occupied ";
        cin >> occup;
        while (occup < 0 || occup > rooms)
        {
            cout << "Please enter a valid number of occupied rooms: ";
            cin >> occup;
        }
        total_rooms += rooms;
        total_occup += occup;
    }

    total_unoccup = total_rooms - total_occup;
    percent_occup = 100 * total_occup / total_rooms;

    cout << setprecision(1) << showpoint << fixed;

    cout << "The hotel has " << total_rooms << " total rooms.\n"
         << "Of those, " << total_occup << " rooms are occupied\n"
         << "and " << total_unoccup << " rooms are unoccupied.\n"
         << "The hotel is " << percent_occup << "\% occupied.\n";
    
    return 0;
}