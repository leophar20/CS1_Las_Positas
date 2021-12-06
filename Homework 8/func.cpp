/*
 * func.cpp
 *
 *  Created on: Dec 6, 2021
 *      Author: leoph
 */

#include "func.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;




void printInfo( Car& theCar ,int lot){
	if (theCar.stat == AVAILABLE){
	cout << "Lot " << lot << " contains: " << endl;
	cout << setfill(' ') << setw(8) << "A "<<convert(theCar)<<" " << theCar.year << " " << theCar.makeModel
		 << " in " << theCar.color<< endl;
	cout << setw(8)<<' ' << "Mileage: " << theCar.mileage <<endl;
	cout << setw(8)<<' ' << "Price: $"<< theCar.price << endl;
	}
}

string convert(Car theCar)
{
	switch (theCar.prev)
	{
		case NEW: return "New";
		case USED: return "Used";
		default: return "N/A";
	}
}

Customer createCustomer(vector<Car>& theCar1 , int lot){
 Customer buyer;
 Car car;
 cout << "What is your name: " << endl;
 getline(cin, buyer.name);
 theCar1.at(lot) =  buyer.vehicle ;
 buyer.vehicle.stat = PURCHASED;

 return buyer;
}
