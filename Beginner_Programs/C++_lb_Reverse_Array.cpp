#include <iostream>
using namespace std;

void Reverse_Array(int arr[], int n){
for(int i = 0; i < n/2; i++){
    int temp = arr[i];
    cout << temp<<endl;
    cout << "Before "<<arr[i] << " " << arr[n-1-i] << endl;
    arr[i] = arr[n-1-i];
    cout << "After "<<arr[i] << " " << arr[n-1-i] << endl;
    arr[n-1-i] = temp;


}
}


int main(){
    int arr[100], n;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    Reverse_Array(arr, n);
 for(int i = 0; i < n ; i++){
    cout << arr[i] << " ";
 }
 
    return 0;
}