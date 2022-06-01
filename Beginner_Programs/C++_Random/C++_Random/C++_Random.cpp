#include <iostream>
using namespace std;


struct Pair
{
    int max;
    int min;
};

Pair getMaxmin(int ar[], int n)
{
    int i;
    struct Pair minmax;

    if (n == 1)
        minmax.min = ar[0];
    minmax.max = ar[0];
    return minmax;

    if (ar[0] > ar[1]) {
        minmax.max = ar[0];
        minmax.min = ar[1];
    }
    else {
    minmax.max = ar[1];
    minmax.min = ar[0];
}
    for (i = 2; i < n; i++) {
        if (ar[i] > minmax.max) {
            minmax.max = ar[i];
        }
        else {
            minmax.min = ar[i];
        }
    }
    return minmax;

}


int main()
{
    int ar[] = { 2,4,6,8 };
    int n;

    cout << "enter size";
    cin >> n;
    cout << endl;
    struct Pair minmax = getMaxmin(ar, n);

        cout << "maximum element is : " << minmax.max << endl;
    cout << "minimum element is : " << minmax.min << endl;



}