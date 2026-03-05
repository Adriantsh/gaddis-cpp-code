// Play a word game with the user
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string name, age, city, college, 
           prof, animal, pet_name;
    
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your age:\n";
    getline(cin, age);
    cout << "Enter the name of a city:\n";
    getline(cin, city);
    cout << "Enter the name of a college:\n";
    getline(cin, college);
    cout << "Enter a profession:\n";
    getline(cin, prof);
    cout << "Enter a type of animal:\n";
    getline(cin, animal);
    cout << "Enter a pet's name:\n";
    getline(cin, pet_name);

    cout << "There once was a person named " << name
         << " who lived in " << city << ". "
         << "At the age of " << age
         << ", " << name << " went to college at " << college
         << ". " << name << " graduated and went to work as a "
         << prof << ". Then " << name << " adopted a(n) "
         << animal << " named " << pet_name 
         << ". They both lived happily ever after!" << endl;
         
    return 0;
}
