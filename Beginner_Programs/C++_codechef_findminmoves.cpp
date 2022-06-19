// #include <iostream>
// using namespace std;

// bool ArrayEqual(int arr[], int n){
//     for(int i = 1; i<=n; i++){
//         if(arr[i-1] != arr[i]){
//             cout << "false" << endl;
//         return 0;
//         }
//     }
//     cout << "true" << endl;
//     return 1;
// }

// int minmoves(int arr[], int n){
//     int count=0;
//     for(int i = 0; i<n-1; i=i+2){
//         if(ArrayEqual(arr, n)){
//             cout << count << " "<<endl;
//             for(int i =0; i<n;i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl; 
//             // return 0;
//         }
//         else{
//             if(arr[i]!=arr[i+1]){
//         arr[i] = arr[i]&arr[i+1];
//         arr[i+1] = arr[i]&arr[i+1];
//         for(int i =0; i<n;i++){
//             cout << arr[i] << " ";
//         }
//         cout << endl; 
//         count++;
//         cout << "count " << count<< " " << endl;
//     }
//         }
// }
// cout << count;
// }


// int main(){
//     int arr[100], n;
//     cin >> n;

//     for(int i = 0; i<n; i++){
//         cin >> arr[i];
//     }
    
//     minmoves(arr, n);

//     return 0;
// }


#include <iostream>
using namespace std;

int minmoves(int arr[], int n){
    int count = 0;
        for(int i = 0; i<n-1; i+=2){
            if(arr[i]!=arr[i+1]){
            arr[i] = arr[i]&arr[i+1];
            for(int j = i+1; j<n-1;j++){
                arr[j] = arr[j+1];
            }
            for(int i = 0; i<n;i++){
                cout << arr[i] << " ";
            }
            n--;
            cout << "n " << n;
            cout << endl;
            count++;
            cout << "count: " << count << endl;

            for(int i = 0; i<n;i++){
                if(arr[i]!=arr[i+1]){
                    minmoves(arr,n);
                }
            }

        }
        }
        }


int main(){
     int arr[100], n;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    minmoves(arr, n);

    
    return 0;


}