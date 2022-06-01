#include  <iostream>
#include <algorithm>

using namespace  std;
int main() {
	/*int array[100];
	fill_n(array, 100, 1);
	for (int i = 0; i < 100; i++) {
		cout << array[i];
	}*/
	//Another Method
	int arr[100];
	fill(arr, arr + 100, 1);
	for (int i = 0; i < 100; i++) {
		cout << arr[i];
	}

	
	return 0;
}