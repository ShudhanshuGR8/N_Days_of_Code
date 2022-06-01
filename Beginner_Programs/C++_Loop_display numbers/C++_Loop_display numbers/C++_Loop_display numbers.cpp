#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number till which you have to loop: " << endl;
	cin >> n;
	
	/*while(int i=0 <= n){
		cout << i <<endl;
		i++;
	}*/
	cout << "The numbers are as mentioned below:"<<endl;
	/*for (int i = 0; i <= n; i++) {
		cout << i << endl;
	}*/
	int i = 0;
	do {
		cout << i << endl;
		i++;
	} while (i <= n);

	return 0;
}