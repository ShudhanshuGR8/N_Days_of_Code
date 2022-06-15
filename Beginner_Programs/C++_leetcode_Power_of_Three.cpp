#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
 int i = 0;
        while(i<20){
        if ((log(n)/log(3)) == i){ 
            cout << " " <<(log(n)/log(3)) << " true" << endl;
            
            }
            i++;
      }

        cout << (log(n)/log(3)) <<"false";
}