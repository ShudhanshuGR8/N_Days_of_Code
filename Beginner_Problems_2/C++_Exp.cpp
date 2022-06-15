#include<iostream>
#define N 4
using namespace std;


int AreSame(int a[N][N], int b[N][N])
{   
    int x = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                return 0;
            }
        }
    }
    return 1;

}

int main()
{
    //int N=4;
  int a[N][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   int b[N][N]={{1,2,3,4},{6,5,7,8},{9,10,11,12},{13,14,15,16}};

if(AreSame(a,b))
{
    cout<<"matrix are identical";

}
else
    cout<<"matrix are not identical";


  return 0;
}