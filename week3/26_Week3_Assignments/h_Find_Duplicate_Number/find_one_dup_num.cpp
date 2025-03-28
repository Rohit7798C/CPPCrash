#include<iostream>
#include<vector>

using namespace std;

int findDuplicateNumber(vector<int>arr){
    int n = arr.size()-1;
    int ans=0;
    for(int i=0;i<=n;i++){
        ans = ans ^ arr[i];
    }
    for(int i=1;i<=n;i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    vector<int>arr= {1,3,4,2,2};
    int num = findDuplicateNumber(arr);
    cout<<"The repeated number is : "<<num;
    return 0;
}
