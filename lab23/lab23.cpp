#include "funcs.hpp"
#include <iostream>





int main() {

	desktop myDesktop = {
		"Intel I5-7400", "Nvidia GTX 1660ti",
		"air cooled",
		"Cooler Master MasterBox",
		16,
		{1000,  "SATA", SAMSUNG},
		650
	};
	//the two new function is inside the printInfo function
	printInfo(myDesktop);
	desktop dreamDesktop = createDesktop();
	printInfo(dreamDesktop);




	return 0;
}


