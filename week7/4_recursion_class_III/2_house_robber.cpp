#include<bits/stdc++.h>

using namespace std;

int sumOfMoney(vector<int>& arr,int n,int index){
    //base case
    if(index >= n){
        return 0;
    }
    //include
    int includeAns = arr[index] + sumOfMoney(arr,n,index+2);
    //exclude
    int excludeAns = 0 + sumOfMoney(arr,n,index+1);
    int finalAns = max(includeAns,excludeAns);
    return finalAns;
}

int main(){
    vector<int>arr = {1,2,3,1};
    int index = 0;
    int n = arr.size();
    int ans = sumOfMoney(arr,n,index);
    cout<<"The total amount of money is : "<<ans;
    return 0;
}