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

	    char choices;
	    cout << "Enter your tunnel choice: ";
	    cin >> choices;
	    switch(choices)
	    {

	    	case 'A':
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
	    	case 'B':
	    	{

	    	break;
	    	}
	    	case 'C':
	    	{

	    	break;
	    	}
	    	default:
	    	{
	    		cout << "Invalid menu option, please re-run the story.\n";
	    	break;
	    	}


	    }
	    cout << "Good Bye!\n";

	return 0;
}




