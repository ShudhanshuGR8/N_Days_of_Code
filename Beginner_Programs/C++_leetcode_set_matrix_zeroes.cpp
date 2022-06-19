#include <iostream>
using namespace std;

void set_zero_i(int arr[][100], int m, int n, int x){
            for(int j = 0; j < m; j++ ){
                        arr[x][j]=0;
            }
}

void set_zero_j(int arr[][100], int m, int n, int x){
        for(int i = 0; i < n; i++){
                        arr[i][x]=0;
            }
}




int main(){
    int m,n;
    cin >> m >> n;
    int arr[100][100];

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int arr_d[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            arr_d[i][j] = arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j]==0){
                set_zero_i(arr_d, m, n, i);
                set_zero_j(arr_d, m, n, j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            cout << arr_d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}