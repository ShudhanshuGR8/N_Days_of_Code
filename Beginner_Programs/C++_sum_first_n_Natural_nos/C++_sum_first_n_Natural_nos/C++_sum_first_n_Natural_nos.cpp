#include <iostream>
using namespace std;

int main() {
	int n, sum=0;
	cout << "Enter the number here: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum = sum + i;
		cout << i << " + ";
	}
	cout << " = " << sum;
	
	
	return 0;
}