#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>nums, int target, vector<int>&ans){
    int n = nums.size();
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
}

int main(){
    vector<int>nums = {3,2,4};
    int target = 6;
    vector<int>ans;
    solve(nums,target,ans);
    for(auto i : ans){
        cout << i << " ";
    }
}