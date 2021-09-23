/*
 * homework4.cpp
 *
 *  Created on: Sep 23, 2021
 *      Author: Raphael
 */
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std; // @suppress("Symbol is not resolved")

int main() {

	 // display the menu options
	    const char FILL  = '#';
	    const int  WIDTH = 40;
	    cout << setfill(FILL) << setw(WIDTH) << "" << endl;
	    cout << "You enter a cave and see 3 tunnels up ahead.\nWhich route do you take?\n";
	    cout <<  setw(8)<<" " << "A. Door\n";
	    cout << setw(8) <<" "<< "B. Animal\n";
	    cout <<  setw(8) <<" " << "C. Super Easy Tunnel\n";
	    cout << setfill(FILL) << setw(WIDTH) << "#" << endl;


	return 0;
}




