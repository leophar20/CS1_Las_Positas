#include <cmath>
#include <iostream>

#include <iomanip>

using namespace std; // @suppress("Symbol is not resolved")

void makePizza(string& name ,string& toppings , int cheese = 1 , int slices = 8 );
string wantPizza ;

/*******************************************************************************
 *  Description:
 *      Starting point of the program. Launches a menu-driven program.
 *
 *  Input:
 *      N/A
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

	cout << "Welcome to the Pizza Simulator!" << endl;


	cout << "To start, enter your name: " ;
	getline(cin, name);
	cout << "Great, what kind of toppings do you want?" << endl;
	getline(cin, toppings);
	cout << "Awesome! By default, we add cheese and slice the pizza into 8.\n Are you okay with that?";
	getline(cin,defaultPizza);


	if (defaultPizza == "yes"){
		makePizza(name, toppings);
	} else if(defaultPizza == "no"){
		cout << "Enter 1 if you want cheese, or 0 for no: ";
		cin >> cheese;
		cout << "Are you okay with the default 8 slices? ";
		cin >> defaultSlices;
		if(defaultSlices == "yes"){
			makePizza(name,toppings,cheese,slices);
		}else if(defaultSlices == "no") {
			cout << "Enter the number of slices you want: ";
			cin >> slices;
			makePizza(name,toppings,cheese,slices);
		}
	}
	cout << "Do you want to order another pizza? "<< endl;
	cin.ignore();
	getline(cin,wantPizza);

	do {
		cout << "To start, enter your name: " ;
			getline(cin, name);
			cout << "Great, what kind of toppings do you want?" << endl;
			getline(cin, toppings);
			cout << "Awesome! By default, we add cheese and slice the pizza into 8.\n Are you okay with that?";
			getline(cin,defaultPizza);


			if (defaultPizza == "yes"){
				makePizza(name, toppings);
			} else if(defaultPizza == "no"){
				cout << "Enter 1 if you want cheese, or 0 for no: ";
				cin >> cheese;
				cout << "Are you okay with the default 8 slices? ";
				cin >> defaultSlices;
				if(defaultSlices == "yes"){
					makePizza(name,toppings,cheese,slices);
				}else if(defaultSlices == "no") {
					cout << "Enter the number of slices you want: ";
					cin >> slices;
					makePizza(name,toppings,cheese,slices);
				}
			}
			cout << "Do you want to order another pizza? "<< endl;
			cin.ignore();
			getline(cin,wantPizza);


	}while(wantPizza == "no");


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
 *      n/a
*******************************************************************************/
void makePizza(string& name ,string& toppings , int cheese , int slices  ){
	static int order;
	cout << setfill('*') << setw(40) << '*' << endl;
	cout << "Making a pizza for " << name <<endl;
	if(cheese == 0){
	cout << "Let's see . . . no cheese, got it." << endl;
	}else {
	cout << "Let's see . . . adding cheese now! " << endl ;
	}
	cout << "Next, the toppings. Adding " << toppings << endl;
	cout << "Putting it in the oven . . . and done! " << endl;
	cout << "Now, slicing this into "<< slices  << endl;
	cout << "Order up for :" << name << endl;
	cout  << setw(20) << '*' <<endl;
	order++;
	cout << "Total order so far: "<< order<<endl;
	cout << setw(20) << '*'<< endl;
}





