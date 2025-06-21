/*
    Any random program xyz.cpp
       __________________________________________________
       |                                                 |
       |                           Heap                  |
       |                   _________________________     |
       |                  |                         |    |
       |                  | 1)Dynamic               |    |
       |                  | 2)vector<int>arr;       |    |
       |    int a;        | 3)new                   |    |  
       |  int arr[15];    | 4)delete(deallocate)    |    |
       |    stack         |                         |    |
       |    _____         |                         |    |
       |   |     |        |                         |    | 
       |   |small|        |          Big            |    |
       |   |_____|        |_________________________|    |
       |_________________________________________________|


- For Heap Memory
- 1) new : keyword is used to allocate the dynamic memory.
            int *ptr = new int;      -> Allocates memory to an array.
            int *ptr = new int[50];  -> Allocates memory to an array.
- 2) delete : Used to deallocate the memory (Like, my work is done and now I don't want this memory and I can free it using delete keyword).
            delete ptr    -> deletes a block of memory.
            delete [] ptr -> Deletes an array.
- In C++, we have to manually free the memory, unlike in Java which has its own Garbage Collector.

- 'new' is used to return address, and this address is stored only in a pointer.
- For example : int * ptr = new int;
- here we are allocating the user a memory of 4 bytes(int) from the heap memory, and the address of that memory is 'returned by new'.
- and that returned address is stored in the pointer.
- 'Hence, we require pointers in dynamic memory allocation'.




*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    /*

    //Array -> Stack Memory 
    int arr[5] = {0};
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

    //Array -> Heap Memory
    int *brr = new int[5];
    cout<<brr[0]<<" "<<brr[1]<<" "<<brr[2]<<endl;
 
    */

    /*

    //Integer -> Stack Memory
    int a = 5;
    cout<<a<<endl;
    
    //Integer -> Heap Memory
    int *p = new int;            //dynamically allocating the memory
    *p = 5;
    cout<<*p<<endl;
    //deallocate -> delete keyword
    delete p;
    //cout<<*p<<endl;  //Prints garbage value, because the memory it is pointing is freed due to deallocation.

    */
  

    /*
    //2D-Array -> Stack Memory 
    int arr[2][4] = {
                {2,4,6,8},
                {1,2,3,4}
            };
    

    //2D-Array -> Heap Memory 
    //We already know that, there is nothing like 2D-array in real, rather it is a combination of 1-D arrays,
    //So, we cannot point entire array using a single pointer, so we can use a separate pointer for each of the 1-D array.
                new int * [4]
                    _|__     _________________
    int ** arr; -> |____| -> |___|___|___|____|  -> 1D array
    for referring  |____| -> |___|___|___|____|  -> 1D array
    to array       |____| -> |___|___|___|____|  -> 1D array
    of pointers.   |____| -> |___|___|___|____|  -> 1D array 
    This is called as 'array of pointers'.
    Each pointer from 'array of pointers' points to the base address of each 1D-Array.

    Single level Pointer =>  new int * [4];
    To get to point to each of the 1D-array, we have to create double level pointer as,
    int ** arr    =   new int * [4];
    double level     Single level pointer
    pointer

    Now we have to 'create array for each of the pointer' in 'new int * [4]'.
    For that we will be using 'loop'.

    */
    //2D-array in Heap implementation.
    //Here,
    //4 -> Count of Rows.
    //3 -> Count of Cols.
    int ** arr = new int * [4];
    for(int i=0;i<4;i++){
        //har pointer ke liye ek 1D-array create karna hai
        //Inserting an array of size 3, for each value of i.
        arr[i] = new int [3];
        //address of each array will be stored in each pointer.
    }

    //taking input 
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //Printing the array
    cout<<endl<<"Printing the 2D array "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //Since, these arrays are being created in the heap, so we have to free all the arrays individually.
    //This deletion will be as,
    for(int i=0;i<4;i++){
        delete [] arr[i];
    }
    //Otherwise, it will cause 'memory leak'.
    //Q) What is a Memory Leak?
    return 0;
}