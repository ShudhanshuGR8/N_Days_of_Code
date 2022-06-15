#include <iostream>
using namespace std;

int main(){
    int arr[100], count[100]={0};
    int n, m;
    m = n;
    cout << "Enter the number of elements in the array: "<<endl;
    cin >> n;
    cout << "Enter the array elements: " << endl;
    int i = 0;
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    } 
    
    for(int i = 0; i < n; i++){
        for( int j = 0; j<n;j++){
            if (arr[i]==arr[j]){
                count[i]++;
            } 
        }
    }
    for(int i = 0; i < n; i++){
        cout << count[i] << " " << endl;
    }
    int count_1=0;
    for(int i = 0; i<n;i++){
        for(int j = 0; j<n;j++){
            if(count[i]==count[j] && (arr[i]!=arr[j])){
                    count_1++;
            }
        }
    }
    if(count_1>1){
        cout << "False" << endl;
        return 0;
    }
    else{
        cout << "True " << endl;
        return 0;
    }

}