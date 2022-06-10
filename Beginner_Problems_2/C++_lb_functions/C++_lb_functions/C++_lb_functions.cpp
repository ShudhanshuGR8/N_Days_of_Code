#include <iostream>
using namespace std;
//power code
int power(int num1, int num2) {
	int ans = 1;
	//cout << a; --> Here we cant access the variable a of main function because that variable is the local variable and outside the scope of power function
	for (int i = 1; i <= num2; i++) {
		ans = ans * num1;
	}
	return ans;
}

//Alternate power code
int power_1() {
	int a, b;
	cin >> a >> b;
	int ans = 1;
	for (int i = 1; i <= b; i++) {
		ans *= a;
	}
	return ans;
}
int main() {
	int a, b;
	cin >> a >> b;
	int answer  = power(a, b);
	cout << answer << endl;
	cout<< power_1();
	
	return 0;

}