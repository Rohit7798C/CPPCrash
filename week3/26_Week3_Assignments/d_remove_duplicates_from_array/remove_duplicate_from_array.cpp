#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int countNumberOfUniqueElements(vector<int>arr){
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

vector<int>removeDuplicates(vector<int>nums){
    vector<int>ans;
    if(nums.empty()){
        return ans;
    }
    sort(nums.begin(),nums.end());
    ans.push_back(nums[0]);
    for(int i = 1;i<nums.size();i++){
        if(nums[i] != nums[i-1]){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {0,1,2,3,0,4,5,3,2,1};
    int ans = countNumberOfUniqueElements(arr);
    cout<<"The number of Unique elements are : "<<ans<<" ";
    return 0;
}
