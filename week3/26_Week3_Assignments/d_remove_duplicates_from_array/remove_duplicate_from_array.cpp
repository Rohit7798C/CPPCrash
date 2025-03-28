#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int removeDuplicatesFromArray(vector<int>arr){
    sort(arr.begin(),arr.end());
    int i=0,j=1;
    while(j<arr.size()){
        if(arr[i] == arr[j]){
            j++;
        }
        else{
            // i++;
            arr[++i] = arr[j++];
            // j++;
        }
    }
    return i+1;
}

int main(){
    vector<int>arr = {0,1,2,3,0,4,5,3,2,1};
    int ans = removeDuplicatesFromArray(arr);
    cout<<"The number of Unique elements are : "<<ans<<" ";
    return 0;
}