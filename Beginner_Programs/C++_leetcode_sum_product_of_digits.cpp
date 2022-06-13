#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
int r, temp = n, sum = 0, product = 1;
while(temp>0){
    r = temp % 10;
    sum+=r;
    product*=r;
    temp = temp / 10;
}

cout << "The difference of Sum and Product of the digits of the number is " << product-sum << endl;
return 0;

}