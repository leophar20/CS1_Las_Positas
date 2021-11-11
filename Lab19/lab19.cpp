#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <iomanip>
using namespace std; // @suppress("Symbol is not resolved")

int main()
{
	char choices;
	char getChar;
	const int SIZE = 15;
	char getCharArr[SIZE];
	char getCharArr2[SIZE];
	string getString;
	cout << "which function you wanna try from ctype, cstring and string?" << endl;
	cout << "A. isalnum()\n" << "B. isdigit()\n" << "C. islower()" << endl;
	cout << "D. strcmp()\n" << "E. strcpy()\n" << "F. strcat()" << endl;
	cout << "G. find()\n" << "H. erase()\n" << "I. replace()" << endl;
	cout<< "pick a letter: ";
	cin >> choices;

	switch(choices){
		case 'A':
		{
			cout << "Checking if alphanumerical. What is the character: ";
			cin >> getChar;
			if (isalnum(getChar)){
				cout << "Your character is a alphanumerical "<< endl ;
			}else{
				cout << "Your character is not alphanumerical "<< endl ;
			}
		break;
	}

		case 'B':
		{
			cout << "Checking if its a digit. What is the character: ";
				cin >> getChar;
				if (isdigit(getChar)){
				cout << "Your character is a digit "<< endl ;
				}else{
				cout << "Your character is not a digit "<< endl ;
			}
				break;
		}

		case 'C':
		{
		cout << "Checking if its a lower case. What is the character: ";
		cin >> getChar;
		if (islower(getChar)){
		cout << "Your character is a lowercase "<< endl ;
		}else{
		cout << "Your character is not a lowercase "<< endl ;
			}
		break;
		}

		case 'D':
		{

			cout << "comparing two words !!type a word: ";
			cin.ignore();
			cin.getline(getCharArr, SIZE);
			cout << "type another word:";
			cin.getline(getCharArr2, SIZE);
		if (strcmp (getCharArr, getCharArr2) == 0) {
			cout << "same word";
		 } else cout << "different word";
		break;
		}

		case 'E':
		{
		char copy [SIZE]= "copycat";
		cout << "copying a string to another string !!type a word: ";

		cin.ignore();
		cin.getline(getCharArr, SIZE);
		cout << "The variable copy is initialized as : " << copy << " and your word is: " << getCharArr<< endl;
		cout << "new variable input is:" << strcpy(copy,getCharArr) << endl;
		break;
		}

		case 'F':
		{
			cout << "Appending string together !!type a word: ";
					cin.ignore();
					cin.getline(getCharArr, SIZE);
					cout << "type another word:";
					cin.getline(getCharArr2, SIZE);
					cout << strcat(getCharArr,getCharArr2) << endl;
			break;
		}
		case 'G':
		{

			cout << "look the position of the string!!type a sentence that has the word happy : ";
					cin.ignore();
					getline(cin, getString);
					cout <<"the word happy was located at : " <<getString.find("happy") << endl;
			break;
		}
		case 'H':
		{

			cout << "replacing a char in index position 5 and 3 index remove .type a sentence : ";
					cin.ignore();
					getline(cin, getString);
					cout <<"the word happy was located at : " <<getString.erase(5,3) << endl;
			break;
		}
		case 'I':
		{

			cout << "replacing a char in index position 5 with the word man .type a sentence : ";
					cin.ignore();
					getline(cin, getString);
					cout <<"the word happy was located at : " <<getString.replace(5,3,"man") << endl;
			break;
		}



		default:
		cout << "char does not match!!!  Try again";

		}


	return 0;
}
