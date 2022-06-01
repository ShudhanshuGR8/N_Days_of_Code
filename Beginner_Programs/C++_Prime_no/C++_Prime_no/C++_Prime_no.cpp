#include <iostream>
using namespace std;

int main() {
	int n, i = 2, count = 0;

	cout << "enter the number here: ";
	cin >> n;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (n <= 1) {
		cout << "Not a Prime Number";
	}
	else if (count == 0) {
		cout << "Prime Number!";
	}
	else{
		cout << "Not a Prime Number!";
	}
	
	return 0;
}