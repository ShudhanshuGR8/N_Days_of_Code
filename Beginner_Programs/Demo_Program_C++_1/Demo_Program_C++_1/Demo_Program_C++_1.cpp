/*
// Program to input two numbers and return their sum
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter 2 Numbers: ";
	cin >> a >> b;
	c = a + b;
	cout << "Sum is: " << c;
	return 0;
}
*/


// Program to input a name and return a message
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	cout << "Please enter your name";
	// the below method will not count space if it encounters space it will stop its execution
	//cin >> name;

	// the below method will read the complete line as input
	getline(cin, name);
	cout << "Welcome " << name << " Sir.";
	return 0;
}
