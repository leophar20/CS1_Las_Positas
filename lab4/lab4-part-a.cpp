#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    // declare and initialize variables to hold user information
    unsigned userAge     = 0,
             userHours   = 0;
    double   userPayRate = 0.0;

    // prompt the user for their age
    cout << "How old are you? ";
    // TODO: write cin statement
    cin >> userAge;
    // prompt the user for their pay rate
    cout << "What is your pay rate? $";
    // TODO: write cin statement
    cin	>> userPayRate;
    // prompt the user for their hours worked
    cout << "How many hours did you work this week? ";
    // TODO: write cin statement
    cin >> userHours;
    // math statements
    // TODO: write various math statements according to list

    cout << "Twice your age is " << userAge * 2 ; // twice the age
    cout << "\nHalf your age is " << userAge / 2.0 ;// half the age
    cout << "\nThis week, you will earn $" << userPayRate * userHours ; // earnings
    cout << "\nIf you earned a $50 bonus, your new total is $" << (userPayRate * userHours) + 50 ; //earnings + 50
    cout << "\nUnder an exponential pay, you would get $" << pow(userPayRate, userHours) ; // exponential pay rate
    // terminate
    return 0;
}
