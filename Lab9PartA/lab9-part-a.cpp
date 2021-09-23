#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    // prompt and store an integer number from the user
    int userNumber = 0;
    cout << "Enter an integer value: ";
    cin  >> userNumber;

    // seed the RNG using the current time
    srand(time(0));

    // TODO: generate a random number using the range:
    //       minimum - two times the user's number
    //       maximum - three times the user's number
     int min = userNumber * 2, max= userNumber * 3;
     int randomNum = ((min + rand() % (max - min + 1 )));

    // TODO: display the random number
    cout << "Random number is " << randomNum  << endl;
    // display the calculating message
    cout << "Calculating . . .\n";
    
    // TODO: while loop to print *beep* or *boop*
    while (userNumber <= randomNum )
    {
    	if (userNumber % 5 == 0){
    		cout << "*beep* ";
    	}else if (randomNum % 10 == 0)
    	{
    		cout << "-boop- ";
    	}
    	userNumber ++;
    	randomNum --;
    }

    // display the final message
    cout << "\nDone!\n";

    // terminate
    return 0;
}
