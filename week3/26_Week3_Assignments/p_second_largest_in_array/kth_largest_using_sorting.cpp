//Using sort (Simple but less efficient for large k)

#include<bits/stdc++.h>

using namespace std;

int kthLargestInArray(vector<int>&arr,int k){
    if(arr.empty()){
        return -1;
    }
    sort(arr.rbegin(),arr.rend());
    return arr[k-1];
}

int main(){
    vector<int>arr = {1,9,5,6,4,11,7,8,10};
    int k=5;
    int ans = kthLargestInArray(arr,k);
    cout<<"The "<<k<<"th largest element in the array is : "<<ans;
    
    return 0;
}