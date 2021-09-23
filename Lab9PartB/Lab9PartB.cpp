#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std; // @suppress("Symbol is not resolved")

int main()
{
	string message;
	cout << "Enter a message: ";
	getline(cin,message);
	while (!((message.length() > 5) && (message.length()  < 10)) )
	{
		cout << "Invalid! Message must have between 5 and 10 characters.\n";
		cout << "Enter a message: ";
		getline(cin,message);
	}
	int counter = 6;
	cout << "Countdown initiating . . .\n";
	while (counter > 0 )
	{
		cout << counter -- << " ";
	}
	cout << "\nBlast off to Planet " << message << "!";


}
