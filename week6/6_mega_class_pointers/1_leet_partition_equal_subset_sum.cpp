#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>&nums,int target,int i){
    int n = nums.size();
    if(target<0 || i == n){
        return false;
    }
    if(target == 0){
        return true;
    }

    bool inc = solve(nums, target - nums[i],i+1);
    bool exc = solve(nums, target,i+1);

    return inc || exc;
}

bool canPartition(vector<int>& nums){
    int sum = accumulate(nums.begin(),nums.end(),0);
    if(sum%2 != 0){
        return false; 
    }
    int target = sum >> 1;
    return solve(nums, target, 0);
}
int main(){
    vector<int>arr = {1,5,11,5};
    bool ans = canPartition(arr);
    if(ans){
        cout<<"Yes we can partition into two!";
    }
    else{
        cout<<"NO we can't partition!";
    }
}