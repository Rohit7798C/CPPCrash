#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findDuplicate(vector<int>arr){
    int n = arr.size()-1;

    sort(arr.begin(),arr.end());
    int num;
    for(int i=0;i<n;i++){
        if(arr[i] == arr[i+1]){
            num = arr[i];
        }
    }
    return num;
}

int main(){
    vector<int>arr = {1,3,4,2,4,4,4};
    int ans = findDuplicate(arr);
    cout<<"The reapeated number is : "<<ans;
    return 0;
}
