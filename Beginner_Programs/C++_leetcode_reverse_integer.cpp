#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x;
    cin >> x;
    int r;
    int number = 0;
    while(x!=0){
            r = x % 10;
            number = (number*10) + r; //This formula is for reversing the digits
            // number+= (r*pow(10, i)); //This formula is for printing the number exactly same with i starting from 0
            x = x / 10;
                }
    cout << number;
    return 0;

    }