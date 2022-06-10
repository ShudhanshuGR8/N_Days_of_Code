#include <iostream>
using namespace std;

int factorial(int a) {
	int fact = 1;
	for (int i = 1; i <= a; i++) {
		fact *= i;
	}
	return fact;
}
	//Function Signature
int nCr(int n, int r) {
	//Function Body
	int ans;
	ans = factorial(n) / (factorial(r) * factorial(n - r));
	return ans;
}


int main() {
	int n, r;
	cout << "Enter the values of n and r" << endl;
	cin >> n >> r;

	int ans = nCr(n,r);
	cout << "nCr of the given values is " << ans << endl;
	
	return 0;
}
