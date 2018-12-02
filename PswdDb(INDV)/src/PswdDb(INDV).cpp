#include <iostream>
using namespace std;

int main() {
	const string pswd = "password";
	const string granted = "Access granted!";
	const string denied = "Access denied";

	string input;

	do {

		cout << "Please enter your password to access the database: " << flush;
		cin >> input;
		if (input != pswd) {
			cout << denied << endl;
		}

	} while (input != pswd);

	cout << granted << endl;
	cout << endl;

	/***************************/
	//    Database options     //
	/**************************/

	cout << "Welcome to the top secret database!" << endl;
	cout << "The shortcut to the secrets of life!" << endl;

	cout << "Please choose an menu option:" << endl;

	cout << "\t 1. How to live longer." << endl;
	cout << "\t 2. How to get gains on anything." << endl;
	cout << "\t 3. How to not get sick." << endl;
	cout << "\t 4. Quit." << endl;

	cout << ">" << flush;

	int dbinput;
	bool cont = true;

	while (cont) {
		cin >> dbinput;
		if (dbinput == 1) {
			cout << "Drink lots of water! Like, A LOT." << endl;
			cout << ">" << flush;
		} else if (dbinput == 2) {
			cout << "Work hard! Like, VERY HARD." << endl;
			cout << ">" << flush;
		} else if (dbinput == 3) {
			cout << "Quarantine yourself, LITERALLY" << endl;
			cout << ">" << flush;
		} else if (dbinput == 4) {
			cout << "Quitting..." << endl;
			cont = false;
		} else {
			cout << "Invalid option!" << endl;
			cout << ">" << flush;
		}
	}
	return 0;
}
