#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std; // @suppress("Symbol is not resolved")

// function prototypes intialize
bool isValid(string);
string getAnswer (string, string);
void getResult(string [], string []);



int main()
{
	const int ARRAY_SIZE = 14; // the size of array for animes
	int QUESTION_SIZE = 5; // the size of array for questions
	string answer[QUESTION_SIZE]; // initialized
	string result;
	string question[QUESTION_SIZE] = { // questions arrays
	"1. Are you interested on new anime?(2015+)",
	"2. Are you shounen type of anime watcher?",
	"3. Do you like to put some comedy on your shows?",
	"4. Are you interested to watch anime that has explicit content?",
	"5. Do you enjoy anime that include food?",
	};
	string anime[ARRAY_SIZE] = { // anime recommendations array
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


	// starting string statements,
	cout << "Welcome to my anime recommendation system!\n" <<
			"You will be asked a series of 5 questions.\n" <<
			"Your answers will guide my system to recommend a movie for you to watch.\n" << endl <<
			"For the following questions, please only respond with ""yes"" or ""no""!" << endl ;

	// loop for getting the answers and asking the question from questions array.
	for( int i = 0; i < QUESTION_SIZE; i++){
		answer[i] = getAnswer(answer[i], question[i] );
	}
	cout << "Based on your responses, I recommend you watch: \n" << endl;
	cout << setfill('*') << setw(40) << '*' << endl;
	getResult(answer,anime); // passed the answer to the 5 questions and the anime array
	cout <<  setw(40) << '*' << endl;

}
/*******************************************************************************
 *  string getAnswer (string, string);
 *  Description:
 * 	A loop function that will keep asking the questions and get the answer all the time
 * 	until the user met the condition valid.
 *
 *  Input:
 *      string answer , string question
 *
 *  Output:
 * 	based on the user choices of either  "yes" or "no".
*******************************************************************************/

string getAnswer(string answer , string question){
	do{
		cout  << "\n"<< question << endl;
		cout << "your response: ";
		getline(cin, answer);

	}while (!isValid(answer));
	return  answer;
}
/*******************************************************************************
 * bool isValid(string);
 *  Description:
 * Helper fucntion that will validated the input if it the answer is met the conditions
 *
 *  Input:
 *      string valid
 *
 *  Output:
 * 	true or false
*******************************************************************************/
bool isValid(string valid){
	return (valid == "yes") || (valid == "no");
}
/*******************************************************************************
 * void getResult(string [], string []);
 *Description:
 *  This function have the conditions that filtered the anime
 *  recommendations.It will ask the string array set that has the answer of the
 *  user and put each string in each conditions. since there is 2 ways of answer and
 *  5 questions there is approximately 32 conditions.
 *
 *  Input:
 *      string array answer, string array anime
 *
 *  Output:
 * 	result, which is the anime recommendation.
*******************************************************************************/
void getResult(string answer[], string anime[]){
	 // seed the RNG
	 srand(time(0));
	string result; // the variable that includes the anime that should be recommended
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
	}else cout << "No recommendations found, Try again!!!" << endl;



}

