// Array : Store similar type of elements but in continous memory locations.

// Like we say for an element, we do int a = 5;. and then a memory location is occupied with the value 5 and named as 'a'.
// But this is not true memory locations are never assigned names, rather they have a address assigned with them.
// To access the values at these addresses, we create a Symbol Table, in which the entries indicating, that 'a' is mapped with the address of memory location with value 5.
// Suppose the address of that memory location is 104, the 'a' is mapped with 104, a->104.
// So that we can access the memory location and value with the name 'a' only.

// 1) Creation
// Initially garbage value is present in the array, when only decalred.
// e.g: int arr[5];

// 2) Initialization
// int arr[5] = {10,20,30,40,50};     //Here all the values are filled
// If we fill only two values as int arr[5] = {10,20,0,0,0}, then the remaining values will be filled with 0.
// int brr[4] = {0};


// 3) IMP :  We declare the array along with it's size as, int arr[10].
// But we can also take user input of size for the array as : 
//         int size;
//         cin >> size;
//         int arr[size];
// X But this is a bad practice because, it affects the memory.
// So, the best way is to pre-define the size of array as int arr[10];


// 4) How to find the size of an array.
// We can find the size of a variable as : sizeof(a) for int a -> it will give output as 4;
// Similarly, we find the no. of blocks assigned to array as : sizeof(arr)/sizeof(int) = no. of blocks.
// But we cannot directly find the no. of elements using this method, because there may less elements than the no. of blocks in the array.
// We have to use a variable explicitly that can store the size of the array, as int n =2.


// 5) Why do we call the base address as arr[0], and why not any other like arr[1], or arr[2] , etc?
// Formula for "arr[i] = Value at (Base address + (size*i));"
// where, i = 0,1,2,3.... etc
//        size = size of datatype (e.g int)
//        Base address = 104 (e.g).
// We can also use,
// i[arr] = Value at (Base Address + (size*arr))
// instead of 
// arr[i] = Value at (Base address + (size*i));
// Both work similarly.


// 6) Why arr[i] = i[arr] ? 
// Ans : arr[i] -> * (arr+i)
//       i[arr] -> * (i+arr)
// Here * means value present at address.
// And i -> i*size.

// We write as, arr[i] for our understandability , but compiler reads it as *(arr+i),
// where *(arr+i) -> Value present at address (arr+i).
// E.g if base address is 104 ans arr[3] ? 
// then, arr[i] -> *(arr+i)
//       arr[3] -> Value present at address (104 + 3)
//       arr[3] -> Value present at address (104 + 3*4)    //here we don't add directly 104 to 3 !=107
//       because i = i*size and size of int is 4 so we will first multiply 3*4 = 12
//       then we will add 104 + 12 = 116
//       arr[3] -> Value present at address (116). 

//       i[arr] -> * (i+arr)
//              -> Value preset at address (3+104)
//              -> Value preset at address (3*4+104)  (i = i*size(datatype)).
//         i[3] -> Value present at address (116).
               


#include<iostream>

using namespace std;

int main(){
    //1)creation
    // int arr[10];

    //2)error : size not given
    // int brr[];

    // int crr[] = {10,20,30,40};
    // int drr[4] = {0};
    // // cout<<drr[0] << endl;
    // cout<<crr[0] << endl;
    // cout<<crr[1] << endl;
    // cout<<crr[2] << endl;
    // cout<<crr[3] << endl;
    // cout<<crr[4] << endl;   //This index is out of the array, so it may give garbage value or segmentation fault.
    //It gives garbage value, when the index lies in the alloted memory.
    //It gives segmentation error, when index is out of the alloted memory.


    //3)Filling in an array (Filling same value at all the positions in an array).
    // int arr[3] = {10,20,30};
    // Syntax of Filling is:

    // fill(starting address, ending address, value to fill)

    //a)Starting address of an array is mapped with name of the array in the Symbol Table
    //  So, starting address can be accessed as, arr -> 104.
    //b)Ending address can be accessed as : name of arr(i.e starting address) + size of array => 104 + 3 = 107.

    // int arr[4];
    // fill(arr,arr+4,101);
    // cout<<arr[0]<<" ";
    // cout<<arr[1]<<" ";
    // cout<<arr[2]<<" ";
    // cout<<arr[3]<<" ";

 
    //4) Taking input in an array
    
    // int arr[5];
    // There are 5 blocks and input can be taken as :
    // arr[0] -> cin>>arr[0]
    // arr[1] -> cin>>arr[1]
    // arr[2] -> cin>>arr[2]
    // arr[3] -> cin>>arr[3]
    // arr[4] -> cin>>arr[4]

    // We are performing the same action (cin) for all the blocks.
    // So we can use a loop for multiple blocks.

    // n=5;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    //input
    int arr[5];
    for(int index = 0;index<5;index++){
        cout<<"Enter the value of box index : "<<index<<endl;
        cin>>arr[index];
    }

    for(int index = 0;index<5;index++){
        cout<<index[arr]<<" ";
    }
    return 0;
}