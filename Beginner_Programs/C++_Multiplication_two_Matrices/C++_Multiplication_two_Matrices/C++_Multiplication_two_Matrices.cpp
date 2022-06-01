#include <iostream>
using namespace std;

int main() {
	int A[10][10], B[10][10], C[10][10], c1,r1,c2,r2;
	cout << "Enter the number of rows for the first matrix: ";
	cin >> r1;

	cout << "Enter the number of columns for the first matrix: ";
	cin >> c1;

	cout << "Enter the number of rows for the second matrix: ";
	cin >> r2;

	cout << "Enter the number of columns for the second matrix: ";
	cin >> c2;

	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < r2; i++) {
		for (int j = 0; j < c2; j++) {
			cin >> B[i][j];
		}
	}
	int i, j, sum=0,k;
	if (c1 == r2) {
		for (i = 0; i < r1; i++) {
			for (j = 0; j < c2; j++) {
				C[i][j] = 0;
				for (k = 0; k < c1; k++) {
					C[i][j] += A[i][k] * B[k][j];
				}

			}
			C[i][j] = sum;
		}
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c2; j++) {
				cout << C[i][j] << " ";
			}
			cout << endl;
		}
	}
	else {
		cout << "The matrices are not multiplicable.";
	}
	return 0;
}