#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int secondLargest(vector<int>arr){
    int n = arr.size();
    
    if(n<2){
        return -1;
    }
    sort(arr.begin(),arr.end());
    
    if(arr[0] == arr[1]){
        for(int i=2;i<n;i++){
            if(arr[i]<arr[0]){
                return arr[i];
            }
        }
        return -1;
    }
    return arr[1];
}

int main(){
    vector<int>arr = {10,40,30};
    int ans = secondLargest(arr);
    cout<<"The second Largest element is : "<<ans;
    return 0;
}