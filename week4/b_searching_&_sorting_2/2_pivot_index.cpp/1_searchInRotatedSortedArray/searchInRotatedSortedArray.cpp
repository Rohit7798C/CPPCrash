//Finding the pivot element from a Sorted and Rotated Array.
//Further version of finding the peak element.
#include<bits/stdc++.h>

using namespace std;

int pivotIndexFromArray(vector<int>&arr){
    int n = arr.size();
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    int ansIndex = -1;
    while(start<=end){
        if(arr[mid]>arr[mid + 1]){
            return mid;
        }
        if(arr[mid]<arr[mid - 1]){
            return mid - 1;
        }
        //Kab left or Kab right
        //Hume yeh pata hai ki, yeh ek rotated array hai aur iska pehela element last se hi rotate ho kar aaya hai.
        //(50|60|70|10|20|30|40), 50 rotate ho kar aage gaya hai.
        //Toh isiliye 50 hamesha B part ke saare elements se bada rahega.
        //Toh hum B part ke elements ko array ke first element 50 se compare karke pata kar sakte hai ki, humein left jana hai ki right.
        if(arr[start] > arr[mid]){      //Matlab hum line B par hai.
            end = mid - 1;
        }
        else{
            //right
            start = mid;
        }
    }
}

int main(){
    vector<int>arr = {9,8,7,10,3,2,1};
    int ans = pivotIndexFromArray(arr);
    return 0;
}






