#include <string>
using namespace std;

/*******************************************************************************
 *  ADTs
*******************************************************************************/

enum manufacturer{
	SAMSUNG, CORSAIR, SANDISK, WESTERNDIGITAL, LEXAR, KINGSTON, GENERIC
};

struct storage{
	int size;
	string type;
	manufacturer brand;


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


