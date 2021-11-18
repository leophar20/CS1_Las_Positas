#include <iostream>
#include <string>
#include <iomanip>
using namespace std; // @suppress("Symbol is not resolved")

struct Item {

	string name;
	int rating;
	string comment;
};

int main() {
	const int SIZE = 5 ;
	Item items[SIZE];

	for (int i = 0; i < SIZE ;i++){
		cout <<"Item " << i+1 << " of " << SIZE<< endl ;
		cout << "Enter the name: ";
		getline(cin, items[i].name);
		cout << "Enter the rating: ";
		cin >> items[i].rating;
		cin.ignore();
		cout << "Enter an optional comment: ";
		getline(cin, items[i].comment);
		cout << endl;
	}

	for ( Item element : items){
		cout << "\nName: " << element.name << endl;
		cout << "Rating: " << element.rating << endl ;
		cout << "Comment: " << element.comment << endl;
	}
}
