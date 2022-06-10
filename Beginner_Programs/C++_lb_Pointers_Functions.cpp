#include <iostream>
using namespace std;

void print(int *p){
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;
}

void update(int *p){
    p=p+1;
    cout << "Inside " << p << endl;
}

void update_value(int *p){
    (*p)++;
}

int getSum(int arr[], int n){ //int *arr can also be written as int arr[]
    int sum = 0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    // int value = 5;
    // int *p = &value;
    
    // //print(p);
    // cout << "Before " << *p <<endl;
    // cout << "Before " << p << endl;
    // update(p);
    // cout << "After " << p << endl;
    // update_value(p);
    // cout << "After " << *p <<endl;
    
    int a[] = {1,2,3,4,5,6};
    cout << "Sum is " << getSum(a+3, 3) << endl;
    return 0;
    }