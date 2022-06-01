#include <iostream>
using namespace std;

int main() {
	int A[10];
	cout << "Enter the elements in the array: ";
	//Taking input from the users in the Array
	for (int &x : A) {
		cin >> x;
	}
	//Display the Array's elements
	for (int x : A) {
		cout<< x << endl;
	}
	int sum = 0;
	//using foreach loop to calculate sum of all the elements in the Array
	/*for (int x : A) {
		sum += x;
	}*/

	//using for loop to calculate sum of all the elements in the Array
	for (int i = 0; i < 10; i++) {
		sum += A[i];
	}
	 
	cout << "The sum of all the elements in the array is " << sum;
	return 0;
}