//For finding the missing number in the array, we can use the following methods:
//1) Using bitwise XOR.
//2) Finding the difference of the sum of the elements in the array and sum of the elements in the range.
//3) Using Binary Search.

//Using Binary Search.
//For using Binary search, firstly we have to sort all the elements
//But time complexity of Sorting function is O(nlog(n)).


// There are two conditions to find the missing number:
// Here 5 is the missing number.
// _________________________________
// |_0_|_1_|_2_|_3_|_4_|_6_|_7_|_8_|
//   0   1   2   3  |^|  5   6   7
//                  mid
// 1)When mid is at 4
// if(arr[mid+1] - arr[mid] != 1){
//     return arr[mid] + 1;
// }

// _________________________________
// |_0_|_1_|_2_|_3_|_4_|_6_|_7_|_8_|
//   0   1   2   3   4  |^|  6   7
//                      mid
// 2)When mid is at 6
// if(arr[mid] - arr[mid-1] != 1){
//     return arr[mid] - 1;
// }


#include<bits/stdc++.h>

using namespace std;

int findMissingNum(vector<int>&arr){
    int n = arr.size();
    int start = 0, end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == mid + 1){
            start = mid + 1;
        }
        else{
            ans = arr[mid] - 1;
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr = {1,2,3,5,6,7,8};
    int ans = findMissingNum(arr);
    cout<<"The Missing number is : "<<ans;
    return 0;
}

