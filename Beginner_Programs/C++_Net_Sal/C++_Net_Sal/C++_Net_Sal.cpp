#include <iostream>
using namespace std;

int main() {
	
	float BasSal, PercAllow, PercDeduce, NetSal;
	cout << "Enter your Basic Salary: " << endl;
	cin >> BasSal;
	cout << "Enter your Percentage of Allowances: " << endl;
	cin >> PercAllow;
	cout << "Enter your Percentage of Deductions: " << endl;
	cin >> PercDeduce;

	NetSal = BasSal + (BasSal * PercAllow/100) - (BasSal * PercDeduce/100);
	cout << "The Net Salary is " << NetSal;

	
	
	return 0;
}