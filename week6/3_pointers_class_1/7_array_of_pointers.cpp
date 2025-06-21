#include<bits/stdc++.h>

using namespace std;

int main(){
    //It is an array of pointers, where each element is a pointer.
    int *arr[3];
    int nums[3] = {1,2,3};
    
    //assigning pointers to elements in the array of pointers
    arr[0] = &nums[0];
    arr[1] = &nums[1];
    arr[2] = &nums[2];

    //accessing elements using array notation
    cout<<*arr[0]<<endl;
    cout<<*arr[1]<<endl;
    cout<<*arr[2]<<endl;
    
    //pointer to int (points to the first element of nums).
    int *ptr = nums;
    //accessing elements using pointer notation
    cout<<*ptr<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+2)<<endl;

    int nums2[10] = {1,2,3,4,5,6,7,8,9,10};
    //pointer to an array of 10 integers.
    int (*ptr2)[10] = &nums2;

    // (*ptr)[10]: The parentheses () around *ptr are crucial because they group *ptr together, indicating that it's a pointer. 
    // Then, [10] immediately following (*ptr) specifies that what *ptr points to is an array of size 10.
    // So, int (*ptr)[10] literally reads as:
    //         "ptr is a pointer to an array of 10 integers."

    //  accessing elements of the array using pointer notation.
    cout<<(*ptr2)[0]<<endl;
    cout<<(*ptr2)[1]<<endl;
    cout<<(*ptr2)[2]<<endl;

    return 0;
}