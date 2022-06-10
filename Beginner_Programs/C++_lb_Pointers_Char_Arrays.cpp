#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5,};
    char ch[] = "Abcde"; //--> character array always ends with a null value
    cout << arr << endl; // prints the address of the first memory location in the array
    cout << ch << endl;
    cout << *ch+1 << endl;

    // char *p = &ch[0];
    // cout << p << endl; // Prints the entire character array
    // cout << *p << endl;//prints the value at the array's index it points to
    // cout << &p << endl; //prints the address of the pointer

    // char temp = 'z';
    // char *t = &temp;
    // cout << t << endl;

    

    return 0;
}