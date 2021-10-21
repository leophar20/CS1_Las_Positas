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

    // TODO: create the array of size 7 for the magic 8-ball responses
    const int ARRAY_SIZE = 7;
        string response[ARRAY_SIZE];
    // TODO: let the user enter their own fortunes
    //       using a range-based `for` loop
       cout << "Create 7 of your own fortune." << endl;
        for(string& element : response){
        	cout << "type a word: ";
        	getline(cin,element);
        }

    // greeting message
    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
    cout << "        THE MAGIC 8-BALL HAS BEEN SUMMONED!\n";

    // TODO: use a loop to let the user enter their questions
    //       you should be able to just copy-and-paste your loop from part A
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
