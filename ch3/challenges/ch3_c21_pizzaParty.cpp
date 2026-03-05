// Calculate the number pizzas to purchase for a party
// Modified from ch3_c20_pizzaPi.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159, AREA = 14.125, 
                 SLICES_PER_PERSON = 4;
    double diameter, slices_per_piz, P;
    int num_ppl, pizzas;

    cout << "How many people will be at the party?\n";
    cin >> num_ppl;
    cout << "What is the diameter of the pizzas"
         << " to be ordered in inches?\n";
    cin >> diameter;

    slices_per_piz = PI * diameter * diameter / 4 / AREA;
    P = num_ppl * SLICES_PER_PERSON / slices_per_piz;   // unrounded number of pizzas
    pizzas = static_cast<int>(P - fmod(P,1) + 1);       // round up

    cout << pizzas << " pizza(s) should be ordered for the party.\n";
    return 0;
}