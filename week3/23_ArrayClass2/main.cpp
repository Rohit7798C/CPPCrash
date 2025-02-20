#include<iostream>
#include<algorithm>
using namespace std;

//Find unique number using Bitwise XOR.
// int findUniqueNumber(int arr[],int size){
//     int ans=0;

//     //to find the final answer, we need to XOR all the numbers in the array.

//     for(int i=0;i<size;i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

//Alternate method to find unique number using sorting.
// void findUniqueNumber(int arr[],int n){
//     sort(arr,arr+n);
    
//     for(int i=0;i<n;i+=2){
//         if(arr[i] != arr[i+1]){
//             cout<<arr[i]<<" ";
//             return;
//         }
//     }
//     cout<<arr[n-1]<<" ";
// }


//Alternate method to find unique number using comparison.
// void findUniqueNumberComparison(int arr[],int n){
//     int ans = arr[0];
//     for(int i=0;i<n;i++){
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count==1){
//             ans = arr[i];
//             break;
//         }
//     }
//     cout<<"The unique number is : "<<ans<< " ";
// }


void sortZeroOne(int arr[],int size){
    int zeroCount = 0,oneCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    cout<<"Zero Count : "<<zeroCount<< " "<<endl;
    cout<<"One Count : "<<oneCount<< " "<<endl;
    // int i=0;       //So here declaring i outside both loops, allows the value of i to change after completion of first loop.
    // for(;i<zeroCount;i++){
    //     arr[i] = 0;
    // }
    // //And here the 2nd loop starts with the updated value of i, i.e after printing of 0's.
    // for(;i<size;i++){
    //     arr[i] = 1;
    // }

    //Using fill function.
    fill(arr,arr+zeroCount,0);
    fill(arr+zeroCount,arr+size,1);
}

int main(){
    //*** IMP ***//
    //XORing any number with 0 gives the same number.
    //XORing any number with 1 flips the last digit, it makes even number odd and odd number even.

    //Q1. Find the unique number in an array.
    // int arr[] = {0,4,1,4,1};
    // int size = 5;

    // int ans = findUniqueNumber(arr,size);
    // cout<<"Unique number is : "<<ans<<endl;

    //Alternate Method.
    // int size,arr[] = {4,4,5,6,5,6,2};
    // size = 7;
    // cout<<"The unique number is : ";
    // findUniqueNumber(arr,size);


    //Alternate Method.
    // int size,arr[] = {4,4,5,6,5,6,2};
    // size = 7;
    // findUniqueNumberComparison(arr,size);

    
    //Q2. Sorting 0's and 1's in an array.
        //Soring 0's and 1's and 2's in an array (Dutch National Flag Problem).
        //Flipping all 0's and 1's in an array.

    int size,arr[100];
    cout<<"Enter the number of elements : ";
    cin>>size;

    for(int i=0;i<size;i++){
        cout<<"Enter the element at index-"<<i<<" : ";
        cin>>arr[i];
    }
    
    //Using in-built sort function
    sort(arr,arr+size);
    //Time Complexity : O(nlogn)

    //Function call
    //sortZeroOne(arr,size);
    //Time Complexity : O(n)

    //printing the array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}