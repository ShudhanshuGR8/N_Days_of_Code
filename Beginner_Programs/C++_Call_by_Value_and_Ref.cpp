#include <iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

//Call by Value
void swap(int a, int b){ //Here it creates a copy of our actual parameters and then e=modify them accordingly and hence no impact occurs on the actual parameters
    int temp = a;
    a = b;
    b = temp;
}

//Call by Reference using Pointers
void swapPointer(int* a, int* b){ // Ye function uss address pe jo bhi value hai usko acess kr rha hai and modify kr rha hai
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by reference using C++ reference Varible
void swapReferenceVar(int &a, int &b){
    int temp = a;
    a =b;
    b = temp;
    
    }


int main(){
    int a = 4, b = 5;
    // cout << " Sum of 4 and 5 is " << sum(4,5) << endl;
    // cout <<" Before: " << a <<" " << b<< endl;
    // swap(a,b);
    // cout << "After: " << a << " " << b << endl;
     
    // cout << "Before: " << a << " " << b << endl;
    // swapPointer(&a, &b);
    // cout << "After: " << a << " " << b << endl;
    
    cout << "Before: " << a << " " << b << endl;
    swapReferenceVar(a, b);
    cout << "After: " << a << " " << b << endl;
    return 0;
}