// Visited Solution

#include<iostream>
#include<vector>

using namespace std;

int findDuplicate(vector<int>arr){
    int ans = -1, n = arr.size();
    for(int i=0;i<n;i++){
        int index = abs(arr[i]);
        
        //already visited?
        if(arr[index]<0){
            ans = index;
            break;
        }
        //visited mark
        arr[index] *= -1;
    }
    return ans;
}

int main(){
    vector<int>arr={1,3,4,2,2};
    int ans = findDuplicate(arr);
    cout<<"The ans is "<<ans;
    return 0;
}