// Dutch National Flag algorithm
// Time Complexity :- O(N)
// Space Complexity :- O(1)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void moveNegToLeft(vector<int>& nums){
    int n = nums.size();
    int l=0, h = n-1;

    while(l<h){
        if(nums[l]<0){
            l++;
        }
        else if(nums[h]>0){
            h--;
        }
        else{
            swap(nums[l],nums[h]);
            l++;
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int>nums={1,2,-3,4,-5,6};
    moveNegToLeft(nums);
    return 0;
}