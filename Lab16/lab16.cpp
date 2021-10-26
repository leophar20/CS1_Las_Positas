#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

void printParallel(double[], string[], const int);

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Creates two arrays. Uses loops to let
 *      the user populate the arrays. Calls function print out the arrays in
 *      parallel.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // declare first array
    const int SIZE = 5;
    double firstArray[SIZE];

    // TODO: range-based `for` loop to get user input for `firstArray`
     for (double& element : firstArray){
    	 cout << "Enter a floating-point number: ";
    	 cin >> element;
     }

    // declare second array
    string secondArray[SIZE];

    // TODO: regular `for` loop to get user input for `secondArray`
    cin.ignore();
    for (string& element : secondArray){
       	 cout << "Enter a name: ";
       	 getline(cin, element);
        }
    // TODO: call the `printParallel` function
     printParallel(firstArray,secondArray,SIZE);
    // terminate
    return 0;
}
void printParallel(double firstArray[] , string secondArray[] , const int size){
	for(int i = 0; i < size ; i++  ){
		cout << firstArray[i] << "  "<< secondArray[i] << endl;
	}

}

