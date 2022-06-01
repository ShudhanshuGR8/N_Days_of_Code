//#include <iostream>
//using namespace std;
//
//int main() {
//	if (1) {
//		cout << "Hi" << endl;
//	}
//	else {
//		cout << "Bye" << endl;
//	}
//	int a, b, c;
//	cin >> a >> b;
//	if (b != 0) {
//		c = a / b;
//		cout << c;
//	}
//	else {
//		cout << "Invalid Value! The denominator is 0";
//	}
//	return 0;
//
//}

#include <iostream>
using namespace std;

int main() {
	int hour;
	cout << "enter the hour" << endl;
	cin >> hour;
	if (hour >= 9 && hour <= 18) {
		cout << "Working Hour" << endl;
	}
	else {
		cout << "Leisure Hour"<<endl;
	}

	return 0;
}