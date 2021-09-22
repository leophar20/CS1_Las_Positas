#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std; // @suppress("Symbol is not resolved")

int main()
{

// setting the number variables and initialized.

int num1,num2=0;


// entering number and getting their input.
cout << "Enter two numbers!!\n";
cout << "Give me a first number: "; // asking for the first number
cin >> num1;
cout << "Give me a second number: ";// asking for second number
cin >> num2;

bool flag = false; // setting the variable and initializing the flag to false


	if (num1 > 0 ) // if statement for the num1 is greater than 0
	{
		if (num2 <=0) // if num2 is is less than or equal zero make it as flag true
		{
			flag = true;//setting the flag to true.
		}

	} else if ( num1 == -5) // else if the input in first number is -5 . go to the second statement
	{
		if(num2 > 0) // if the second number is bigger than 0. set flag to true.
		{
			flag = true; //setting the flag to true.
		}
	}

	// if statement for the flag
	if (flag)
	{
		cout << "Complex condition met.\n"; // if the flag is true. the condition is met
	} else
	{
		cout << " End "; // if the flag is false
	}





}
