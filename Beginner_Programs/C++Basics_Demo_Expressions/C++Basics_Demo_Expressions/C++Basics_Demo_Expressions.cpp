//// Area of the Circle
//#include <iostream>;
//using namespace std;
//
//int main() {
//	float r, ar1, ar2;
//	cout << "Enter the  radius of the circle: ";
//	cin >> r;
//	ar1 = 3.14f * r * r;
//	ar2 = (float)22 / 7 * r * r;
//	cout << "Area is: " << ar2;
//}

//Speed of a moving object
#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
	float u, v, a, speed;
	cout << "Enter 3 values: ";
	cin >> u >> v >> a;
	speed = (pow(v, 2) - pow(u, 2)) / (2 * a);
	cout << "Speed is: " << speed;
}