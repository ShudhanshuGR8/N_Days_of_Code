//#include <iostream>
//#include <vector>
//using namespace std;
//
//void display_vec(vector<int> &v) {
//	for (int i = 0; i < v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//}
//
//
//int main() {
//	vector<int> vec1;
//	int ele, size;
//	cout << "enter the size of the vector: ";
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		cout << "Enter elements in Vector";
//		cin>> ele;
//		vec1.push_back(ele);
//	}
//	display_vec(vec1);
//
//	return 0;
//}



//Hackerrank Question - Variable Sized Arrays
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, s = 0;
    cin >> n>>q;
    int* arr[n];
    while (n--) {
        int x;
        cin >> x;
        arr[s] = new int[x];
        for (int i = 0; i < x; i++) {
            cin >> arr[s][i];
        }
        s++;
    }
        while (q--) {
            int a, b;
            cin >> a >> b;
            
            cout << arr[a][b];
        }
    return 0;
}

