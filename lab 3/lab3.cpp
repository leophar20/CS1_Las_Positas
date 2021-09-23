#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    char letterGrade;
    short numberGrade;
    // Initialize variable
    letterGrade = 'A', numberGrade = 100;

    cout << "I want a letter grade of " << letterGrade << " in this course! \n";
    cout << "I will work hard to get a grad of " << numberGrade << " on the first exam! \n";
    //declared and initialized new variables
    string favoriteFood = "Dimsum", dislikeFood = "Nothing" ;
    //print the statement
    cout << "My favorite food is " << favoriteFood << ", but I really dislike " << dislikeFood;

    //new variable for double
    double  lenght= 12.5 , width =5.35;
    cout << "\nThe length of the rectangle is " << lenght;
    cout << "\nThe width of the rectangle is " << width;

    //new variable for the boolean
    bool hasSiblings = true, hasPet = true;
    cout << "\nFor below, 1 means yes and 0 means no. ";
    cout << "\nDo I have a siblings? " << hasSiblings;
	cout << "\nDo I have pets? " << hasPet;


    // terminate
    return 0;
}
