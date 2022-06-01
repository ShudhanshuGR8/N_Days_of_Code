#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "Enter the numbers here: ";
	cin >> n >> m;

	while (m != n) {
		if (m > n) {
			m = m - n;
		}
		else {
			n = n - m;
		}
	}
	cout << "The GCD is " << m;
	
	return 0;
}