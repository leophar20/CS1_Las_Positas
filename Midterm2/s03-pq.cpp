#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*******************************************************************************
*   Function prototypes
*******************************************************************************/

void augment(vector<double>& numbers, int index);
void calc(double& result, double x, double y = 1.5);

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Creates and initializes a vector.
 *      Augments the vector and calculates a final result.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // seed the RNG
    srand(time(0));

    // TODO: declare the vector of size 6
    vector<double> vec(6);
    // TODO: range-based `for` loop to initialize the vector
    for (unsigned i = 0 ; i < vec.size(); i++) {
        	cout << "Give me a number: ";
            cin >> vec.at(i) ;

    }
    // TODO: loop to call the `augment` function on each element
    for (unsigned i = 0 ; i < vec.size(); i++) {
           	augment(vec, i);
    }


    // variables
    double res = 0.0;
    string userYes;
   double x  =  vec.at( rand() % vec.size()); // random index generator
    // determine if the user wants to enter a y-value
    cout << "Do you want to enter a y-value? ";
    cin.ignore();
    getline(cin, userYes);

    // branch and call the `calc` function
    if (userYes == "yes" || userYes == "Yes") {
        // TODO: call the `calc` function with user's y-value
    	double y;
    	cout << "what is your y? ";
    	cin >> y;
    	calc(res, x , y);
    }
    else {
        // TODO: call the `calc` function with default y-value
    	calc(res, x );
    }

    // display the result
    cout << "result: " << res << endl;

    // terminate
    return 0;
}


/*******************************************************************************
 *  Description:
 *      update the element  index in the vector by multiplying it by
 *      the variable alpha. alpha also updating the value by multiply by 5.2
 *      and divided by the size of the vector.
 *
 *  Input(s):
 *     <double> vector and int index.
 *
 *  Output:
 *      N/A
*******************************************************************************/
void augment(vector<double>& numbers, int index){
	static double alpha = 3.27;
	numbers.at(index)= numbers.at(index) * alpha;
	alpha = (alpha*5.2)/ numbers.size();
}


/*******************************************************************************
 *  Description:
 *     calculate the function. which is variable x * y divided by 3 plus
 *     cos  of y
 *
 *  Input(s):
 *     double result, x , and y
 *
 *  Output:
 *      result  variable
*******************************************************************************/
void calc(double& result, double x, double y ){
	result = ((x*y) / 3) + cos(y);
}
