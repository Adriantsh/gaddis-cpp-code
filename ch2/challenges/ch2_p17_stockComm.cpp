// Calculate stock commision amounts
#include <iostream>
using namespace std;

int main()
{
    int shares = 750;
    double ppShare = 35.0, percentComm = 0.02,
           stockTotal, comm, total;
    
    stockTotal = shares * ppShare;
    comm = stockTotal * percentComm;
    total = stockTotal + comm;

    cout << "Amount paid for stock alone: $" << stockTotal << endl;
    cout << "Amount of commision: $" << comm << endl;
    cout << "Total amount paid: $" << total << endl;

    return 0;
}