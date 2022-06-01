#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a, b, c;
	cout << "Enter the values for the equation"<< endl;
	cin >> a >> b >> c;

	double root1, root2;
	root1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
	root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
	cout << "The roots of the equation are: " << root1 << " and " << root2;
	return 0;

}