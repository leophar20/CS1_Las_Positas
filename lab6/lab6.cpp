#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std; // @suppress("Symbol is not resolved")

int main()
{
	string fullName ;
	int studentNum, income;
	char studentAid;

	cout << "Sign in with your full name and student number!!!\n";
	cout << "Enter your full name: ";
	getline(cin, fullName);
	cout << "Enter your 8 digits student number: ";
	cin >> studentNum;
	cin.ignore();
	cout << "Welcome to the Las Positas College\n"
			<<"Financial Aid Office. You are able to sign successfully :\n"
			<< fullName << " with the student number of: "<< studentNum << endl;
	cout << "Are you applying for financial aid? (Y/N)" << endl;
		cin >> studentAid;
		if (studentAid == 'Y')
		{
			cout << "What is the estimated household income: " << endl;
			cin >> income;
			if (income <= 70000)
					{
				cout << "You are eligible. application submitted" << endl;
					}else
					cout << "You are not eligible. Contact the office for more information." << endl;

		}else
		cout << "Thank you and see you soon!!" << endl;


}
