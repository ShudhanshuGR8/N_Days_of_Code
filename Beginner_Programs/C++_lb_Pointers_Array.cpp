#include <iostream>
using namespace std;

int main(){
    // int arr[10] = {23, 122, 41, 67};
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<< *arr + 1 << endl;
    // cout << *(arr+1) << endl;
    // cout << arr[2] << endl;
    // cout<< *(arr+2)<<endl;
    // cout << 2[arr] << endl;
    
    // int temp[10] = {1,2};
    // cout << sizeof(temp)<<endl;
    // cout << sizeof(*temp) << endl;
    // cout << sizeof(&temp) << endl;
    

    // int *ptr;
    // ptr = &temp[0];
    
    
    // cout <<sizeof(ptr)<<endl; //size of the pointer that stores the address and so 8 is the memory allocated to all the pointers
    // cout << sizeof(*ptr)<<endl; // size of the value at the address stored by the pointer and so 4 is the memory allocated to it
    // cout << sizeof(&ptr) << endl; // Again this refers to the address of the pointer and all addresses are allocated 88 memory
    
    // int a[20] = {1,2,3,4};
    // cout << &a[0] << endl; //OR cout << a << endl; //OR cout << &a << endl; --> all three points to the address of the first memory location allocated in the array

    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    int arr[10];
    //ERROR -> cannot change the address of arr. Symbol Table main entry bani padi hai modify krne jaoge toh error dega
    //arr = arr + 1;
    int *ptr = &arr[0];
    cout << ptr<< endl;
    ptr = ptr + 1;
    cout << ptr << endl;   
    
    
    
    return 0;
}