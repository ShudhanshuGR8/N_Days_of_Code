#include <iostream>
using namespace std;

int main() {
	
	int n,i=1,product=1;
	cout << "enter the number here: ";
	cin >> n;
	while (i <= n) {
		product *= i;
		i++;
	}
	cout << "The factorial is " << product;
	
	return 0;
}