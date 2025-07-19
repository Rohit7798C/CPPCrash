//Method-II -> Sliding Window Method

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

double slidingWindow(vector<int>arr,int k){
    int sum = 0,i=0, j=k-1;
    int maxSum = INT_MIN,n = arr.size();
    if(arr.empty()){
        return 0;
    }
    for(int x = i;x<=j;x++){
        sum += arr[x];
    }
    maxSum = max(maxSum,sum);
    j++;
    while(j<n){
        sum -= arr[i++];
        sum += arr[j++];
        maxSum = max(maxSum,sum);
    }
    double maxAvg = maxSum /(double)k;
    return maxAvg;
}

double maxSubArray(vector<int>nums,int k){
    if(nums.empty()){
        return -1.0;
    }
    if(k<=0 || k>nums.size()){
        return 0.0;
    }
    int i = 0, j = k-1;
    double sum = 0.0;
    double maxSum = INT_MIN;
    for(int x = i;x<=j;x++){
        sum+=nums[x];
    }
    j++;
    while(j<nums.size()){
        sum -= nums[i];
        i++;
        sum += nums[j];
        j++;
        maxSum = max(maxSum,sum);
    }
    double maxAvg = maxSum/(double)k;
    return maxAvg;
}

int main(){
    vector<int>arr = {1,12,-5,-6,50,3};
    int k = 4;
    double ans = slidingWindow(arr,k);
    cout<<"The maximum average subarray of the array is : "<<ans;

    return 0;
}
