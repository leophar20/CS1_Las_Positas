#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    // seed the random number generator
    srand(time(0));

    // declare and initialize a variable for `setw`
    const int WIDTH = 8;

    // TODO: declare and initialize 3 `int` variables to random values
    // in the range 25 to 340 (inclusive)
    int randomNum = (25 + rand() % (340 - 25 + 1 )), randomNum2 =(25 + rand() % (340 - 25 + 1 )) , randomNum3 =(25 + rand() % (340 - 25 + 1 ));
    // TODO: manipulate the output stream to make it aligned to the left,
    // have precision of 3, and fixed
   	  cout << left << setprecision(3) << fixed;
    // TODO: display their values
     cout << setw(WIDTH) << randomNum<< setw(WIDTH) << randomNum2 << setw(WIDTH) << randomNum3 << setw(WIDTH) << endl;
    // TODO: display the sine of each variable
     cout << setw(WIDTH) <<sin(randomNum)<< setw(WIDTH) << sin(randomNum2) << setw(WIDTH) << sin(randomNum3) << setw(WIDTH)<< endl;
    // TODO: display the cosine of each variable
     cout << setw(WIDTH) <<cos(randomNum)<< setw(WIDTH) << cos(randomNum2) << setw(WIDTH) << cos(randomNum3) << setw(WIDTH)<< endl;
    // TODO: display the square root of each variable
     cout << setw(WIDTH) <<sqrt(randomNum)<< setw(WIDTH) << sqrt(randomNum2) << setw(WIDTH) << sqrt(randomNum3) << setw(WIDTH)<< endl;
    // TODO: display the log of each variable
     cout << setw(WIDTH) <<log(randomNum)<< setw(WIDTH) << log(randomNum2) << setw(WIDTH) << log(randomNum3) << setw(WIDTH)<< endl;
    // terminate
    return 0;
}
