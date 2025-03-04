#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool keyValueFunction(vector<int>arr,int target){


    //When we were using two for-loops , the time complexity was O(N^2).
    //The below code's time complexity is O(N).
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int low=0,high = n-1;
    while(low<high){
        int sum = arr[low] + arr[high];
        if(sum == target){
            return true;
        }
        //If sum is greater than target, it means , current pair is too large,
        //we have to move the high index to left to consider smaller pair.
        else if(sum>target){
            high--;
        }
        //If sum is smaller than target, it means , current pair is too small,
        //we have to move the low index to right to consider larger pair.
        else{
            low++;
        }
    }
    return false;
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int target = 7;
    bool ans = keyValueFunction(arr,target);
    if(ans){
        cout<<"Pair Found!";
    }
    else{
        cout<<"Pair Not found!!";
    }
    return 0;
}