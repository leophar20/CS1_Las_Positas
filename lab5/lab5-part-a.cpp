#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare and initialize variables
    int numSiblings = 0;
    string fullName, city;

    // gather input from the user
    cout << "Enter your full name: ";
    // TODO: write statement to get input

    getline(cin , fullName);

    cout << "Enter a how many siblings you have: ";
    // TODO: write statement to get input
    cin >> numSiblings;

    cout << "Enter your current city: ";
    // TODO: write statement to get input
    cin.ignore();
    getline(cin, city);
    // TODO: display that information
    cout << "Hello " << fullName << endl;
    cout << "You have " << numSiblings <<" and live in " << city << ".\n";
    cout << "Your name has " << fullName.length() << " characters.\n";
    cout << "Your city has a " << city.length() << " characters.\n";

    // TODO: display the length of each `string` variable

    // terminate
    return 0;
}
