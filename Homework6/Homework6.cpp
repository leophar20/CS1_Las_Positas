#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std; // @suppress("Symbol is not resolved")
bool isValid(string);
string getAnswer (string, string);
void getResult(string [], string []);



int main()
{
	const int ARRAY_SIZE = 14;
	int QUESTION_SIZE = 5;
	string answer[QUESTION_SIZE];
	string result;
	string question[QUESTION_SIZE] = {
	"1. Are you interested on new anime?(2015+)",
	"2. Are you shounen type of anime watcher?",
	"3. Do you like to put some comedy on your shows?",
	"4. Are you interested to watch anime that has explicit content?",
	"5. Do you enjoy anime that include food?",
	};
	string anime[ARRAY_SIZE] = {
	"My Hero Academia",
	"Demon Slayer",
	"Food Wars",
	"Toriko",
	"Attack on Titan",
	"Fullmetal Alchemist: Brotherhood",
	"Overflow",
	"Highschool DxD",
	"Tokyo Ghoul",
	"Love is War",
	"Dr. Stones",
	"Seven Deadly Sins",
	"Pokemon",
	"Banana Fish"
	};



	cout << "Welcome to my anime recommendation system!\n" <<
			"You will be asked a series of 5 questions.\n" <<
			"Your answers will guide my system to recommend a movie for you to watch.\n" << endl <<
			"For the following questions, please only respond with ""yes"" or ""no""!" << endl ;

	for( int i = 0; i < QUESTION_SIZE; i++){
		answer[i] = getAnswer(answer[i], question[i] );

	}


	cout << "Based on your responses, I recommend you watch: \n" << endl;
	cout << setfill('*') << setw(40) << '*' << endl;
	getResult(answer,anime);
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

void getResult(string answer[], string anime[]){
	 // seed the RNG
	 srand(time(0));
	string result;
	if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "yes")){
		result = anime[2];
		cout << result <<endl ;
	} else if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[11];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "no")){
		string updatedAnimeList [2] = {anime[0], anime[10]};
		result = updatedAnimeList[rand() % 2];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "no")){
		result = anime[1];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "no")){
			result = anime[13];
			cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "no")){
		result = anime[12];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "yes")){
		result = anime[3];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "yes")){
		result = anime[2];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "yes")){
		string updatedAnimeList [2] = {anime[2], anime[3]};
		result = updatedAnimeList[rand() % 2];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "yes")){
		string updatedAnimeList [2] = {anime[2], anime[3]};
		result = updatedAnimeList[rand() % 2];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "no")){
		string updatedAnimeList [2] = {anime[4], anime[5]};
		result = updatedAnimeList[rand() % 2];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "no")){
		result = anime[3];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[7];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "no")){
		result = anime[3];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[7];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[8];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[7];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "yes")){
		result = anime[9];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "yes")){
		result = anime[1];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "yes")){
		string updatedAnimeList [2] = {anime[0], anime[9]};
		result = updatedAnimeList[rand() % 2];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "yes")){
		result = anime[9];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "yes")){
		result = anime[6];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "yes")){
		result = anime[7];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "yes")){
		result = anime[3];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "no")){
		string updatedAnimeList [2] = {anime[4], anime[5]};
		result = updatedAnimeList[rand() % 2];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[1];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[9];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "yes") && (answer[3] == "no") && (answer[4] == "no")){
		result = anime[9];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "yes") && (answer[4] == "no")){
		result = anime[6];
		cout << result <<endl ;
	}else if((answer[0] == "no") && (answer[1] == "yes") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "yes")){
		result = anime[3];
		cout << result <<endl ;
	}else if((answer[0] == "yes") && (answer[1] == "no") && (answer[2] == "no") && (answer[3] == "no") && (answer[4] == "yes")){
		result = anime[2];
		cout << result <<endl ;
	}else cout << "you forgot something" << endl;



}

