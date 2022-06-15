#include  <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int i=0;
    // while(i<31){
    //     if(n==pow(2,i)){
    //         cout << "true";
    //         return 0;
    //     }
    //     i++;
    // }
    // cout << "false";
    // return 0;

    //OR
    int count = 0;
    while(n!=0){
        int bit = n&1;
        if(bit==1){
        count++;
        }
        n = n >> 1;
    }
    if(count==1){
        return true;
    }
    else{
        return false;
    }

//OR
//Optimized - Sexy Soln ->
// bool isPowerOfTwo(int n) {
//         if(n==0){
//             return false;
//         }
//         if(n==INT_MAX || n==INT_MIN){
//             return 0;
//         }
//         return !(n&(n-1)); 
//     }
}