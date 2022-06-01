#include <iostream>
using namespace std;

int main() {
	int a = 11, b = 7, c, d, e;
	c = a & b;
	d = a | b;
	e = a ^ b;
	cout << "Bitwise AND : " << c << endl;
	cout << "Bitwise OR : " << d << endl;
	cout << "Bitwise XOR : " << e << endl;
	char x = 5, y, z, f;
	y = x << 1;
	z = x >> 1;
	f = ~x;
	cout << "Left shift Operator << : " << (int)y << endl;
	cout << "Right shift Operator >> : " << (int)z<<endl;
	cout << "Not Operator : " << (int)f;

}