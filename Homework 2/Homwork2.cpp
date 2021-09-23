#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Declare and Initialized Variable for the name
	string name = "Ruiz Jinaro" ;
	//Print the statement
	cout << "********************************************************** \n"
		 <<"* \t" << " Volunteer Report for " <<name << "\t     * \n"
		 << "********************************************************** \n";

	// Declare and Initialized Variable for the hours and rates
	const double unitsRateHourly= 0.25;
	double volunteeredHours = 9.5, unitEarned = unitsRateHourly * volunteeredHours ;

	// Print the statement
	cout << "\nShe volunteered a total of " << volunteeredHours << " hours this week.\n"
		 << "Her class uses the rate " << unitsRateHourly << " per volunteer hour.\n"
		 << "This week, she earned " << unitEarned << " units for volunteering. \n" ;

	// Declare and Initialized Variable for the units and leftover units
	const double totalUnits = 10;
	double leftoverUnits = totalUnits- unitEarned , leftoverHours = leftoverUnits/unitsRateHourly;

	// Print the statement
	cout << "\nHer class requires a total of " << totalUnits << " units for the semester.\n"
		 << "After this week, she only needs " << leftoverUnits << " units to finish her goal.\n";

	cout << "\nThis calculates to " << leftoverHours << " volunteer hours remaining this semester.\n";

	 // Declare and Initialize job pay
	const double jobPay = 15.38;
	double totalPay = volunteeredHours * jobPay;

	// Print the statement
	cout << "\nIf this was a job that pays " << jobPay << " per hour,\n"
		 << "she would have earned $" << totalPay << " for this week.";

}
