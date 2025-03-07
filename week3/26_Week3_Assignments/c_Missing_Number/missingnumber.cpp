#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Method-I : Using Nested Loops 
// int findMissingNumber(vector<int>nums){ 
//     for(int i=0;i<=nums.size();i++){
//         bool found = false;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j] == i){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found){
//             return i;
//         }
//     }
//     return -1;
// }
//Time Complexity : O(N^2)

//Method-II : Sorting Method.
// int sortingMethod(vector<int>arr){
//     int n = arr.size();
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<n;i++){
//         if(i == arr[i]){
//             continue;
//         }
//         else{
//             return i;
//         }
//     }
//     return n;
// }
//Time Complexity : O(N) + O(NlogN) = O(NlogN)

//Method-II : Using BIT-wise XOR Method.
// int XORMethod(vector<int>arr){
//     int ans = 0;      //initializing ans with 0 because XORing any number with 0 gives that number only.
//     //Step-I : XOR all values of array
//     for(int i=0;i<arr.size();i++){
//         ans = ans ^ arr[i];
//     }
//     //Step-I : XOR all values of range [0,N]
//     for(int i=0;i<=arr.size();i++){
//         ans = ans ^ i;
//     }
//     return ans;
// }

//Method-II : Using Bitwise XOR
// Step-I : XOR all nums[i] values
// Step-II : XOR all range items.


int main(){
    vector<int>arr = {3,0,1};
    
    // int ans1 = findMissingNumber(arr);
    // cout<<ans1<<" ";

    // int ans2 = sortingMethod(arr);
    // cout<<ans2<<" ";

    // int ans3 = XORMethod(arr);
    // cout<<ans3 << " ";
    
    return 0;
    
}