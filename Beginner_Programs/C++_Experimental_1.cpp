#include <iostream>
using namespace std;

void update(int n){ //Pass by value --> here a copy is created of the actual parameters
    n++;
}

void update_2(int& n){
    n++;
}

int& func(int a){
    int num = a;
    int& ans =num;
    return ans;
}


int main(){
    // int i = 5;
    // int& j = i; //Create a reference Variable
    // cout << i << endl;
    // cout << j << endl;
    // cout <<&i << "  " << &j << endl;
    // i++;
    // cout << j << endl;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;
    
    int n=5;
    cout << "Before: " << n << endl;
    // update(n);
    update_2(n);
    cout << "After: " << n << endl;
    
    
    return 0;
}