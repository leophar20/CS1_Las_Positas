/*
 * lab24.cpp
 *
 *  Created on: Dec 6, 2021
 *      Author: leoph
 */

#include "func.hpp"
#include <iostream>
#include <iomanip>
#include <vector>


int main() {
	int index=4;
	vector <Car> vehicle {
	{"Honda Civic", "Yellow", 2020, 10, 19452.23, NEW, AVAILABLE  },
	{"Toyota Rav4", "Silver", 2021, 6, 27265.99, NEW, AVAILABLE },
	{"Tesla Model 3", "Hot Pink", 2017, 16450, 30450.00, USED, AVAILABLE },
	{"Chevrolet Equinox", "Navy Blue", 2006, 241056, 2315.71, USED, AVAILABLE }
	};
	vector<Customer> buyer(index);

	int choice = 0;


	do{// loop for keep asking for choice until the choice is 0
	cout << "Welcome to my car dealership! Here is my current inventory:" <<endl;
	for (int i = 0 ;  index > i ; i ++){// loop for printing all the car available in the lot

		printInfo(vehicle.at(i), i+1);
	}

	cout << "\nIf you want to purchase a car, enter their lot number. \n"
		 <<"Or, enter 0 if you wish to leave my dealership. \n"
		 << "Your Choice: ";
	cin >> choice;

	cin.ignore();

	if (choice == 0){// break the point if the answer is 0
	cout << "\nOkay, sorry we didn't have a good car for you :("<< endl;
	break;
	}else if (choice>4 || choice <0 ){// if the choice is not in range continue the loop
		continue;
	}else
	{

	if(buyer.at(choice-1).vehicle.stat == AVAILABLE){// statement for making sure the stats of the vehicle is available
	 buyer.at(choice-1) = createCustomer(vehicle,choice-1);// if it is availale it will create a customer and update the vehicle stat to purchased
	 cout << "\nThanks for your purchase, I hope you enjoy your car!"<< endl;

	 if (checker(vehicle) == true){ // check if all the vehicle is sold.
		 printLastInfo( buyer);// if all is sold print the last info and summary.
		 break;
	 }else{
		 continue;
	 	 	 }
		}
	}
	}while (choice != 0 || choice >4 );


	return 0;

}
