#include <iostream>
using namespace std;

//Program - 1
//void update(int a) {
//	a = a / 2;
//}
//
//
//int main() {
//
//	int a = 10;
//	
//	update(a);
//	cout << a << endl;
//}

//	int update_1(int a) {
//		a -= 5;
//		return a;
//}
//	int main() {
//		int a = 15;
//		update_1(a);
//		cout << a << endl;
//	return 0;
//}


int update_2(int a) {
	int ans = a * a;
	return ans;
}

int main() {
	int a = 14;
	a = update_2(a);
	cout << a << endl;
	return 0;
}