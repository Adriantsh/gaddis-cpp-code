// Calculate areas of circles, rectangles, and triangles.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int select;
    double area;

    cout << "\nGeometry Calculator\n\n"
         << "\t1. Calculate the Area of a Circle\n"
         << "\t2. Calculate the Area of a Rectangle\n"
         << "\t3. Calculate the Area of a Triangle\n"
         << "\t4. Quit\n\n"
         << "Enter you choice (1-4):\n";
    cin >> select;

    cout << setprecision(2) << fixed << showpoint;

    switch (select)
    {
        case 1 :
        {
            const double PI = 3.14159;
            double radius;
            cout << "Enter the radius of the circle.\n";
            cin >> radius;
            if (radius < 0)
                cout << "Please enter a non-negative number for the radius.\n";
            else
            {
                area = PI * radius * radius;
                cout << "The area is " << area << endl;
            }
            break;
        }
        case 2 :
            double length, width;
            cout << "Enter the length and width of the rectangle.\n";
            cin >> length >> width;
            if (length < 0 || width < 0)
                cout << "Both the length and width must be non-negative.\n";
            else
            {
                area = length * width;
                cout << "The area is " << area << endl;
            }
            break;
        case 3 :
            double base, height;
            cout << "Enter the length of the triangle's base and its height.\n";
            cin >> base >> height;
            if (base < 0 || height < 0)
                cout << "Both the base length and the height must be non-negative.\n";
            else
            {
                area = .5 * base * height;
                cout << "The area is " << area << endl;
            }
            break;
        case 4 :
            break;
        default :
            cout << "Please enter 1, 2, 3, or 4.\n";
            break;
    }
    return 0;
}