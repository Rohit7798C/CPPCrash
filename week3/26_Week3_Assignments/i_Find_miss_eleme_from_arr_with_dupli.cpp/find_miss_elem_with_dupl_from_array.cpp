#include<iostream>
#include<vector>

using namespace std;

void findMissingElement(vector<int>arr){
    //visited method
    // Time Complexity -> O(N)
    // Space Complexity -> O(1)

    int n = arr.size();
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        if(index>=1 && index<=n){
            if(arr[index-1]>0){
                arr[index-1] *= -1;
                //We are taking index-1 because elements are starting from 1 but indexing of an array starts from 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // all positive indexes are missing
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    //N - Size of Array
    //a[i] E [1,N]

    vector<int>arr = {1,3,5,3,4};
    findMissingElement(arr);
    // int ans = findMissingElement(arr);

    return 0;
}
