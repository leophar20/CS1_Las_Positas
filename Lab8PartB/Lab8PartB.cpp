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
    cout << "4. Random number generator\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // get the user's choice
    unsigned userChoice = 0;
    cout << "Enter the option you want: ";
    cin  >> userChoice;
    cin.ignore();

    switch( userChoice )
    {
    	case 1 :// TODO: option 1
    	{
    		string sentence;
    	    	cout << "Enter your sentence: " << endl;
    	    	getline(cin, sentence );
    	    	cout << "Your sentence has "<< sentence.length() << " characters.\n";
    	    	break;
    	}
    	case 2:// TODO: option 2
    	{
    		int range = 0;
    		    	cout << "I'm going to check if the number you enter is between 25 and 63 using logic!\n";
    		    	cout << "Enter your number: ";
    		    	cin >> range;

    		    	if ((range >= 25 && range <= 63))
    		    	{
    		    	cout << "The number you entered is between 25 and 63!\n";

    		    	} else{

    		    	cout << "The number you entered is not between 25 and 63!\n"; }
    		    	break;
    	}
    	// TODO: option 3
    	case 3:
    	{
    	int secondRange = 0;

    		    		cout << "I'm going to check if the number you enter is outside the range of -54 and 147 using magic!\n";
    		    		cout << "Enter your number: " ;
    		    		cin >> secondRange;
    		    		if ((secondRange >= 147  || secondRange <= -54))
    		    		{
    		    		cout << "The number you entered is definitely smaller than -54 or bigger than 147.\n";
    		    		} else
    		    		{
    		    		cout << "The number you entered is in the range -54 and 147.\n";
    		    		}break;
    	}

    	case 4: // option 4
    	{
    		int min, max ;
    			cout << "Enter the minimum value: ";
				cin >> min;
				cout << "Enter the maximum value: ";
				cin >> max;
				if ((min < max) && (max > min))
				{
					int random = (min + rand() % (max - min + 1 ));
					cout << "A random number between " << min << " and " << max << " is " << random << endl;

				} else if (min > max )
				{
					cout << "Error! You entered a number that is smaller than " << min ;
				}
				break;
    	}
    	default:
    	{

    		cout << "Error! You entered an invalid choice!\n";
    	}

    }

    // good bye message
    cout << "Good bye! Thanks for using my program :)\n";

    // terminate
    return 0;
}
