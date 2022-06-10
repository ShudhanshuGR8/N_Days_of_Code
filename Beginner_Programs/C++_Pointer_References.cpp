#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x; // A reference must be intialized whenever it is declared


    int b = 20;
    //&y = b; //A reference once initialized cannot refer to any other value or variable

    cout<<x<<endl;
    cout<<y<<endl;
    x++;
    y++;
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<&x << " " << &y<<endl;
    
    return 0;

}