#include <iostream>
using namespace std;

int main() {
	int A[5];
	cout << "Enter the elements you want to enter in the Array: ";
	for (int& x : A) {
		cin >> x;
	}
	//My Approach
	/*int max;
	for (int i = 0; i < 5; i++) {
		if (A[i] > A[i + 1]) {
			max = A[i];
		}
		else {
			max = A[i + 1];
		}
	}
	cout << "The max element is " << max;*/
	
	//Another good Approach
	int max = A[0];
	for (int i = 1; i < 5; i++) {
		if (A[i] > max) {
			max = A[i];
		}
	}
	cout << "The max element is " << max;
	
	
	return 0;
}
