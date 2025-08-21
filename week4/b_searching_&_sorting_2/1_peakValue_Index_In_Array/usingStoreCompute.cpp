#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(logN) (As we are using Binary Search with Store and Compute method).
int peakValueIndexInArrayUsingStoreCompute(vector<int>&arr){
    int n = arr.size();
    int start = 0, end = n - 1;
    int ansIndex = -1;
    
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid]<arr[mid + 1]){
            start = mid + 1;
        }
        else{ 
            //May or may not be
            ansIndex = mid;    //Storing
            end = mid - 1;     //Computing
        }
        mid = start + (end - start)/2;
    }
    return ansIndex;
}

int main(){
    vector<int>arr = {0,10,5,2};
    int ans = peakValueIndexInArrayUsingStoreCompute(arr);
    cout<<"the index of peak value in the array is : "<<ans<<endl;
    return 0;
}