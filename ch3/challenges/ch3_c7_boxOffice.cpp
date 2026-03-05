// Calculate the gross and net box office profit
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    const double PRICE_ADULT = 10, PRICE_CHILD = 6, MARGIN = 0.2;
    int adult, child, spacing;
    double gross, net, distributor;
    string movie;

    cout << "Enter the name of the movie:\n";
    getline(cin, movie);
    cout << "Enter the number of adult tickets sold:\n";
    cin >> adult;
    cout << "Enter the number of child tickets sold:\n";
    cin >> child;

    gross = PRICE_ADULT * adult + PRICE_CHILD * child;
    net = gross * MARGIN;
    distributor = gross - net;

    spacing = 40;
    cout << setprecision(2) << fixed << showpoint << left;
    cout << setw(spacing) << "Movie Name:" << "\"" << movie << "\"\n";
    cout << setw(spacing) << "Adult Tickets Sold:" << adult << endl;
    cout << setw(spacing) << "Child Tickets Sold:" << child << endl;
    cout << setw(spacing) << "Gross Box Office Profit:" << "$" << gross << endl;
    cout << setw(spacing) << "Net Box Office Profit:" << "$" << net << endl;
    cout << setw(spacing) << "Amount Paid to Distributor:" << "$" << distributor << endl;
    return 0;
}