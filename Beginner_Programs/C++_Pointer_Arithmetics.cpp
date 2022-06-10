#include <iostream>
using namespace std;

int main(){
    int A[5] = {1,2,3,4,5};
    int *p = A;
    int *q = &A[3], d, e;
    //There are five operations allowed using Pointers :-
    //1. p++ -> Here it doesnt mean that address will increase by 1 instead p++ will move the pointer to the next memory location. Here how many bytes a pointer move to move to a new memory location depends on the data type of the pointer

    //2. p-- -> Similar to p++. Here it points to the previous memory location instead

    //3. p=p+2; -> Pointer will move 2 memory location forward and moves the pointer 2 memory location forward.

    //4. p=p-2; -> Pointer will move 2 memory location backward and point to previous 2nd memory location there.

    //5. d = q - p; -> This will tell us how far the two pointers are i.e It will give us the distance between two Pointers. Here The actual adressess are subtracted and their difference is then divided by the size of the data type of the Pointer. Here the sign serves as the indicator of which pointer is before which.

    //Note:- While using Pointer arithmetic operators, you dont have to use asterik

    //Examples

    
    cout << *p<<endl;
    
    p++;
    cout<<*p<<endl;
    
    p--;
    cout<< *p << endl;

    p+=4;
    cout<< p<<endl;

    p-=3;
    cout<< p<<endl;

    d = q - p;
    cout<<d<<endl;

    e = p-q;
    cout<<e<<endl;


int a;
    cout<<sizeof a;

    return 0;
}