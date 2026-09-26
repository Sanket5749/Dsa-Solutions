#include <iostream>
using namespace std;

bool csa(int arr[], int n, int idx){
    if(idx >= n){
        return true;
    }
    if(arr[idx] < arr[idx-1]){
        return false;
    }
    else{
        return csa(arr,n,idx+1);
    }
}

int main(){
    int arr[] = {1,30,20,30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = 1;
    if(csa(arr, n, idx)){
        cout << "Sorted" << endl;
    }
    else{
        cout << "Not Sorted" << endl;
    }
}