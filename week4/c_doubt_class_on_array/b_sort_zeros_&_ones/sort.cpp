//Q. Sorting 0's and 1's
//Sol1 : Sorting 
//Sol2 : Counting
//Sol3 : Two-pointer approach.

#include<iostream>
#include<vector>

using namespace std;

void sortingZerosAndOnes(vector<int>&arr){
    //Sol3 : Two-pointer approach.
    int n = arr.size();
    int l = 0, h = n-1;
    while(l<=h){
        if(arr[l] == 0){
            l++;
        }
        else if(arr[h] == 1){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
    }
}

int main(){
    vector<int>arr = {0,1,1,0,0,1,1,0,1};
    sortingZerosAndOnes(arr);
    // int n = arr.size();
    for(int a : arr){
        cout<<a<<" ";
    }
    return 0;
}