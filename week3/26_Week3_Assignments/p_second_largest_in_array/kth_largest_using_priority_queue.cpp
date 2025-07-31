// priority_queue for kth largest element in an array
#include<bits/stdc++.h>

using namespace std;

int kthLargestInArray(vector<int>&arr,int k){
    if(arr.empty()){
        return -1;
    }
    priority_queue<int, vector<int>, greater<int>>pq;
    // priority_queue itself is not a physical data structure like an array or a linked list. 
    // Instead, it's an adapter that takes an existing container (like vector or deque) and provides a specific interface to it – one where the "highest priority" element is always at the top.
    
    for(int i : arr){
        pq.push(i);
        if(pq.size() > k){
            pq.pop();
        }
    }
    return pq.top();
}

int main(){
    vector<int>arr = {1,9,5,6,4,11,7,8,10};
    int k=5;
    int ans = kthLargestInArray(arr,k);
    cout<<"The "<<k<<"th largest element in the array is : "<<ans;
    
    return 0;
}