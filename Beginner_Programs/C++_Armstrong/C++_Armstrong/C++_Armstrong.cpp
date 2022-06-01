#include <iostream>
using namespace std;

int main() {
	int m, n, r, sum=0;
	cout << "enter the number here:";
	cin >> n;
	m = n;
	while (n > 0) {
		r = n % 10;
		n = n / 10;
		sum += (r * r * r);
	}
	if (m == sum) {
		cout << "Armstrong";
	}
	else {
		cout << "Not Armstrong";
	}
	
	return 0;
}