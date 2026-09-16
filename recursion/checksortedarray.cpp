#include <iostream>
using namespace std;

bool csa(int arr[], int n){
    if(n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    return csa(arr+1,n-1);
}

int main(){
    int arr[] = {1,3,20,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if(csa(arr, n)){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not Sorted" << endl;
    }
}