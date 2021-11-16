#include <iostream>
#include <string>
#include <iomanip>
using namespace std; // @suppress("Symbol is not resolved")

struct desktop {

	string cpu ;
	string graphicsCard;
	string cpuCooler;
	string desktopCase;
	int memorySize;
	int ssdSize;
	int powerSupply;

};
int main() {

	desktop myDesktop = {
		"Intel I5-7400", "Nvidia GTX 1660ti",
		"air cooled", "Cooler Master MasterBox",
		16, 1000, 650

	};
	desktop dreamDesktop;

	cout << "Here is the specs of my current desktop right now:" << endl;
	cout << "My processor is : " << myDesktop.cpu << endl ;
	cout << "My graphics card is: " << myDesktop.graphicsCard << endl ;
	cout << "My cpu cooler is: " << myDesktop.cpuCooler << endl ;
	cout << "My desktopCase is: " << myDesktop.desktopCase << endl ;
	cout << "My ram/memory has: " << myDesktop.memorySize << " gb" << endl ;
	cout << "with " << myDesktop.ssdSize << "gb storage"<< endl ;
	cout << "and " << myDesktop.powerSupply << "watts power supply" << endl ;

	cout << "\n\nWhat is your dream desktop setup"<< endl;
	cout << "What cpu would you like to put Intel or AMD?";
	getline(cin,dreamDesktop.cpu );
	cout << "How about the grapics card ?(AMD Radeon or Nvidia RTX)";
	getline(cin,dreamDesktop.graphicsCard );
	cout << "For cooling the cpu (watercooled or air cooled)";
	getline(cin,dreamDesktop.cpuCooler );
	cout << "How about the case? from what manufacture ?";
	getline(cin,dreamDesktop.desktopCase );
	cout << "How many gb ram is enought for your built?";
	cin >> dreamDesktop.memorySize ;
	cout << "How about ssd. How much gb you would like?";
	cin >> dreamDesktop.ssdSize ;
	cout << "How much watts you need to power up your desktop?";
	cin >> dreamDesktop.powerSupply ;

	cout << "\n\nOrdering the parts on Amazon for new build!!!!";
	cout << "Ordering processor: " << myDesktop.cpu << endl ;
	cout << "Ordering graphics card: " << myDesktop.graphicsCard << endl ;
	cout << "Ordering cpu cooler: " << myDesktop.cpuCooler << endl ;
	cout << "Ordering desktopCase: " << myDesktop.desktopCase << endl ;
	cout << "Ordering that ram/memory has: " << myDesktop.memorySize << " gb" << endl ;
	cout << "with " << myDesktop.ssdSize << " gb storage"<< endl ;
	cout << "and " << myDesktop.powerSupply << " watts power supply" << endl ;



}
