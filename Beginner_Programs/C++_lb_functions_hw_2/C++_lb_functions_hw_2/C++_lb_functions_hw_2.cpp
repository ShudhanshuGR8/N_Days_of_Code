#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}


int main() {
	int n;
	cout << "Enter the value of n" << endl;
	cin >> n;
	
	cout << "The " << n << "th fibonnaci number is " << fibo(n) << endl;
	
	return 0;
}