#include <iostream>
#include <cmath>

using namespace std;

int main() {
	float a, b, c, d;
	cout << "Enter 3 values" << endl;
	cin >> a >> b >> c;
	d = (b * b) - (4 * a * c);
	if (d == 0) {
		cout << "The roots are real and equal" << endl;
		cout << (-b / (2 * a)) << endl;
	}
	else if (d > 0) {
		cout << "The roots are real  and unequal" << endl;
		cout << (- b + sqrt(d))/(2*a) << " "<< (-b - sqrt(d)) / (2 * a) << endl;
	}
	else {
		cout << "The roots are imaginery" << endl;
	}
	
	return 0;
}