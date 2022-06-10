#include <iostream>
using namespace std;

int set_bits_count(int a) {
	int count = 0;
	while (a > 0) {
		if ( a % 2 == 1) {
			count++;
		}
		a = a / 2;
	}
	return count;
}

int main() {
	int a, b;
	cout << "Enter the two numbers"<<endl;
	cin >> a >> b;
	
	cout << "The number of set bits in both " << a << " and " << b << " combined are " << set_bits_count(a) + set_bits_count(b);
	
	return 0;
}