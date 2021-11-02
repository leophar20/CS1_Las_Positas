#include <iostream>
using namespace std;

/*******************************************************************************
 *  Global variables
*******************************************************************************/

const int ROW_SIZE = 4;
const int COL_SIZE = 5;

/*******************************************************************************
 *  Function prototypes
*******************************************************************************/

int total(const int[][COL_SIZE]);
double average(const int[][COL_SIZE]);

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Declares and initializes a 2D array.
 *      Displays the total sum and the average value.
 *
 *  Input(s):
 *      N/A
 *
 *  Output:
 *      An integer that signals the exit code to the operating system (OS)
*******************************************************************************/

int main() {
    // TODO: declare and initialize a 2D array
	int twoDeeArr[ROW_SIZE][COL_SIZE] =
	{
			{117, -76, 128,-68,85},
			{105, 34, -79, 54, 105},
			{-85, 151, 133, -50, 173},
			{-38, -20, 185, 173, -49}
	};
    // TODO: display the total sum
	cout << "Total: " <<total(twoDeeArr) << endl;
    // TODO: display the average
	cout << "Average: " <<average(twoDeeArr) << endl;
    // terminate
    return 0;
}
/*******************************************************************************
 *  Description:
 *      calculate the total of each value inside the double array one by one with
 *      the use of loop
 *
 *  Input(s):
 *      array[][]
 *
 *  Output:
 *     an integer which is the value of the calculations
*******************************************************************************/
int total(const int array[][COL_SIZE]){
	int total = 0;
	for (int row = 0; row < ROW_SIZE; row++) {
		for (int col = 0; col < COL_SIZE; col++) {
				total += array[row][col];
		}
	}
	return total;
}
/*******************************************************************************
 *  Description:
 *      uses the total function and calculate the average number of the array
 *
 *  Input(s):
 *      array[][]
 *
 *  Output:
 *     a double which is the value of the calculations of the function total(array); divided by the COL_SIZE and ROW_SIZE.
*******************************************************************************/
double average(const int array[][COL_SIZE]){
	double average	= double (total(array))/ (COL_SIZE * ROW_SIZE);
	return average;
}
