/*
 * ADT.hpp
 *
 *  Created on: Dec 6, 2021
 *      Author: leoph
 */

#include <string>
using namespace std;


enum Previous { USED, NEW};

enum Status { AVAILABLE, PURCHASED};

struct Car {

	string makeModel;
	string color;
	int year;
	int mileage;
	double price;
	Previous prev;
	Status stat;
};

struct Customer {
	string name;
	Car vehicle;
};
