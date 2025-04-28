// Searching 
// Types of searching 
// 1) Linear Search : a) Time Complexity : O(N)
//                    b) Space Complexity : O(1)
// 2) Binary Search : a) Time Complexity : O(log(N))
//                    b) Space Complexity : O(1)
// There is a need of Binary Search because,
// 1) "it has less time complexity than linear search".
// 2) Linear search requires n-comparisons for searching, while Binary seacrh requires only n/2.
// 3) Binary search is faster than Linear Search.
// 4) But Binary search will only work where the function is "monotonic", i.e. the elements should be always in either increasing order or decreasing order.

//** There are two types of problems in Binary Search **/
// 1) Classic.         2) Search Space.

// ** VVIMP ** //
// Conditions for applying "Binary Search".
// 1) If (arr[mid] == target){
//     return true;  
// }
// 2) If (target>arr[mid]){
//     //right mein jao
//     start = mid + 1;  
// }
// 3) If (target<arr[mid]){
//     //left mein jao
//     end = mid - 1;  
// }
// since we are applying the above same logic, for all the arrays, so the stopping condition will be,
// When array becomes invalid.
// "When start becomes greater than end".
// i.e., while(start<=end) => Chalna hai      // Valid Array
// i.e., if(start>end) => Rukna hai           // InValid Array



#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0,end = n-1;
    // int mid = (start+end)/2;
    //We can also write this mid inside the while loop
    while(start<=end){
        int mid = start + (end-start)/2;
        //We will be using this formula because the above formula may cause overflow.
        //Suppose we have start = INT_MAX, and end=1, and we are adding 1 into the maximum number, then it may go out of range of integer.
        if(nums[mid]==target){
            return mid;
        }
        if(target > nums[mid]){
            //right mein jao
            start = mid + 1;
        }
        if(target < nums[mid]){
            //left mein jao
            end = mid - 1;
        }
        //Since we have written the mid inside the while loop we have to remove 
        //the below mid updation condition.
        //Yeh mai bhul jata hu
        //mid = (start + end)/2;
    }
    //agar mai yahan tak pohoch gaya 
    //iska matlab element nahi mila
    //element not found -> return - 1;
    return -1;

    //the above code is called binary search.
}

int main(){
    vector<int>arr={1,4,7,10,22,333,554};
    int target;
    int ans = search(arr,target);

    // if "n" is the size of the array.
    // for 1st iteration -> n = n/2^0
    // for 2nd iteration -> n = n/2^1
    // for 3rd iteration -> n = n/2^2
    // for 4th iteration -> n = n/2^3
    // for 5th iteration -> n = n/2^4
    // for 6th iteration -> n = n/2^5
    // So,in general we can say that, for 'a'th itration we have 1 = n/(2)^a-1.
    // Because in the 'a'th iteration we found the element 
    // So, we can write it as n = 2^(a-1)
    // For simplicity we remove -1, we get n = 2^a.
    // Taking log base 2 on both sides, we get
    // log(n) base 2 = a;
    // So, iterating "a" times gives time complexity if O(a).
    // So, we can write that the complexity will be O(log(n)).
    return 0;
}