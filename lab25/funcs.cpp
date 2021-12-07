#include "funcs.hpp"
#include <iomanip>
#include <iostream>
#include <string>

/*******************************************************************************
 *  Description:
 *      Reads in the data from an input file chosen by the user. Displays that
 *      data onto the screen.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      N/A
*******************************************************************************/

void loadFile() {
    // variables
    fstream inputFile;
    string filename, line;

    // prompt and store the filename
    cout << "Enter the filename with extension that you want to load:\n";
    cin.ignore();
    getline(cin, filename);

    // TODO: try opening the file
    inputFile.open(filename, ios::in);
    // TODO: display the data in the file

    while( !inputFile.eof() ){
    	if(inputFile.fail()){
    		cout << "error file" << endl;
    		cin.ignore(4096, '\n');
    	}else{

	   getline(inputFile,line);
	   cout << line << endl;

    	}
	    }


    // TODO: close the file
    inputFile.close();
}

/*******************************************************************************
 *  Description:
 *      Writes data to an output file chosen by the user. Asks the user which
 *      mode to use (output or append). Calls the `survey` function to gather
 *      the data.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      N/A
*******************************************************************************/

void saveFile() {
    // variables
    fstream outputFile;
    string filename;
    int mode = -1;

    // prompt and store the filename
    cout << "Enter the filename with extension that you want to load:\n";
    cin.ignore();
    getline(cin, filename);

    // prompt and store for output or append mode
    while (mode != 0 && mode != 1) {
        cout << "Enter 0 for output (overwrite) mode or 1 for append mode:\n";
        cin >> mode;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(4096, '\n');
            mode = -1;
        }
    }

    // TODO: try opening the file in the desired mode
    outputFile.open(filename, ios::out);
    // TODO: start the survey
    survey(outputFile);

    // TODO: close the file
    outputFile.close();
}

/*******************************************************************************
 *  Description:
 *      Asks the current user a total of 5 survey questions. Saves the responses
 *      to `outputFile`. Loops the survey so multiple users can take the survey
 *      in one sitting.
 *
 *  Input(s):
 *      outputFile - a reference to a file stream object
 *                  (assumed to be opened and valid)
 *
 *  Output:
 *      N/A
*******************************************************************************/

void survey(fstream& outputFile) {
    // TODO: use your survey code from lab 24, making necessary adjustments

		int userNum = 1;
		bool moreSur = false;
		string email;
		string phoneNum;
		string getAnswer;
		string canSing;
		string canDance;
		int numOfFol;

		cout << "Welcome to my survey!" <<endl;
		cout << "I will be asking you a series of 5 questions!" <<endl;
		cout << "Your responses will be saved for future reference." <<endl;

		cin.ignore();
		do{
		cout << setfill('+') << setw(40) << "" << endl;
		cout << "Now starting survey for user #" << userNum  <<endl;
		userNum++;
		cout << "what is your email address?" << endl;
		getline(cin, email);
		outputFile << "\nEmail address: " << email << endl;
		cout << "what is your phone number?" << endl;
		getline(cin, phoneNum);
		outputFile << "\nPhone Number: " << phoneNum << endl;
		cout << "Can you sing?" << endl;
		getline(cin, canSing);
		outputFile << "\nCan sing? " << canSing <<endl;
		cout << "Can you Dance?" << endl;
		getline(cin, canDance);
		outputFile << "\nCan Dance? " << canDance <<endl;
		cout << "How many social media followers you have: " << endl;
		cin >> numOfFol;
		outputFile << "\nNumber of social media followers:" <<numOfFol <<endl;

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


}
