#include<iostream>
#include<vector>
#include<limits.h>
#include<math.h>

using namespace std;

double maxSumAverage(vector<int>arr,int k){
    double maxSum = INT_MIN;
    int n=arr.size();
    int i = 0, j = k-1;
    
    if(arr.empty()){
        return -1;
    }
        
    while(j<n){
        double sum=0;
        for(int x=i;x<=j;x++){
            sum += arr[x];
        }
        maxSum = max(maxSum,sum);
        i++,j++;
    }
    double maxAvg = maxSum/k;
    return maxAvg;
}

int main(){
    vector<int>arr = {1,12,-5,-6,50,3};
    int k = 4;
    double ans = maxSumAverage(arr,k);
    cout<<"Max sum is "<<ans<<" ";
    return 0;
}