#include<bits/stdc++.h>

using namespace std;

int kthLargestElement(vector<int>&arr,int k){
    nth_element(arr.begin(),arr.begin() + (arr.size() - k), arr.end());
    return arr[arr.size() - k];
}

int main(){
    vector<int>arr={9,1,4,2,5,10,3,8}; 
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    int ans = kthLargestElement(arr,k);
    cout<<"The "<<k<<"th largest element is : "<<ans<<endl;
    return 0;
}