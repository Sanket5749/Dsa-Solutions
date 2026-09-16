#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[] = {2,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i : arr) {
        sum += i;
    }
    int e = n*(n-1);
    int a = sum;
    cout << e-a << endl;

    return 0;
}