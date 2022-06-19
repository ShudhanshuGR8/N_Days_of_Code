#include <iostream>
using namespace std;




int main(){
    int n;
    cin >> n;
    int arr[100][100];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //     cin >> arr[i][j];
    // }
    // }
    
    int m = 0;
    for(int i=0; m<n; i++){
        for(int j=0; j<=m; j++){
        if(j>=1 && m>1){
            arr[j][m] = arr[j-1][m-1] + arr[j][m-1];
            cout << "arr[" <<j <<"]["<<m << "]" << arr[j][m] << endl;
            cout << "j " << j << "m " << m << endl;
        }
        else{
            cout << "j " << j <<"m " << m << endl;
            arr[j][m] = 1;
            cout << "arr[" <<j <<"]["<<m << "]" << arr[j][m] << endl;
        }
    }
    m++;
    }

int z = 0;
for(int i=0; i<n; i++){
        for(int j=0; j<=z; j++){
        cout << arr[j][z] << " ";
    }
    z++;
    cout << endl;
    }
    

    return 0;
}