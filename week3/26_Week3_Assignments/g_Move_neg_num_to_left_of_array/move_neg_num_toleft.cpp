#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//Using sort function

void sortingAllNumbers(vector<int>&arr){
    sort(arr.begin(),arr.end());
}

int main(){
    vector<int> arr = {1,2,-5,-4,3,-6};
    sortingAllNumbers(arr);
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}