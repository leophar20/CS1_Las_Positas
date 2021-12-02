#include "funcs.hpp"
#include <iostream>
using namespace std;




string convert(manufacturer theManufacturer)
{
	switch (theManufacturer)
	{
		case SAMSUNG: return "SAMSUNG";
		case CORSAIR: return "CORSAIR";
		case SANDISK: return "SANDISK";
		case WESTERNDIGITAL: return "WESTERNDIGITAL";
		case LEXAR: return "LEXAR";
		case KINGSTON: return "KINGSTON";
		default: return "GENERIC";
	}
}

manufacturer createManufacturer(string name){
	if (name == "samsung") return SAMSUNG;
		else if (name == "corsair") return CORSAIR;
		else if (name == "sandisk") return SANDISK;
		else if (name == "westerndigital") return WESTERNDIGITAL;
		else if (name == "lexar") return LEXAR;
		else if (name == "kingston") return KINGSTON;
		else return GENERIC;
}

void printInfo(const storage& theStorage){
	string brand1 = convert (theStorage.brand);
	cout << "With " << theStorage.size << "gb ssd";
	cout << "which is a " << theStorage.type << " from ";
	cout <<  brand1 << endl;
}

void printInfo(const desktop& theDesktop){
	cout << "Here is the specs of my current desktop right now:" << endl;
	cout << "My processor is : " << theDesktop.cpu << endl ;
	cout << "My graphics card is: " << theDesktop.graphicsCard << endl ;
	cout << "My cpu cooler is: " << theDesktop.cpuCooler << endl ;
	cout << "My desktopCase is: " << theDesktop.desktopCase << endl ;
	cout << "My ram/memory has: " << theDesktop.memorySize << " gb" << endl ;
	printInfo(theDesktop.ssd);
	cout << " and " << theDesktop.powerSupply << " watts power supply" << endl ;
}
storage createStorage(){
	storage theStorage;
	cout << "How about ssd. What size do you like?";
	cin >> theStorage.size ;
	cin.ignore();
	cout << "What type of ssd?";
	getline(cin,theStorage.type );
	cout << "What brand of ssd?" << endl;
	cout << "here are the manufacturer choices";
	for (manufacturer c = SAMSUNG; c <= GENERIC; c = manufacturer(c + 1)) {
			cout << convert(c) << ' ' << endl;
		}
	cout << "\nWhat is the manufacturer you want ";
		string tempStr;
		getline(cin, tempStr);
		manufacturer brand = createManufacturer(tempStr);
		theStorage.brand = brand;
	return theStorage;
}
desktop createDesktop(){
	desktop theDesktop;

	cout << "\n\nWhat is your dream desktop setup"<< endl;
	cout << "What cpu would you like to put Intel or AMD?";
	getline(cin,theDesktop.cpu );
	cout << "How about the grapics card ?(AMD Radeon or Nvidia RTX)";
	getline(cin,theDesktop.graphicsCard );
	cout << "For cooling the cpu (watercooled or air cooled)";
	getline(cin,theDesktop.cpuCooler );
	cout << "How about the case? from what manufacture ?";
	getline(cin,theDesktop.desktopCase );
	cout << "How many gb ram is enought for your built?";
	cin >> theDesktop.memorySize ;
	theDesktop.ssd = createStorage();
	cout << "How much watts you need to power up your desktop?";
	cin >> theDesktop.powerSupply ;

	cout << "\n\nOrdering the parts on Amazon for new build!!!!";
	return theDesktop;

}
