#include <iostream>
#include <vector>
using namespace std;

void rotateLeft(vector<int>&nums, int n, int k){
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n-1; j++){
           swap(nums[j], nums[j+1]);
        }
    }
}
void rotateRight(vector<int>&nums, int n, int k){
    for(int i = 0; i < k; i++){
        for(int j = n-1; j > 0; j--){
           swap(nums[j], nums[j-1]);
        }
    }
}

int main(){
    vector<int>nums = {3,2,4,5,6};
    int n = nums.size();
    int k = n;
    k %= n;
    rotateLeft(nums,n,k);
    // rotateRight(nums,n,k);
    for(auto i : nums){
        cout << i << " ";
    }
}