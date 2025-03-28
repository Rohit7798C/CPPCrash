// Method-II : Sorting and Swapping
// Time Complexity -> O(N)
// Space Complexity -> O(1)
#include<iostream>
#include<vector>

using namespace std;

void findMissingElement(vector<int>arr){
    int i=0, n = arr.size();
    while(i<n){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1<<" ";
        }
    }
}

int main(){
    vector<int>arr = {1,3,5,4,3};
    findMissingElement(arr);
    return 0;
}