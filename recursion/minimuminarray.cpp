#include <iostream>
#include <algorithm>
using namespace std;

int ma(int arr[], int n){
    if(n == 1){
        return arr[0];
    }
    return min(arr[n-1],ma(arr,n-1));
}

int main(){
    int arr[] = {13,4,3,20,34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = ma(arr, n);
    cout << m << endl;
}