#include <iostream>

using namespace std;

int main() {

	int table[2][11] = { { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, { 2, 4, 6, 8, 10,
			12, 14, 16, 18, 20, 22 } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 11; j++) {
			cout << "10 x " << table[i][j] << " = " << 10*table[i][j] << endl;
		}
	}
	return 0;
}
