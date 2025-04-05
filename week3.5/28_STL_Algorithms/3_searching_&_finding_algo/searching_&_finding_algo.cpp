// Searching And Finding Algorithm

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    // All below functions have a time complexity of O(log(N)).
    vector<int>arr;
    // When we are dealing with binary search, the data in the array should be monotonic(Sorted).
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    //1) binary_search() : Checks if a value exists in a sorted range.
    // Binary search is an Optimized searching algorithm
    // Searching is done in O(log(N)) time, but the only condition is that the data in array should be monotonic (sorted).
    // int target = 40;
    // bool it = binary_search(arr.begin(),arr.end(),target);
    // // It returns a boolean value.
    // cout<<it<< " "<<endl;

     
        

    //2) lower_bound() : Finds the first element greater than or equal to a value in a sorted range.
    // If a particular element is not present in the sorted array, then it will return an iterator of the element which is just greater than that element.
    // int target = 35;
    // auto it = lower_bound(arr.begin(),arr.end(),target);
    // cout<<*it<<endl;                    //Output : 40
    //because, here 40 is just greater than 35. 
    



    //3) upper_bound() : Finds the first element greater than a value in a sorted range.
    // Irrespective of whether the element is present or not in the array, upper_bound() will always return the element just greater than the target element.
    // Here, even if 40 is present, it will give 50 as output.
    // int target = 40;
    // auto it = upper_bound(arr.begin(),arr.end(),target);
    // cout<<*it<<" "<<endl;                 //Output : 50
    

    //4) equal_range() : Finds a range of elements equal to a value in a sorted range.
    // Homework
    return 0;
}