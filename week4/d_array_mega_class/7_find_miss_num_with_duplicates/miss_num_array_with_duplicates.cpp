#include<bits/stdc++.h>

using namespace std;

//How to insert at the beginning of a vector.

// vector<int>v{1,2,3,4,5};
// v.insert(v.begin(),6);
// Here 6 is the value.

//Visited Method Algorithm
// 1) Treat nums[i] as index.
// 2) if(a[a[i]] > 0) make a[a[i]] * -1 (negative).

// int findingDuplicate(vector<int>&nums){
//     int n = nums.size();
//     int ans=-1;
//     for(int i = 1;i<=n;i++){
//         if(nums[nums[i]]<0){
//             ans = nums[i];
//         }
//         nums[nums[i]] *= -1;
//     }
//     return ans;
// }

int findingMissingNumber(vector<int>&nums){
    nums.insert(nums.begin(),737);
    for(int i = 1;i<nums.size();i++){
        int index = abs(nums[i]);
        if(nums[index]>0){
            nums[index]*=-1;
        }
    }
    for(int i = 1;i<nums.size();i++){
        if(nums[i]>0){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,3,3,4,5};
    // int ans = findingDuplicate(nums);
    // cout<<"The duplicate number is : "<<ans<<endl;

    //Finding the missing number.
    // vector<int>v = {1,3,5,3,4};
    // v.insert(v.begin(),737);
    // Now , random number 737 is placed at index 0,
    // And due to which
    // 1 -> 1
    // 3 -> 2 
    //Visiting with -1
    // for(int i = 1;i<v.size();i++){
    //     int index = abs(v[i]);
    //     if(v[index]>0){
    //         v[index] *= -1;
    //     }
    // }
    //Printing the entire array with one positive and all negative.
    // for(int i = 1;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // int missing = -1;
    // for(int i = 1;i<v.size();i++){
    //     if(v[i]>0){
    //         missing = i;
    //         break;
    //     }
    // }
    // cout<<missing<<endl;

    //Finding the missing number
    int ans = findingMissingNumber(nums);
    cout<<"The missing number is : "<<ans<<endl;
    return 0;
}