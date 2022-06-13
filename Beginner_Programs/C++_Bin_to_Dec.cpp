#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0, i= 0, bit, rem;
    while(n!=0){
        rem = n % 10;
        bit = (rem&1);
        ans+= (pow(2,i)*bit);
        i++;
        n = n/10;
        // cout << "Bit - " << bit << endl;
        // cout << ans << endl;
        // cout << n << endl;
    }
    cout << ans << endl;
}