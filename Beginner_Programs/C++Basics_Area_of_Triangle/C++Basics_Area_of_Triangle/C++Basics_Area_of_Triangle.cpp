#include <iostream>
using namespace std;

int main() {
	float b, h, ar;
	
	cout << "Enter the base and height of the triangle"<<endl;
	cin >> b >> h;
	ar = (b * h) / 2;
	cout << "The area of the triangle is: " << ar;
}
