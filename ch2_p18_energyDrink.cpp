// Calculate number of costumers who purchase drinks and prefer citrus flavor
#include <iostream>
using namespace std;

int main()
{
    int numCust = 16500;
    double percentPurchase = 0.15, 
           percentCitrus = 0.58,
           custPurchase, custCitrus;

    custPurchase = numCust * percentPurchase;
    custCitrus = custPurchase * percentCitrus;

    cout << "Approximately " << custPurchase << " customers purchase one or more energy drinks per week.\n";
    cout << "Approximately " << custCitrus << " customers prefer citrus-flavored energy drinks.\n";

    return 0;
}