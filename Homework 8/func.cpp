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

Customer createCustomer(vector<Car>& buyer1 , int lot){
 Customer buyer;
	cout << "What is your name: " << endl;


	getline(cin, buyer.name);
   buyer.vehicle.color =buyer1.at(lot).color ;
buyer.vehicle.makeModel = buyer1.at(lot).makeModel ;
   buyer.vehicle.mileage =buyer1.at(lot).mileage;
  buyer.vehicle.price = buyer1.at(lot).price ;
   buyer.vehicle.year = buyer1.at(lot).year;
  buyer.vehicle.prev = buyer1.at(lot).prev;
 buyer.vehicle.stat = PURCHASED;
   buyer1.at(lot) =buyer.vehicle;

 return buyer;
}
bool checker (vector<Car>& theCar){

	if (theCar.at(0).stat == PURCHASED && theCar.at(1).stat == PURCHASED && theCar.at(2).stat == PURCHASED&& theCar.at(3).stat == PURCHASED ){
		 return true;
	}else return false ;


}

void printLastInfo (vector<Customer>& theCustomer){

	cout << "\nThe dealership is now closed!" << endl;
	cout << "\nHere is a list of today's customers and their purchase: " << endl;
	for (int i =0 ; 4 > i; i++){
	Customer buyer = theCustomer.at(i);
	cout << setw(8) << ' ' << buyer.name << " purchased a " << buyer.vehicle.year <<" "<<buyer.vehicle.makeModel << " for $" << buyer.vehicle.price << endl;


		}
}
