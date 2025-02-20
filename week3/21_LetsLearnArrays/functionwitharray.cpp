#include<iostream>

using namespace std;
// Function with arrays.
// IMP : Always try to send the size of the array along with the array in a function.

// int solve(int arr[],int n){
//     //function definition
// }

// int main(){
//     int arr[5] = {0};
//     solve(arr,5);
//     return 0;
// }

//------------------------------------------------------------------------------------------------------------

// void print(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// void solve(int arr[],int size){
//     arr[0] = 50;
// }


// void solve1(int num[],int n){
//     for(int index=0;index<n;index++){
//         num[index] = num[index] + 10;
//     }
//     return;
// }


void solve2(int num[],int n){
    for(int index=0;index<n;index++){
        num[index] = num[index] * 10;
    }
    return;
}
int main(){
    // int arr[5] = {10,20,30,40,50};
    // int size = 5;
    // print(arr,size);


    // int arr[3] = {10,20,30};
    // int size = 3;
    // solve(arr ,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    // *** IMP *** //
    //Array here is never pass by value, it is always pass by reference.
    //Pass by reference means, actual value par kaam hot hai.
    //So, in the above function we are working on the actual array.
    //But for variable size, it is pass by value.
    //This is all because of pointers.
    

    // int arr[4] = {0};
    // int size = 4;
    // solve1(arr,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr1[] = {10,20,30,40,50};
    int size = 5;
    solve2(arr1,size);
    for(int index = 0;index<size;index++){
        cout<<arr1[index]<< " ";
    }
    return 0;
}