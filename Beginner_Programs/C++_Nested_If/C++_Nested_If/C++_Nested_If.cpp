#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter three numbers" << endl;
	cin >> a >> b >> c;
	if (a > b && a > c) {
		cout << "Max is: " << a;
	}
	else {
		if (b > c) {
			cout << "Max is: " << b;
		}
		else {
			cout << "Max is: " << c;
		}
	}
	return 0;
}