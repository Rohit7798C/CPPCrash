//Q1. What is STL in C++?
//Ans: The Standard Template Library (STL) provides a collection of template classes and functions that offer common data structures and algorithms to make programming more efficient and convenient.

//Q2. What is a Vector?
//Ans: A vector in C++ is a dynamic array that can grow or shrink in size, making it a versatile & efficient data structure for storing & manipulating sequences of elements.

//Static memory allocation :-> int arr[5];   (Size of array always remains the same).
//Dynamic memory allocation :-> (Size of array changes on runtime).
//               int n;
//               cin>>n;
//               int *arr = new int [n];

//----------------------------------------------------------------------------------------------------------------------------------------------------------------

#include<iostream>

using namespace std;

void fun(int arr[],int n){
    cout<<"Array elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    //static memory allocation of array
    //int arr[5] = {1,2,3,4,5};
    //fun(arr,5);

    //Dynamic memory allocation of array.
    int n;
    cin>>n;
    int *arr = new int[n];    //Each element would be 0 or garbage initially.
    //taking n elements as input and inserting in array.
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;
    }  //inserting elements from 0-index to 4-index.

    //let me try to insert more items
    //inserting elements from 5-index to 14-index (It gives error).
    arr[n] = 80;

    for(int i=0;i<10;i++){
        arr[n+i] = 80;
    }
    fun(arr,n);

    return 0;
}