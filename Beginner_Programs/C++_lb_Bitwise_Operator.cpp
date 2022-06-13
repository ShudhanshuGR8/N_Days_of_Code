#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;
    cout << "a & b " << (a&b) << endl;
    cout << "a | b " << (a|b) << endl;
    cout << "~a " << (~a) << endl;
    cout << "a ^ b " << (a^b) << endl;
    
    int c  =17, d = 19, e = 21;
    cout << "c >> 1 " << (c >> 1) << endl;
    cout << "c >> 2 " << (c >> 2) << endl;
    cout << "c << 1 " << (d << 1) << endl;
    cout << "c << 2 " << (e << 2) << endl;
    
    
    
    
    return 0;
}