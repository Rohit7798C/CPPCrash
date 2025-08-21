//Questions on Binary Search
//VIMP : find the pivot index.
//Easy version : find the peak.

#include<bits/stdc++.h>

using namespace std;
//Time Complexity : O(N)
int peakIndexInArrayUsingMaxElement(vector<int>&nums){
    int maxElement = INT_MIN;
    int maxIndex = -1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxElement){
            maxElement = nums[i];
            maxIndex = i;
        }
    }
    return maxIndex;
} 

                                                                 //                   Neither moving left or right, it is the peak element
                                                                 //                                   end = mid
//Time Complexity : O(logN) => Binary Search                     //                                      Peak
// int peakIndexInMountainArray(vector<int>&arr){                   //                                       /\ 
//     int n = arr.size();                                          //                                      /  \  
//     int start = 0, end = n - 1;                                  //            A Side                   /    \                 B Side
//     while(start<end){                                            // (always arr[mid] < arr[mid + 1])   /      \   (always arr[mid-1] > arr[mid]) 
//         int mid = start + (end - start)/2;                       //     (Always move to right)        /        \      (Always move to left)  
//         if(arr[mid]<arr[mid + 1]){                               //         start = mid + 1          /          \          end = mid - 1
//             start = mid + 1;                                     //  (we are starting from here) -> /            \ <- (we are starting from here)
//         }
//         else{
//             end = mid;
//             //Yahan agar hum end = mid - 1 karenge toh hum peak value miss kar denge.
//             //Kyunki agar humara mid pointer peak value par aa jata hai toh bhi hum (mid - 1) hi karenge.
//             //Par mid pointer, peak value ke upar aane par humne kahin par bhi shift nahi karna chahiye, kyunki humein peak value mil chuki hai.
//             //Isiliye hum yaha par end = mid, use kar rahe hai, taki saari value check ho.
// 
//             //Infinite loop condition
//             //agar hum start = mid and end = mid karte hai, aur while ki condition while(start<=end) karte hai
//             //toh yeh ek infinite loop mein jaa sakta hai.
//             //Isiliye jab bhi hum aisa karte hai toh humne while(start<end) use karna chahiye, taki infinite loop ka problem na ho.
//         }
//     }
//     return start;
// }


//Time Complexity : O(logN) (As we are using Binary Search).
int peakValueIndexInArray(vector<int>&arr){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            //mai line A par hu
            // Move right
            start = mid + 1;
        }
        else{
           //Ya toh mai line B par hu
           //ya toh mai ans par hi hu
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return end;
    //We can return either start, end or mid because all are at the same position.
}

int main(){
    vector<int>arr = {0,9,10,8,7,6,5,2};
    // int ans = peakIndexInArrayUsingMaxElement(arr);
    // int ans = peakIndexInMountainArray(arr);
    int ans = peakValueIndexInArray(arr);
    cout<<"The index of peak element is : "<<ans<<endl;
    return 0;
}