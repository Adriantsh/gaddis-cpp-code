// Calculate the profit make from a stock transaction
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int shares = 1000;
    double buy_price = 45.5, 
           sell_price = 56.9, 
           comm = 0.02,
           total_buy, total_sell,
           buy_comm, sell_comm, profit;

    total_buy = shares * buy_price;
    buy_comm = total_buy * comm;
    total_sell = shares * sell_price;
    sell_comm = total_sell * comm;
    profit = total_sell - total_buy - buy_comm - sell_comm;

    cout << setprecision(2) << fixed;
    cout << "Joe paid $" << total_buy << " for the stock.\n";
    cout << "Joe paid his broker $" << buy_comm
         << " in commission when he bought the stock.\n";
    cout << "Joe sold the stock for $" << total_sell << ".\n";
    cout << "Joe paid his broker $" << sell_comm
         << " in commission when he sold the stock.\n";
    cout << "Joe made $" << profit << " in profits.\n";
    return 0;
}