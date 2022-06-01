#include <iostream>
using namespace std;
int main() {
	int count = 0;
	//My approach
	for (int i = 0; i < 4; i++) {
		for (int j = 4; j > i; j--) {
			cout << "*";
		}
		cout << endl;
	}

	//Alternate Approach
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i > j) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i + j >= 3) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}