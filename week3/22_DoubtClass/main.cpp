//Both Stack and Heap are part of the RAM.
//Stack is used for storing only small variables or local variables of the function.
//Heap is used for large memory usage/allocation.
//The process of memory allocation in Heap Memory is called "Dynamic Memory Allocation".
#include<iostream>

using namespace std;

int main(){
    int arr[10];
    //int arr[10] = {1,2};    //first two are filled and rest of them are filled with 0.
    // fill(arr,arr+5,67);     //67 will be filled  till [a,a+5)
    // fill(arr+5,arr+10,100); //100 will be filled  till [a+5,a+10)
    //We can also fill as 
    // for(int i=0;i<5;i++){
    //     arr[i] = 67;
    // }

    for(int i=0;i<10;i++){
        cout<<i<<"-->"<<arr[i]<<" "<<endl;
    }

    //cout<<100<< endl;      //Since this is a constant, it is stored in the "Code Segment".
    //Since NO variable is declared for 100, it is not stored in Stack or Queue.
    
    //There is few more segments inside the RAM after the "stack" and "heap".
    //"Code Segment" -> This is the last segment in which the "text of the code written is stored".
    //"Uninitialized segment" and "initialized segment" are two more segment present after stack and before "Code Segment".
    return 0;
}