#include <iostream>
#include <string>

using namespace std; // @suppress("Symbol is not resolved")

struct storage{
	int size;
	string type;
	string brand;


};
struct desktop {

	string cpu ;
	string graphicsCard;
	string cpuCooler;
	string desktopCase;
	int memorySize;
	storage ssd;
	int powerSupply;

};

void printInfo(const storage&);
void printInfo(const desktop&);
storage createStorage();
desktop createDesktop();


int main() {

	desktop myDesktop = {
		"Intel I5-7400", "Nvidia GTX 1660ti",
		"air cooled",
		"Cooler Master MasterBox",
		16,
		{1000,  "SATA","Hyper X"},
		650

	};
	printInfo(myDesktop);
	desktop dreamDesktop = createDesktop();
	printInfo(dreamDesktop);
	return 0;
}

void printInfo(const storage& theStorage){
	cout << "With " << theStorage.size << "gb ssd";
	cout << "which is a " << theStorage.type << " from ";
	cout <<  theStorage.brand << endl;
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
	cout << "What brand of ssd?";
	getline(cin,theStorage.brand );
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
