#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the value of n"<<endl;
	cin >> n;
	int num = 1;
	while (num <= n) {
		int count=0;
		int div = 2;
		while (div <= num/2) {
			if (num % div == 0) {
				count++;
				break;
			}
				div+=1;
		}
		if (count == 0 && num!=1) {
			cout << num << endl;
		}
			num += 1;
		}
	
	return 0;
}