#include <iostream>
using namespace std;
int main() {
	float ToAm; 
	float DisAm;
	cout << "Enter the Total Amount" << endl;
	cin >> ToAm;
	if (ToAm < 100) {
		DisAm = ToAm;
		cout << "No Discount! Amount is " << DisAm;
	}
	else if (ToAm >= 100 && ToAm < 500) {
		DisAm = ToAm - (ToAm * 10 / 100);
		cout << "10% Discount! Amount is " << DisAm;
	}
	else if (ToAm >= 500) {
		DisAm = ToAm - (ToAm * 20 / 100);
		cout << "20% Discount! Amount is " << DisAm;	
	}

	
	return 0;
}