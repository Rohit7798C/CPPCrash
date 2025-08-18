//Questions on Binary Search
//VIMP : find the pivot index.
//Easy version : find the peak.

#include<bits/stdc++.h>

using namespace std;
//Time Complexity : O(N)
int peakIndexInArrayUsingMaxElement(vector<int>&nums){
    int maxElement = INT_MIN;
    int maxIndex = -1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxElement){
            maxElement = nums[i];
            maxIndex = i;
        }
    }
    return maxIndex;
} 
