#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>&arr){
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            oneCount++;
        }
        else if(arr[i]==2){
            twoCount++;
        }
    }
    for(int i=0;i<zeroCount;i++){
        arr[i] = 0;
    }
    for(int i=zeroCount;i<oneCount+zeroCount;i++){
        arr[i] = 1;
    }
    for(int i=oneCount+zeroCount;i<n;i++){
        arr[i] = 2;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColors(arr);

    return 0;
}