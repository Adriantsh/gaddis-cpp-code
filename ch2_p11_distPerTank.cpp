// Calculate distance traveled on full gas tank in town and on highway
#include <iostream>
using namespace std;

int main()
{
    double tankSize = 20,
           mpgTown = 23.5, 
           mpgHighway = 28.9,
           distance;
    
    distance = tankSize * mpgTown;
    cout << "The car can travel " << distance 
         << " miles on one tank of gas when driven in town.\n";

    distance = tankSize * mpgHighway;
    cout << "The car can travel " << distance 
         << " miles on one tank of gas when driven on the highway.\n";
    
    return 0;
}