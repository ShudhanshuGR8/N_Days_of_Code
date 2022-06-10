// #include <iostream>
// using namespace std;

// int main(){
// int x = 10;
// int *p = &x;

// //OR

// int *p1;
// p1 = &x;
// cout<<x<<endl;
// cout << &x<<endl;
// cout << p<< endl;
// cout<<&p<<endl;
// cout<<*p<<endl;

// return 0;
// }


//Dynamically allocate memory in the heap
#include <iostream>
using namespace std;

int main(){
    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;
    cout << p[0]<<endl;
    cout << p[1]<<endl;
    return 0;
    delete []p;
}
