#include <iostream>
using namespace std;


//1 --> Prime
//0 --> not Prime
bool isPrime(int z) {
	int count = 0;
	for (int i = 1; i <= z; i++) {
		if (z % i == 0) {
			count++;
		}
	}
	if (count == 2) {
		return 1;
	}
	else {
		return 0;
	}

}

//Anotheer approach
bool iSprime(int z) {
	if (z == 1) {
		return 0;
	}
	for (int i = 2; i <= z/2; i++) {
		if (z % i == 0) {
			return 0;
		}
	}
	return 1;
}


int main() {
	int n;
	cout << "Enter the number you want to check for Prime" << endl;
	cin >> n;
	/*if (isPrime(n)) {
		cout << "Number is Prime";
	}
	else {
		cout << "Number is not Prime";
	}*/
	if (iSprime(n)) {
		cout << "Number is Prime";
	}
	else {
		cout << "Number is not Prime";
	}
	return 0;
}