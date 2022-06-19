#include <iostream>
using namespace std;

bool Lin_Search(int arr[], int size, int key){
    for(int i = 0;i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    int m;
    cin >> m;
    int arr[100];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }

    if(Lin_Search(arr, n, m)){
        cout << "Element is present in the Array";
    }
    else{
        cout << "Element is absent in the Array";
    }


}