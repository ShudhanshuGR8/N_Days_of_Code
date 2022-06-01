#include <iostream>
using namespace std;

int main() {
	//declaring an array and initializing it with size mentioned during declaration and initialized all it's elements
	int A[5] = { 1,2,3,4,5 };
	//declaring an array and initializing it without mentioning the size of the array
	int B[] = { 1,2,3,4,5,6 }; // here the size will automatically be allocated according to the elements the array is intitalized with
	//decalring an array with size menitoned but not initalizing it with all the elements
	int C[5] = { 1,2,3 }; // Here the rest of the elements will be considered as 0

	//Displaying the elements of an array using for loop
	for (int i = 0; i < 5; i++) {
		cout << A[i] << endl;
	}

	//Displaying the elements of the array using for each loop
	for (int x : B) { //Here we read this as for each x in A. First x will be the first element of the array B and then loop through the array
		cout << x << endl;
	}
	//Another form of for each
	for (auto x : C) { //Here auto will automatically detect the datatype of x depending on the array's. 
		cout << x<<endl;
	}
}