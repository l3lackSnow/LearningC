#include <iostream>
using namespace std;

int main() { // 517995 is the max input value ???
	/* The 12 times table featuring ARRAYS BETA */

	int upto;
	cout << "What value of the 12 times table do you wish to go up to? > "
			<< flush;
	cin >> upto;

	int table[upto] = { };

	upto += 1;

	cout << "+----------------------------------------------------------+"
			<< endl;
	for (int i = 0; i < upto; i++) {
		//cout << "[DEBUG]" << table[i] << " is being assigned to " << i << endl;
		table[i] = i;
	}

	for (int i = 0; i < upto; i++) {
		cout << "12 x " << table[i] << " = " << 12 * table[i] << endl;
	}

}
