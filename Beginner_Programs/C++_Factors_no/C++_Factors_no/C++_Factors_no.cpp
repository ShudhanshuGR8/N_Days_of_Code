#include <iostream>
using namespace std;

int main() {
	int n, sum=0;
	cout << "Enter the number here: ";
	cin >> n;
	/*cout << "The list of factors of " << n << " are:" << endl;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << endl;
		}
	}*/
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	cout << "The sum of all factors of " << n << " is " << sum;
	return 0;
}