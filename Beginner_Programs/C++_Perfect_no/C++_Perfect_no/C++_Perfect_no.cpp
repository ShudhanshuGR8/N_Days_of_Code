#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	cout << "Enter the number here: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	if (sum == 2 * n) {
		cout << n << " is a Perfect Number!";
	}
	else {
		cout << "Not a Perfect Number!";
	}



	return 0;
}