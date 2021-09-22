#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // display the menu options
    const char FILL  = '-';
    const int  WIDTH = 40;
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "1. Calculate the length of a sentence\n";
    cout << "2. Validate inside a range\n";
    cout << "3. Validate outside a range\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // get the user's choice
    unsigned userChoice = 0;
    cout << "Enter the option you want: ";
    cin  >> userChoice;
    cin.ignore();
    // TODO: option 1
    if (userChoice == 1 )
    {
    	string sentence;
    	cout << "Enter your sentence: " << endl;
    	getline(cin, sentence );
    	cout << "Your sentence has "<< sentence.length() << " characters.\n";
    }
    // TODO: option 2
    else if (userChoice == 2)
    {

    	int range = 0;
    	cout << "I'm going to check if the number you enter is between 25 and 63 using logic!\n";
    	cout << "Enter your number: ";
    	cin >> range;

    	if ((range >= 25 && range <= 63))
    	{
    	cout << "The number you entered is between 25 and 63!\n";

    	} else

    	cout << "The number you entered is not between 25 and 63!\n";

    	}
    // TODO: option 3
    	else if (userChoice == 3)
    	{
    		int secondRange = 0;
    		cout << "I'm going to check if the number you enter is outside the range of -54 and 147 using magic!\n";
    		cout << "Enter your number: " ;
    		cin >> secondRange;
    		if ((secondRange >= 147  || secondRange <= -54))
    		{
    		cout << "The number you entered is definitely smaller than -54 or bigger than 147.\n";
    		} else
    		cout << "The number you entered is in the range -54 and 147.\n";


    }
    // good bye message
    cout << "Good bye! Thanks for using my program :)\n";

    // terminate
    return 0;
}
