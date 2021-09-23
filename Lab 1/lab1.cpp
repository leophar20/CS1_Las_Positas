// This is my first program
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int age;

	cout << "Hello, what is your name?" << endl;
	cin >> name;

	cout << "What is your age?\n";
	cin >> age;

	cout << endl << "Nice to meet you " << name;
	cout << "! Your age is " << age << ".";

	return 0;
}
