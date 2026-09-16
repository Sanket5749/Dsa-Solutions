#include <iostream>
#include <algorithm>
using namespace std;

void solve(int arr[], int n) {
    int i = 0;
    int s = 0;
    int e = n - 1;

    while (i <= e) {
        if (arr[i] == 0) {
            swap(arr[s], arr[i]);
            s++;
            i++;
        }
        else if (arr[i] == 1) {
            i++;
        }
        else {
            swap(arr[i], arr[e]);
            e--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    solve(arr, n);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}