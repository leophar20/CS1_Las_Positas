#include <iostream>

using namespace std;

int main()
{
    // declare variables
    // TODO: initialize variables
    char   ascii= 33;
    short  x = -20;
    int    y = 8202000;
    double z = 200.301;
    
    // output their values
    cout << "Value of ascii: " << ascii << endl;
    cout << "Value of x: "     << x     << endl;
    cout << "Value of y: "     << y     << endl;
    cout << "Value of z: "     << z     << endl;

    // output converted values
    // TODO: write output statements using static_cast to convert the values
    ascii =static_cast<long>(ascii);
    x =static_cast<int>(x);
    y =static_cast<short>(y);
    z =static_cast<long long>(z);

    cout << "\nNew value of ascii: " << ascii
    		<< "\nNew value of x: " << x
			<< "\nNew value of y: " << y
			<< "\nNew value of z: " << z<< endl;
    // combined assignment statements
    // TODO: use combined assignments to update the variables
    ascii += 10;
    x -= 174;
    y *= 5;
    z /=6.54;
    // output their updated values
    cout << "\nValue of ascii: " << ascii << endl;
    cout << "Value of x: "     << x     << endl;
    cout << "Value of y: "     << y     << endl;
    cout << "Value of z: "     << z     << endl;

    // terminate
    return 0;
}
