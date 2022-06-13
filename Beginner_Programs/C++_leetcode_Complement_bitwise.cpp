#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int ans = 0, i = 0, bit;
    // while(n!=0){
    //     int bit = (n&1);
    //     if(bit==0){
    //         bit = 1;
    //     }
    //     else{
    //         bit = 0;
    //     }
    //     ans += (bit*pow(2,i));
    //     n = n >> 1;
    //     i++;
    // }
    // cout << ans;4
    //OR
    int num= n, mask = 0;
    while(num!=0){
        mask = (mask << 1) | 1;
        num = (num >> 1);
    }
        cout << ((~n) & mask) << endl;
    return 0;
}