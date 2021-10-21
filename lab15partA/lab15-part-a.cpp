#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // constant variables
    const char FILL = '-';
    const int WIDTH = 50;
    
    // seed the RNG
    srand(time(0));

    // TODO: create the array of size 12 for the magic 8-ball responses
    //       and initialize the elements using the given responses on Canvas
    const int ARRAY_SIZE = 12;
    string response[ARRAY_SIZE] = { // initialized the array
    		"Yes, of course!",
    		"Without a doubt, yes.",
    		"You can count on it.",
    		"For sure!",
    		"Ask me later.",
    		"I'm not sure . . .",
    		"I can't tell you right now.",
    		"I'll tell you after my nap. Zzzzzz",
    		"No way!",
    		"I don't think so.",
    		"Without a doubt . . . no!",
    		"The answer is very clearly NOOOOO",
    };

    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    string question; // intialized other variables needed
    string answer;

    do{
    cout << setw(WIDTH) << "" << endl;
    int randomNum = ((0 + rand() % (ARRAY_SIZE - 0 + 1 ))); // intialized randomizer
    cout << "Enter a question below, so that I might answer it:" << endl;
    getline(cin, question);
    cout << "\n" << response[randomNum] ;
    cout << "\n\nEnter yes to continue: ";
    getline(cin,answer);
    } while (answer == "yes");

    // final message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "           THE MAGIC 8-BALL NOW DEPARTS!\n";
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;

    // terminate
    return 0;
}
