#include <iostream>
using namespace std;

int fibonnaci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fibonnaci(n-1) + fibonnaci(n-2));
    }
}

int main(){
    int n;

    cout << "Enter the value of n: " << endl;
    cin >> n;
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum+=i;
    }
    cout << "the sum is " << sum << endl;
    
    cout << "The fibonnaci series is " << fibonnaci(n+1) << endl;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 0; i<=n; i++){
        int nextNum = a+b;
        cout << nextNum << " ";
        a = b;
        b = nextNum; 
    }

    }
