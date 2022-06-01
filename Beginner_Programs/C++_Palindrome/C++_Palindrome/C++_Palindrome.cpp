#include <iostream>
using namespace std;

int main() {
	int n, m, r, rev=0;

	cout << "Enter the number here ";
	cin >> n;
	m = n;
	while (n > 0) {
		r = n % 10;
		n = n / 10;
		rev = rev * 10 + r;
	}
	if (rev == m) {
		cout << "palindrome";
	}
	else {
		cout << "not a palindrome";
	}

}