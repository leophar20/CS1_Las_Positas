/*
 * homework4.cpp
 *
 *  Created on: Sep 23, 2021
 *      Author: Raphael
 */
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std; // @suppress("Symbol is not resolved")

int main() {

	 // display the menu options
	    const char FILL  = '#';
	    const int  WIDTH = 40;
	    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
	    cout << "You enter a cave and see 3 tunnels up ahead.\nWhich route do you take?\n";
	    cout << setfill(' ') << setw(8)<<" " << "A. Door\n";
	    cout << setw(8) <<" "<< "B. Animal\n";
	    cout <<  setw(8) <<" " << "C. Super Easy Tunnel\n";
	    cout << setfill(FILL) << setw(WIDTH) << "#" << endl;
	    // initialize the choice variable
	    char choices;
	    cout << "Enter your tunnel choice: ";
	    cin >> choices;


	    //switch cases for the choices
	    switch(choices)
	    {

	    	case 'A': // case A: door tunnel: word must be more than 4 characters in order to pass.
	    	{
	    		string word;
	    		cout << "You enter tunnel A and discover . . . a locked door.\n";
	    		cout << "It reads: to unlock, enter a word that has an odd length greater than 4\n";
	    		cout << "Enter your word: " ;
	    		cin.ignore();
	    		getline(cin,word);
	    		if ((word.length()) > 4 )
	    		{
	    			cout << "You hear the lock click . . . it must be open!\n"
	    				 << "You push the door and end up outside, yay!\n";
	    		} else
	    		{
	    			cout << "That did not work . . . you are now stuck FOREVER!\n";
	    		}
	    		break;
	    	}
	    	case 'B': // case B : guess the name which is either bugs or Bugs.
	    		{
	    			string guess;
	    			cout << "You enter tunnel B and discover . . . a bunny?\n"
	    				 <<"The bunny says: I will let you pass if you can guess my name!\n"
	    				 <<"Here's a hint: it rhymes with hugs.\n";
	    			cout << "Enter your guess: " ;
	    			cin.ignore();
	    			getline(cin,guess);
	    			if (guess == "Bugs" || "bugs")
	    			{
	    				cout << "The bunny bounces around and lets you through!\n"
	    					 <<"You continue on and end up outside, yay!\n";
	    			}else{
	    				cout <<	"That was incorrect . . . the bunny blocks your path FOREVER!";
	    			}
	    			break;
	    	}

	    	case 'C':  // case C: super easy tunnel, which consist of two riddle.
	    	{
	    		srand(time(0));
	    		int userNumber;
	    		double randomNum = (1 + rand() % (12 - 1 + 1 ));
	    		// first riddle
	    		cout << "You enter tunnel C and discover . . . a M E N A C I N G clock!\n"
	    			 <<"The clock says: I have two riddles for you!\n"
					 <<"First: tell me a number that will pass my hidden test\n";
	    			cin >> userNumber;
	    		if ((userNumber > 0) && (((pow((randomNum/userNumber),3))+ sqrt((userNumber + 5.74))) >= 30))
	    		{
	    			//second riddle inside the statement of the first riddle when passed.
	    			int userNumber2;
	    			cout << "Second: I'm thinking of a number between 1 and 12. What is it?\n";
	    			cout << "Enter your guess: ";
	    			cin >> userNumber2;
	    			if(userNumber2 == randomNum)
	    			{
	    				cout << "You beat the clock! It is no longer menacing.\n"
	    					 <<"It lets you pass and end up outside, yay!\n";
	    			}else {
	    				cout << "You failed to guess the clock number . . . you turn into a clock FOREVER!\n";
	    			}
	    		}else{
	    			cout << "You entered the wrong value . . . your journey ends here FOREVER!\n";
	    		}
	    		break;
	    	}
	    	//default answer when they input a wrong input
	    	default:
	    	{
	    		cout << "Invalid menu option, please re-run the story.\n";
	    	break;
	    	}


	    }
	    //ending greetings
	    cout << "Good Bye!\n";

	return 0;
}




