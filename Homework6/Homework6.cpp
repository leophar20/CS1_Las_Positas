#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std; // @suppress("Symbol is not resolved")
bool isValid(string);
string getAnswer (string, string);



int main()
{
	const int ARRAY_SIZE = 11;
	int QUESTION_SIZE = 5;
	string answer[5];
	string result;
	string question[5] = {
	"1. Are you interested on new anime?(2015+)",
	"2. Are you shounen type of anime watcher?",
	"3. Do you like watching shounen?",
	 "4. Are you able to watch explicit content?",
	 "5. Do you enjoy anime that include food?",
	};
	string anime[ARRAY_SIZE] = {
	"My Hero Academia",
	"Demon Slayer",
	"Food Wars",
	"Toriko",
	"Attack on Titan",
	"Fullmetal Alchemist: Brotherhood",
	"Overflow"
	"Highschool DxD",
	"Tokyo Ghoul",
	"Love is War",
	 "Dr. Stones"
	};


	cout << "Welcome to my anime recommendation system!\n" <<
			"You will be asked a series of 5 questions.\n" <<
			"Your answers will guide my system to recommend a movie for you to watch.\n" << endl <<
			"For the following questions, please only respond with ""yes"" or ""no""!" << endl ;

	for( int i = 0; i < QUESTION_SIZE; i++){
		answer[i] = getAnswer(answer[i], question[i] );

	}

	if(answer[0] == "yes"){

	}

	cout << "Based on your responses, I recommend you watch: \n" << endl;
	cout << setfill('*') << setw(40) << '*' << endl;
	cout << result;
	cout <<  setw(40) << '*' << endl;

}


string getAnswer(string answer , string question){
	do{
		cout  << "\n"<< question << endl;
		cout << "your response: ";
		getline(cin, answer);

	}while (!isValid(answer));
	return  answer;
}

bool isValid(string valid){
	return (valid == "yes") || (valid == "no");
}
