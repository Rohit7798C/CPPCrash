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

int main(){
    vector<int>arr = {1,12,-5,-6,50,3};
    int k = 4;
    double ans = slidingWindow(arr,k);
    cout<<"The maximum average subarray of the array is : "<<ans;

    return 0;
}