/*
 * lab24.cpp
 *
 *  Created on: Dec 2, 2021
 *      Author: leoph
 */
#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>

using namespace std; // @suppress("Symbol is not resolved")



int main() {

	fstream myFile;
	int userNum = 1;
	bool moreSur = false;
	string email;
	string phoneNum;
	string getAnswer;
	string canSing;
	string canDance;
	int numOfFol;
	myFile.open("answer.txt", ios::out);
	cout << "Welcome to my survey!" <<endl;
	cout << "I will be asking you a series of 5 questions!" <<endl;
	cout << "Your responses will be saved for future reference." <<endl;


	do{
	cout << setfill('+') << setw(40) << "" << endl;
	cout << "Now starting survey for user #" << userNum  <<endl;
	userNum++;
	cout << "what is your email address?" << endl;
	getline(cin, email);
	myFile << "\nEmail address: " << email << endl;
	cout << "what is your phone number?" << endl;
	getline(cin, phoneNum);
	myFile << "\nPhone Number: " << phoneNum << endl;
	cout << "Can you sing?" << endl;
	getline(cin, canSing);
	myFile << "\nCan sing? " << canSing <<endl;
	cout << "Can you Dance?" << endl;
	getline(cin, canDance);
	myFile << "\nCan Dance? " << canDance <<endl;
	cout << "How many social media followers you have: " << endl;
	cin >> numOfFol;
	myFile << "\nNumber of social media followers:" <<numOfFol <<endl;

	cin.ignore();
	cout << "would someone else like to take this survey(y/n)?" <<endl;
	getline(cin, getAnswer);

	if(getAnswer == "n" || getAnswer == "N"){
		moreSur = true;
	}else if (getAnswer == "Y" || getAnswer == "y")
	(moreSur = false);
	}while (moreSur == false);
	cout  << setw(40) << "" << endl;
	cout << "Good bye!" << endl;

	myFile.close();
	return 0 ;
}
