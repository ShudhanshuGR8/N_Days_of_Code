#include <iostream>
using namespace std;

int main() {
	int n, l = 0, h = 9, mid;
	int A[10];
	cout << "Enter the numbers here: ";
	for (int &x : A) {
		cin >> x;
	}
	cout << "Enter the number to search here: ";
	cin >> n;
	
	while (l <= h) {
		mid = (l + h) / 2;
		if (n > A[mid]) {
			l = mid + 1;
		}
		else if (n < A[mid]) {
			h = mid - 1;
		}
		else if(n==A[mid]) {
			cout << "Element found at index "<<mid-1;
			return 0;
		}
	}
	cout << "Element not present in the Array";

	return 0;

}