#include<iostream>
#include<vector>
using namespace std;

//Method-I : Brute Force Method
// int pivotIndex(vector<int>& nums) {
//     for(int i=0;i<nums.size();i++){
//         int leftSum = 0,rightSum = 0;
//         //left sum
//         for(int j=0;j<i;j++){
//             leftSum += nums[j];
//         }
    
//         //right sum
//         for(int j=i+1;j<nums.size();j++){
//             rightSum += nums[j];
//         }
//         if(leftSum == rightSum){
//             return i;
//         }
//     }
//     return -1;
// }

//Method-II : Prefix Sum Approach
int prefixSumApproach(vector<int> nums){
    vector<int>lSum(nums.size(),0);
    vector<int>rSum(nums.size(),0);

    //calculating lSum array (left Sum)
    for(int i=1;i<nums.size();i++){
        lSum[i] = lSum[i-1] + nums[i-1];
    }
    //calculating rSum array (right Sum)
    for(int i=nums.size()-2;i>=0;i--){
        rSum[i] = rSum[i+1] + nums[i+1];
    }
    //check karte hai
    for(int i=0;i<nums.size();i++){
        if(lSum[i] == rSum[i]){
            return i;
        }
    }
    return -1;
} 

int main(){
    vector<int>arr = {1,7,3,6,5,6};
    // int ans = pivotIndex(arr);
    int ans2 = prefixSumApproach(arr);
    cout<<ans2<<" ";
    return 0;
}
