#include <iostream>
using namespace std;

int ap(int n) {
	int ans;
	ans = 3 * n + 7;
	return ans;
}


int main() {
	int n;
	cout << "Enter the value of n" << endl;
	cin >> n;
	cout << "The nth term for the input value is " << ap(n);
	
	return 0;
}