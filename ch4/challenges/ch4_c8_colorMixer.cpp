// Display the color you get when mixing two primary colors.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string color1, color2, color3;

    cout << "Enter two primary colors seperated by a space.\n"
         << "The primary colors are red, yellow, and blue.\n";
    cin >> color1 >> color2;

    if (color1 == "red")
    {
        if (color2 == "red")
            color3 = "red";
        else if (color2 == "yellow")
            color3 = "orange";
        else if (color2 == "blue")
            color3 = "purple";
        else 
            color3 = "error";
    }
    else if (color1 == "yellow")
    {
        if (color2 == "red")
            color3 = "orange";
        else if (color2 == "yellow")
            color3 = "yellow";
        else if (color2 == "blue")
            color3 = "green";
        else 
            color3 = "error";
    }
    else if (color1 == "blue")
    {
        if (color2 == "red")
            color3 = "purple";
        else if (color2 == "yellow")
            color3 = "green";
        else if (color2 == "blue")
            color3 = "blue";
        else 
            color3 = "error";
    }
    else
        color3 = "error";

    if (color3 != "error")
    {
        cout << "You get " << color3 << " when you mix " 
             << color1 << " and " << color2 << ".\n";
    }
    else
        cout << "You did not enter two primary colors.\n";
        
    return 0;
}