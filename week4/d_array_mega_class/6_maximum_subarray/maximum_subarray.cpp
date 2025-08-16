//SubArray : A contiguous non-empty sequence of elements within an Array.
#include<bits/stdc++.h>

using namespace std;

//Brute-Force method
int naive(vector<int>&nums){
    int ans = INT_MIN;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j = i;j<n;j++){
            sum = sum + nums[j];
            //Sabhi sub-arrays ka sum nikalega, with nums[i] as pivot.
            ans = max(sum, ans);
        }
    }
    return ans;
}

//Famous algorithm (Kadane Algorithm) for finding Maximum Sub-Arrays. (Time Complexity - O(N)).
// Iterate Karo -> Sum Karo -> Ans Update Karo -> Check if sum < 0 -> If yes, reset sum to 0.
//1) Iterate Karo 
//2) Sum = 0, ans = INT_MIN
//3) Update ans
//4) if sum < 0 update sum = 0

int maxSubArray(vector<int>&nums){
    int ans = INT_MIN;
    int sum = 0;
    for(int i = 0;i<nums.size();i++){
        int num = nums[i];
        sum = sum + num;
        ans = max(ans,sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int ans = maxSubArray(nums);
    cout<<ans<<endl;
    // int ans = naive(nums);
    // cout<<ans<<endl;
    return 0;
}