#include <iostream>
using namespace std;

int main() {
	int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	
	////Displaying a 2d array
	///*for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << A[i][j] << " ";
	//	}
	//	cout << endl;
	//}*/

	////adding a 2d array	
	//int B[3][3] = {{3,4,2,}, {5,7,9,}, {6,4,1}};
	//int C[3][3];

	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		C[i][j] = A[i][j] + B[i][j];
	//	}
	//}

	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << C[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	////For each loop to display 2-D array
	//for (auto& x : C) {
	//	for (auto& y : x) {
	//		cout << y << " ";
	//	}
	//	cout << endl;
	//}

	//Mattrix operations on Arrays
	int B[3][3],C[3][3];

	for (auto& x : B) {
		for (auto& y : x) {
			cin >> y;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3;j++) {
			C[i][j] = A[i][j] + B[i][j]; // Addition Operation of Arrays
			//C[i][j] = A[i][j] * B[i][j]; // Multiplication Operation of Arrays
			//C[i][j] = A[i][j] - B[i][j]; // Subtraction Operation of Arrays
			//C[i][j] = A[i][j] / B[i][j]; // Division Operation of Arrays


		}
	}
	int sum = 0;
	for (auto& x : C) {
		for (auto& y : x) {
			cout << y << " ";
		}
		cout << endl;
	}

	for (auto& x : A) {
		for (auto& y : x) {
			sum += y;
		}
	}
	cout << "The average of all elements of the Array are: " << sum/9;
	return 0;

}