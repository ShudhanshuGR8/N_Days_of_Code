#include <iostream>
using namespace std;

int main(){
    // int num = 10;

    // cout<<num<<endl;

    // // Address of Operator - &  
    // cout<<"Address of num is " << &num<<endl;
    
    // int *ptr = &num;

    // cout<< "value of num is " << *ptr<<endl;
    // cout<< "Address of num is " << ptr<<endl;

    // double d = 4.2;
    // double *ptr_1 = &d;

    // cout<<"value of d is "<<*ptr_1<<endl;
    // cout<<"address of d is " << ptr_1<<endl;
    // cout<<"address of d is " << &d << endl;

    // cout<<"size of integer pointer is " << sizeof(ptr)<<endl;
    // cout<<"size of double pointer is " << sizeof(ptr_1) << endl;


    //Playing with Pointers
    //pointer to int is created and pointing to some garbage address. -> bad practice
    //  int *p = 0;
    //  cout<<*p<<endl;

    /*
    int i = 5;
    int *q = &i;

    cout << q <<endl;
    cout<< *q<<endl;


     int *p = 0; //First we initialize our pointer to Null and then 
     p = &i;    //we point the pointer to the address of i.

    cout << p <<endl;
    cout<< *p<<endl;
    */

 
int num = 5;
// int a = num;
// a++;

// cout<<num<<endl;

// int *p = &num; //Aap num se and p se dono se same memory ko hi point kr rhe hai
//     (*p)++; 
// // cout<<num<<endl;


//     int *q = p; //This is how you copy a pointer imto another pointer
//     cout<<*p<<endl;
//     cout<<*q<<endl;

//     return 0;
int i = 8;
int *t = &i;
//cout<<++*t<<endl;

cout << "before t " << t << endl;
t = t + 1;
cout << "after t " <<t<< endl;

}