#include <iostream>
using namespace std;

int main() {
	int n,r;
	cout << "Enter the number here: ";
	cin >> n;
	cout << "The Digits are below mentioned:"<<endl;
	for (int i = 0; n > 0; i++) {
		
			r = n % 10;
			n = n / 10;
			cout << r<<endl;
		
	}
	// ---------- OR -------------
	/*while (n > 0) {
		r = n % 10;
		n = n / 10;
		cout << r << endl;
	}
	*/
	return 0;
}