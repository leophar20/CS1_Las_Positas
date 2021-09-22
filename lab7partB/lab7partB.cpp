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

/* if statement for the num1 is greater than 0 and num2 is less than or equal than 0 set the flag to true.
or if the num1 is equal to -5 and num2 is greater than 0 set the flag to true*/
	if (((num1 > 0 ) && (num2 <=0)) || (( num1 == -5) && (num2 > 0)))
	{
		flag = true;
	}

	if (flag)
	{
		cout << "Complex condition met.\n"; // if the flag is true. the condition is met
	} else
	{
		cout << " End "; // if the flag is false
	}





}
