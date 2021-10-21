#include <cmath>
#include <iostream>

#include <iomanip>

using namespace std; // @suppress("Symbol is not resolved")

void makePizza(string& name ,string& toppings , int cheese = 1 , int slices = 8 );


/*******************************************************************************
 *  Description:
 *      Starting point of the program. Launches a menu-driven program.
 *
 *  Input:
 *      all the variables in order to make a pizza.
 *
 *  Output:
 *      An integer representing the exit value to signal back to the OS
*******************************************************************************/

int main(){
	string toppings;
	string name;
	string defaultPizza;
	int cheese;
	int slices;
	string defaultSlices;
	string wantPizza ;


	cout << "Welcome to the Pizza Simulator!" << endl;


	do {
		cout << "To start, enter your name: " ;
			getline(cin, name);
			cout << "Great, what kind of toppings do you want?" << endl;
			getline(cin, toppings);
			cout << "Awesome! By default, we add cheese and slice the pizza into 8.\nAre you okay with that?";
			getline(cin,defaultPizza);


			if (defaultPizza == "yes"){ // statement if the pizza is cheese up and cut in 8.
				makePizza(name, toppings);
			} else if(defaultPizza == "no"){ // statement if not ask if cheese? and if it slice in 8?
				cout << "Enter 1 if you want cheese, or 0 for no: ";
				cin >> cheese;
				cout << "Are you okay with the default 8 slices? ";
				cin >> defaultSlices;
				if(defaultSlices == "yes"){ // statement if it cuts on 8

					makePizza(name,toppings,cheese);

				}else if(defaultSlices == "no") { // if not asked for number of slices
					cout << "Enter the number of slices you want: ";
					cin >> slices;
					makePizza(name,toppings,cheese,slices);

				}

			getline(cin,wantPizza); // loop for having another pizza.
			}
			cout << "\n\nDo you want to order another pizza? "<< endl;
			getline(cin,wantPizza);


	}while(wantPizza != "no");
	cout << "Good bye! Thanks for playing my Pizza Simulator!" <<endl; // bye greetings after saying "no"

	return 0;
}



/*******************************************************************************
 *  Description:
 *      create an order of the pizza.
 *
 *  Input:
 *      string name ,string toppings , string cheese, int slices
 *
 *  Output:
 *      make the pizza and count how many order already been made.
*******************************************************************************/
void makePizza(string& name ,string& toppings , int cheese , int slices  ){
	static int order;
	cout << "\n\n"<< setfill('*') << setw(40) << '*' << endl;
	cout << "Making a pizza for " << name <<endl;
	if(cheese == 0){ //if statement for cheese or no cheese.
	cout << "Let's see . . . no cheese, got it." << endl;
	}else {
	cout << "Let's see . . . adding cheese now! " << endl ;
	}
	if(toppings == ""){ // if statement if the user did not put any toppings.
	cout << "Next, the toppings. Actually, scratch that, no toppings at all? Okay. "<< endl;
	}else {
	cout << "Next, the toppings. Adding " << toppings << endl;
	}
	cout << "Putting it in the oven . . . and done! " << endl;
	cout << "Now, slicing this into "<< slices  << endl;
	cout << "Order up for " << name << endl;
	cout  << setw(40) << '*' <<endl;
	order++; // adding one every order
	cout << "Total order so far: "<< order<<endl;
	cout << setw(40) << '*'<< endl;
}






