#include <cmath>
#include <iostream>

using namespace std;

/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

int getUserNumber();
bool isValid(int);
void calculate(int, int, int, int&);

/*******************************************************************************
 *  int main()
 *      Starting point of the program. Gets three valid numbers from the user.
 *      Calculates and displays the result.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main()
{
    // TODO: get the first valid number
		int a = getUserNumber();
		while (isValid(a) == false){
		a=getUserNumber();
		}
    // TODO: get the second valid number
		int b = getUserNumber();
		while (isValid(b) == false){
		b=getUserNumber();
		}
    // TODO: get the third valid number
		int c = getUserNumber();
		while (isValid(c) == false){
		c=getUserNumber();
		}

    // TODO: calculate the result by calling the function
    int result;
    calculate(a,b,c, result);
    // TODO: display the result
    cout << result ;
    // terminate
    return 0;
}

/*******************************************************************************
 * <TODO>
 * int getUserNumber()
 *   ask for user's number
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      a cout that asked "enter a number" and a the usernumber.
*******************************************************************************/

int getUserNumber()
{
    // TODO
	int userNum;
	cout << "Enter A number: ";
	cin >> userNum;

	return userNum;
}

/*******************************************************************************
 * <TODO>
 * bool isValid
 *      Check if the input met the conditions, validating the input.
 *
 *  Input(s):
 *      integer number
 *
 *  Output:
 *     	boolean true or false
*******************************************************************************/

bool isValid(int num)
{
    // TODO
	return (num >= 29 ) || ((num/2) + 3 <= 11);

}

/*******************************************************************************
 * <TODO>
 * void calculate()
 *      calculate the function with the given calculations
 *
 *  Input(s):
 *      int a, int b, int c, int& result
 *
 *  Output:
 *       result of the void.
*******************************************************************************/

void calculate(int a, int b, int c, int& result)
{
    // TODO
	 result = (4*a) + pow(b, 3) - (2 * c) + 1 ;

}
