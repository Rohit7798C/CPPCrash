#include<bits/stdc++.h>

using namespace std;
/*
           int arr[]
void solve(int *arr,int size){
    //Here we can see that, whenever we pass an array in a function, the entire array is not sent, rather only a pointer is sent.
    //So, here even if we replace int arr[] with int *arr, it will work same
    //This is because, a pointer pointing to the start of the array is passed rather than the entire array.
    //so, finally it prints the size of the pointer, rather than size of array
    cout<<sizeof(arr)<<endl;       //Output : 4
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;

    //This 'arr' is 'passed' as a 'pointer' into the function.
    //It is 'received' as a 'pointer' into the function.
    solve(arr,size);
    //Final VIMP Point : Whenever an array is passed into a function, it is passed in a 'pointer format'.
    return 0;
}
*/



//This below is the explanation for 'Why arrays are always passed by reference into the functions'.
//Because they are always passed as pointers and not as a normal array.
//It can be written as,
//        int *arr
//           | 
// int solve(int arr[],int size){
//     arr[0] = 1;
//     arr[1] = 2;
//     arr[2] = 20;
// }

int main(){
    int arr[] = {10,20,30};
    // int n = 3;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    // solve(arr,n);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    return 0;
}