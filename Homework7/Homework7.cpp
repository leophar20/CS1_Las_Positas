#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
using namespace std; // @suppress("Symbol is not resolved")
bool verify(char pwd[], const int SIZE, unsigned& score);




int main()
{
	unsigned score = 0;
	const int ARRAY_SIZE = 30;
	char password [ARRAY_SIZE];
	const int SIZE = 12;
	cout << setfill('*') << setw(60) << '*' << endl;
	cout << "Welcome to my password verifier and strength score program!\n" <<
			"Your password must meet all of the following conditions:\n" ;
	cout <<	setfill(' ') << setw(10) << ' ' << "1. Contain at least twelve characters\n"
			<< setw(10) << ' ' << "2. Contain at least one lowercase letter\n"
			<< setw(10) << ' ' << "3. Contain at least one uppercase letter\n"
			<< setw(10) << ' ' << "4. Contain at least one digit\n"
			<< setw(10) << ' ' << "5. Contain at least one punctuation mark\n"
			<< setw(10) << ' ' << "6. Cannot contain any whitespace\n";
	cout << setfill('*') << setw(60) << '*' << endl <<endl;


	do{
	cout << "\nEnter your password: ";
	cin.getline(password, ARRAY_SIZE);
	if (verify(password, SIZE, score)){
		break;
	}else
	cout << "The password is not valid, try again!";
	}while (!verify(password, SIZE, score));

	cout << "You entered a valid password!\n" <<"Password strength: "  << score;
	return 0 ;
}



bool verify(char pwd[], const int SIZE, unsigned& score){
	bool hasUpper, hasLower , hasDigit , hasPunct = false;

	if (strlen(pwd) <= SIZE){

		return false;
	}
	//score = strlen(pwd);
	for (int i = 0 ; pwd[i] != '\0'; ++i){
		char x = pwd[i];

		if (isupper(x)){
			hasUpper = true;
			score++;
		}if (islower(x)){
			hasLower = true;
			score++;
		}if (isdigit(x)){
			hasDigit = true;
			score++;
		}if (ispunct(x)){
			hasPunct = true ;
			score++;
		}


	}

	if (!hasUpper || !hasLower || !hasDigit || !hasPunct){
		return false;
	} else
		return true;
}
