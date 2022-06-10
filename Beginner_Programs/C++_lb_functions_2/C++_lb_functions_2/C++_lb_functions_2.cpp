#include <iostream>
using namespace std;

bool isEven(int a) {

	//1 --> Even
	//0 --> Odd

	//Odd
	if (a&1) {
		return 0;
	}//Even
	else {
		return 1;
	}
	
}



int main() {
	int num1;
	
	cout << "Enter the number to check for even" << endl;
	cin >> num1;

	if (isEven(num1)) {
		cout << "Number is Even" << endl;
	}
	else {
		cout << "number is Odd" << endl;
	}
	return 0;
}