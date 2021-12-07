#include "funcs.hpp"
#include <iostream>

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Displays a menu with 3 options. Lets the
 *      user save or load survey responses.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // variables
    int userChoice = 0;

    // menu loop
    do {
        // display menu
        cout << "1. Save new survey responses\n";
        cout << "2. Load old survey responses\n";
        cout << "3. Exit\n";

        // prompt and store, checking for bad input
        while (true) {
            cout << "Enter your choice: ";
            cin >> userChoice;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(4096, '\n');
            }
            else {
                break;
            }
        }

        // branch
        if (userChoice == 1) {
            saveFile();
        }
        else if (userChoice == 2) {
            loadFile();
        }
        else if (userChoice != 3) {
            cout << "Invalid choice!\n";
        }
    } while (userChoice != 3);

    // terminate
    return 0;
}
