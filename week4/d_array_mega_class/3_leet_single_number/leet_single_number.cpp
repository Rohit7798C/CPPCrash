#include<bits/stdc++.h>

using namespace std;

//printing after every insertion. 
void printMap(unordered_map<int,int>&freqMap){
    unordered_map<int,int>::iterator it;
    cout<<"----Map has below things----"<<endl;
    for(it = freqMap.begin();it!=freqMap.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}

int singleNumber(vector<int>&nums){
    //freq table
    unordered_map<int,int>freqMap;
    
    //Add frequencies to the map
    for(int i=0;i<nums.size();i++){
        int num = nums[i];
        freqMap[num] = freqMap[num] + 1;
        printMap(freqMap);
    }
    unordered_map<int,int>:: iterator it;
    int ans;
    for(it = freqMap.begin();it!=freqMap.end();it++){
        int key = it->first;
        int freq = it->second;
        if(freq == 1){
            ans = key;
            break;
        }
        // cout<<key<<" "<<freq<<" "<<endl;
    }
    return ans;
}

int main(){
    vector<int>nums = {1,1,2,3,3,4,4};
    int ans = singleNumber(nums);
    cout<<ans<<endl;
    return 0;
}