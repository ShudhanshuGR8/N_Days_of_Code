#include <iostream>
using namespace std;

int main(){
    // //Pattern-1
    // int i = 0;
    // int n;
    // cin >> n;
    // while(i<n){
    //      int j = 0;
    //     while(j<n){
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }


    // //Pattern - 2
    // int i =1;
    // int n;
    // cin >> n;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // } 


    // //pattern - 3
    // int i = 1;
    // int n;
    // cin >> n;
    // while(i <= n){
    //     int j = i;
    //     while(j<=n){
    //         cout << i  << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // } 


    // // Pattern - 4 ->//  1 1 1 1 1 1 1
    //                     // 2 2 2 2 2 2
    //                     //   3 3 3 3 3
    //                     //     4 4 4 4
    //                     //       5 5 5
    //                     //         6 6
    //                     //           7
    // int i = 1;
    // int n;
    // cin >> n;
    // while(i<=n){
    //     int j =1;
    //     while(j<=n){
    //         if(j>=i){
    //         cout << i << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //         j++;
    //     }
    //     cout << endl;
    //     i++;

    // }


// //Pattern - 5 -> 
// int i =1;
// int n;
// cin >> n;
// while (i <=n){
//     int j = 1;
//     while(j<=n){
//         cout << j << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


//Pattern - 6 ->

// int i =1;
// int n;
// cin >> n;
// while (i <=n){
    // int j = n;
    // while(j>0){
    //     cout << j << " ";
    //     j--;
    // }
    //OR
//     int j = 1;
//     while(j<=n){
//         cout << n-j+1 << " ";
//         j++;
//     }

//     cout << endl;
//     i++;
// }

// //Pattern - 7 ->
// int i = 1;
// int n;
// cin >> n;
// // while(i<=n){
// //     while(j<=n*i){
// //         cout << j << " ";
// //         j++;
// //     }
// //     cout << endl;
// //     i++;
// // }
// //OR
// int count = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout << count << " ";
//         count++;
//         j++;
//     }
//     cout << endl;
//     i++;
// }
//     return 0;


// //Pattern - 8 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = 1;
//     while(j<=i){
//         cout << "* ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


// //Pattern -> 9
// int i = 1;
// int n;
// cin >> n;
// while(i <= n){
//     int j = 1;
//     while(j <= i){
//         cout << i << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// // Pattern -> 10
// int i = 1;
// int n;
// int count = 1;
// cin >> n;
// while(i <= n){
//     int j =1;
//     while(j<=i){
//         cout << count << " ";
//         j++;
//         count++;
//     }
//     cout << endl;
//     i++;
// }

// // //Pattern - 11 -> 1 
// //                   2 3
// //                   3 4 5
// //                   4 5 6 7
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = 0;
//     while(j<i){
//         cout << i+j << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }
// //OR
// while(i<=n){
//     int count = i, j = 1;
//     while(j<=i){
//         cout << count << " ";
//         j++;
//         count++;
//     }
//     cout << endl;
//     i++;
// }

// // Pattern - 12 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = 0;
//     while(j<i){
//         cout << i - j << " ";
//         j++;
//     }
//     cout << endl;
//     i++;

// }


// //Pattern - 13 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = 1 ;
//     while(j<=n){
//         cout << char(j+'A'-1) << " "; //if we put i here then pattern will be AAA\nBBB\nCCC where as if put j here then pattern will be ABC\nABC\nABC
//         j++;
//     }
//     i++;
//     cout << endl;
// }

// //Pattern - 14 ->
// int i = 1;
// int n;
// cin >> n;
// int count = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout << char('A'+count-1)<< " ";
//         count++;
//         j++;
//     }
//     i++;
//     cout << endl;
// }


//Pattern - 15 ->
// int i = 1;
// int n;
// cin>>n;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout << char('A' + i + j - 2) << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// //Pattern - 16 ->
// int i = 1;
// int n;
// cin >> n;
// while(i <=n){
//     int j = 1;
//     while(j<=i){
//         cout << char('A'+j-1) << " "; //if we put i here we get the pattern A\nBB\bCCC where as if we put j here we get the pattern A\nAB\nABC.
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// //Pattern - 17 ->
// int i = 1;
// int n;
// cin >> n;
// int count = 1; 
// while(i <=n){
//     int j =1;
//     while(j<=i){
//         cout << char('A'+ count - 1) << " ";
//         j++;
//         count++;
//     }
//     cout << endl;
//     i++;
// }


// //Pattern - 18 ->
// int i = 1;
// int n;
// cin >> n; 
// while(i <= n){
//     int j =1;
//     while(j<=i){
//         cout << char('A'- i - 2 - j) << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }

// // //Pattern - 19 ->
// int i = 1;
// int n;
// cin >> n;
// // while(i<=n){
// //     int j =1;
// //     while(j<=i){
// //         cout << char('A' + 3 - i + j) << " ";
// //         j++;
// //     }
// //     cout << endl;
// //     i++;
// // }
// //OR
// while(i<=n){
//     char ch = 'A' + n -i;
//     int j = 1;
//     while(j<=i){
//         cout << ch << " ";
//         ch++;
//         j++;
//     }
//     i++;
//     cout << endl;
// }




// //Pattern - 20 ->
// int i =  1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = 1;
//     char ch = 'A' + i - 1;
//     while(j<=n){
//         cout << ch << " ";
//         j++;
//         ch++;
//     }
//     i++;
//     cout << endl;
// }


//Pattern - 21 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int space = n - i;
//     while(space > 0){
//         cout << "  ";
//         space--;
//     }
//     int j = 1;
//     while(j<=i){
//         cout << "* ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }
//OR 
// while(i <= n){
//     int j = 1;
//     while(j<=n){
//         if(i+j>n){
//             cout << "* ";
//         }
//         else{
//             cout << "  ";
//         }
//         j++;
//     }
//     i++;
//     cout << endl;
// }

// //Pattern - 22 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = n - i + 1;
//     while(j>0){
//         cout << "* ";
//         j--;
//     }
//     i++;
//     cout << endl;
// }


// //Pattern - 23 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         if(i>j){
//             cout << "  "; 
//         }
//         else{
//             cout << "* ";
//         }
//         j++;
//     }
//     i++;
//     cout << endl;
// }
//OR
// int i = 1;
// int n;
// cin >> n;
// while(i <= n){
//     int space = i - 1;
//     while(space>0)
//     {
//         cout << "  ";
//         space--;
//     }
//     int j  = n - i + 1;
//     while(j>0){
//         cout << "* ";
//         j--;
//     }
//     i++;
//     cout << endl;
// }


// //Pattern - 24 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int space = i - 1;
//     while(space > 0){
//         cout << "  ";
//         space--; 
//     }
//     int j = n - i + 1;
//     while(j>0){
//         cout << i << " ";
//         j--;
//     }
//     i++;
//     cout << endl;

// }


// //Pattern - 25 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int space = n - i;
//     while(space > 0){
//         cout << "  ";
//         space--;
//     }
//     int j = i;
//     while(j>0){
//         cout << i << " ";
//         j--;
//     }
//     i++;
//     cout << endl;
// }



// //Pattern - 26 ->
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int space = i - 1;
//     while(space > 0){
//         cout << "  ";
//         space--;
//     }
//     int j = n - i + 1;
//     int count = 0;
//     while(j>0){
//         cout << i+count << " ";
//         j--;
//         count++;
//     }
//     i++;
//     cout << endl;
// }


// //Pattern - 27 ->
// int i = 1;
// int n;
// int count = 1;
// cin >> n;
// while(i <= n){
//     int space = n - i;
//     while(space > 0){
//         cout << "  ";
//         space--;
//     }
//     int j = i;
//     while(j>0){
//         cout << count << " ";
//         count++;
//         j--;
//     }
//     i++;
//     cout << endl;
// }

// //Pattern - 28->       1
                     // 1 2 1
                    //1 2 3 2 1
                //  1 2 3 4 3 2 1
// int i = 1;
// int n;
// cin >> n;
// while(i<=n){
//     int space = n - i;
//     while(space>0){
//         cout << "  ";
//         space--;
//     }
//     int j = (2 * i) - 1;
//     int count = 1;
//     while(j > 0){
//         if(count<=i){
//             cout << count << " ";
//             count++;
//         }
//         else{
//             cout << j << " ";
//             count++;
//         }
//         j--;
//     } 
//     i++;
//     cout << endl;
// }
//OR

// int i = 1;
// int n;
// cin >> n;
// while(i<=n){

//     //Print spaces i.e the 1st Triangle
//     int space = n - i;
//     while(space > 0){
//         cout << "  ";
//         space--;
//     }
//     //Print 2nd Traingle
//     int j = 1;
//     while(j<=i){
//         cout << j << " ";
//         j++;
//     }
//     //Print 3rd Triangle
//     int k = i - 1;
//     while(k){
//         cout << k << " ";
//         k--;
//     }
//     i++;
//     cout << endl;
// }


//Pattern Dabangg ->1 2 3 4 5 5 4 3 2 1 
                //  1 2 3 4 * * 4 3 2 1
                //  1 2 3 * * * * 3 2 1
                //  1 2 * * * * * * 2 1
                //  1 * * * * * * * * 1
// int i = 1;
// int n;
// cin >> n;
// //Printing the 1st Triangle
// while(i<=n){
//     int j = 1;
//     while(j<=n-i+1){
//         cout << j << " ";
//         j++;
//     }
//     //Printing the 2nd Triangle
//     int k = 1;
//     while(k<=(i*2)-2){
//             cout << "* ";
//             k++;
//     }

//     //Printing the 3rd Triangle
//     int l = n - i + 1;
//     while(l){
//         cout << l << " ";
//         l--;
//     }
// i++;
// cout << endl;

// }

}