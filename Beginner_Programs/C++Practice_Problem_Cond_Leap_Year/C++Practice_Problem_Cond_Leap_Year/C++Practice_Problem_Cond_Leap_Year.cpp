#include <iostream>
using namespace std;

int main() {
	int year;
	cout << "Enter the year to check for ";
	cin >> year;

	if (year % 400 == 0) {
		cout << "leap year";
	}
	else if (year % 100 != 0 && year % 4 == 0) {
		cout << "leap year";
	}
	else {
		cout << "not  leap year";
	}

	
	
	return 0;

}