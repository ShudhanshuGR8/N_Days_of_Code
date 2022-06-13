#include <iostream>
using namespace std;

int main(){
    double x; 
    int n;
    double power=x;
    cin >> x >> n;
    while(n!=0){
        if(n==1){
            cout << power<<endl;
            n--;
            break;
        }
        else{
            power*= x;
            n--;
        }
}
cout << power<<endl;
return 0;
}