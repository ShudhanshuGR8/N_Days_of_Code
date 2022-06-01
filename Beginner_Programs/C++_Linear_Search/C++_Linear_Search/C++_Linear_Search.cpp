#include <iostream>
using namespace std;

int main() {
	int n, A[10];
	cout << "Enter the elements in the Array; ";
	for (int &x: A) {
		cin >> x;
	}
	cout << "Enter the element to search in the Array: ";
	cin >> n;
	for (int i = 0; i < 10;i++) {
		if (n == A[i]) {
			cout << "Element found at index " << i << endl;
			return 0;
		}
	}
	cout << "Element not present in the Array!";
	return 0;
}