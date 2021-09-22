#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    // display the welcome message
    cout << "Welcome to my Word Game! This is the template:\n\n";

    // display the template
    cout << "This is the story of NOUN.\n";
    cout << "They are about NUMBER years old.\n";
    cout << "They like the color NOUN because \n";
    cout << "it reminds them of NOUN.\n";
    cout << "On weekends, they VERB because it makes them feel ADJECTIVE.\n";
    cout << "They work as a stock market investor.\n";
    cout << "Currently, they are focusing on a stock with price $NUMBER.\n";
    cout << "The stock name is NOUN and uses the marker SYMBOL.\n\n";

    // TODO: gather the input needed for the story
    string firstNoun , secondNoun, thirdNoun, verb, adjective, fourthNoun  ;
       int firstNum;
       float secondNum;
       char symbol;

       cout << "Enter the first noun: ";
       getline(cin, firstNoun);
       cout << "Enter the first number (integer): ";
       cin >> firstNum;
       cin.ignore();
       cout << "Enter the second noun: ";
       getline(cin, secondNoun);
       cout << "Enter the third noun: ";
       getline(cin, thirdNoun);
       cout << "Enter the verb: ";
       getline(cin, verb);
       cout << "Enter the adjective: ";
       getline(cin, adjective);
       cout << "Enter the second number (floating-point): ";
       cin >> secondNum;
       cin.ignore();
       cout << "Enter the fourth noun:  ";
       getline(cin, fourthNoun);
       cout << "Enter the symbol (single character):";
       cin >> symbol;
       cin.ignore();
    // TODO: display the story with the filled information
       	cout << "\nThis is the story of " << firstNoun << ".\n";
    	cout << "They are about " << firstNum << " years old.\n";
    	cout << "They like the color " << secondNoun << " because\n";
    	cout << "it reminds them of " << thirdNoun << "\n";
    	cout << "On weekends, they " << verb << " because it makes them feel "<< adjective << endl;
    	cout << "They work as a stock market investor."<< endl;
    	cout << "Currently, they are focusing on a stock with price $"<< secondNum << endl;
    	cout << "The stock name is "<< fourthNoun <<" and uses the marker "<< symbol << ".\n";

    // TODO: seed the random number generator using the current system time
       srand(time(0));
    // TODO: create the graph
       const int min = 2, max= 4;
       float randomNum = (secondNum * (min + rand() % (max - min + 1 ))),
    	   randomNum2 = (secondNum / (min + rand() % (max - min + 1 ))),
    	   randomNum3 = (secondNum + (min + rand() % (max - min + 1 ))),
		   randomNum4 = (secondNum - (min + rand() % (max - min + 1 ))),
		   randomNum5 = (secondNum * (min + rand() % (max - min + 1 )));

       cout<< "\nHere the visual graph of the stock:\n";
       cout << setfill(symbol)
		<< setw(secondNum)  << "" << endl
		<< setw(randomNum)  << "" << endl
        << setw(randomNum2) << "" << endl
		<< setw(randomNum3) << ""<< endl
		<< setw(randomNum4) << ""<< endl
		<< setw(randomNum5) << ""<< endl;

    // TODO: display the final stock price
       cout << "\nIn the end, the stock ended at $" << randomNum5;
    // terminate
    return 0;
}
