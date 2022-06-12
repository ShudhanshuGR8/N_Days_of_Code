#include <iostream>
using namespace std;

int main(){
    // //H/w-1
    // char ch;
    // cin >> ch;

    // if(ch>=48 && ch<=57){
    //     cout << "This is Numeric"<<endl;
    // }
    // else if(ch>=65 && ch<=90){
    //     cout << "This is UPPER CASE"<<endl;
    // }

    // else if(ch>=97 && ch<=122){
    //     cout << "This is lower case"<<endl;
    // }


    // // H/w-2
    // int n;
    // cout << "Enter the value of n: "<<endl;
    // cin >> n;
    // int i = 1, sum = 0;
    // while(i<=n){
    //     if(i%2==0){
    //          cout << i << endl;
    //     }
    //     i++;
    // }


    // //H/w-3
    // double F, C;
    // int i;
    // cout << "Welcome to F->C caluclator"<<endl;
    // cout << "Select 1 for entering: " << endl;
    // cout << "Select 0 for exit: " << endl;
    // cin >> i;
    // while(i == 1){
    // cout << "Enter the temperature in Fahrenheit: " << endl;
    // cin >> F;
    
    // C = ((F - 32)*5)/9;
    // cout << "Temperature in Celsius: " << C << endl;
    // cout << "Enter or Exit? " << endl;
    // cin >> i;
    // }

    //Prime or not?
    int n;
    cin >> n;
    int i=2;
    if(n<=1){
        cout << "Non Prime";
        return 0;
    }
    else{
    while(i<=n/2){
        if(n%i==0){
            cout << "Non Prime";
            return 0;
        }
        i++;
    }
    cout << "Prime";
    }
    return 0;

}