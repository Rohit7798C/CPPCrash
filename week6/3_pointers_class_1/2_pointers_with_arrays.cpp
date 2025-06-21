//Pointer with Arrays
/*
arr => Points to the base address of the entire array (Ans : 104)
&arr => Gives the base address of the entire array.   (Ans : 104)
arr[0] => Points to the 0th element of the array.     (Ans : 5(Value at 0th index))
&arr[0] => Gives the base address of the 0th element of the array. (Ans : 104)


So, we can create a pointer as,
int * ptr = arr;                //because here 'arr' is the base address
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    // int arr[]= {5,10,15,20,25};
    // cout<<arr<<endl;           //Output : 0x62fefc
    // cout<<&arr<<endl;          //Output : 5
    // cout<<arr[0]<<endl;        //Output : 0x62fefc
    // cout<<&arr[0]<<endl;       //Output : 0x62fefc

    
    // int arr[] = {10,20,30,40};
    // int * ptr = arr;          //This is how we create a pointer to an array.
    // cout<<*ptr<<endl;
    // arr = arr + 1;             //Doing this is impossible
    // arr++;                     //expression must be a modifiable value
    // cout<<(arr + 1)<<endl;       //This will work, because here we are not modifying, rather we are just printing the value after adding 1.
    // cout<<(arr + 1)<<endl;       //This will also work
    //We only cannot Modify the value of arr.
    //It will also run in a function.
    //Because here 'arr' is a type of symbol for which the mapping with it's address is stored in the Symbol Table.
    //And we cannot modify the symbol table.

    /*
    int arr[] = {10,20,30,40};
    int *ptr = arr;
    cout<<"arr     : "<<arr<<endl;           //Output : arr     : 0x62ff00   (Address of a)
    cout<<"&arr    : "<<&arr<<endl;          //Output : &arr    : 0x62ff00   (Address of a)
    cout<<"arr[0]  : "<<arr[0]<<endl;        //Output : arr[0]  : 10         (Value at 0th index of a)
    cout<<"&arr[0] : "<<&arr[0]<<endl;       //Output : &arr[0] : 0x62ff00   (Address of a)
    cout<<"ptr     : "<<ptr<<endl;           //Output : ptr     : 0x62ff00   (Address of a)
    cout<<"&ptr    : "<<&ptr<<endl;          //Output : &ptr    : 0x62fefc   (Address of ptr)
    cout<<"*ptr    : "<<*ptr<<endl;          //Output : *ptr    : 10         (Value at the address stored in ptr i.e. value of arr).

    cout<<(*arr + 1)<<endl;              //Output : 11
    cout<<*(arr + 1)<<endl;              //Output : 20
    cout<<*(arr + 3)<<endl;              //Output : 40
    // *(arr + 3) -> *(104 + 3) -> *(104 + 3*4) -> *(116) => i.e. Value at 116
    // This gives us the idea of why arr[i] == i[arr] works.
    // We have already done this, arr[i] == *(arr + i)  and i[arr] == *(i + arr), both are same.
    // This is due to pointers
    // For example : arr[2] => *(arr + 2).
    */
    
    /*
    int arr[] = {100,200,300,400,500,600};
    int *p = arr;
    int *q = arr + 1;
    cout<<"arr      : "<<arr<<endl;           //Output : arr     : 0x62fef8   (Address of a)
    cout<<"&arr     : "<<&arr<<endl;          //Output : &arr    : 0x62fef8   (Address of a)
    cout<<"arr[0]   : "<<arr[0]<<endl;        //Output : arr[0]  : 100        (Value at 0th index of a)
    cout<<"&arr[0]  : "<<&arr[0]<<endl;       //Output : &arr[0] : 0x62fef8   (Address of a)
    cout<<"p        : "<<p<<endl;             //Output : p     : 0x62fef8     (Address of a)
    cout<<"&p       : "<<&p<<endl;            //Output : &p    : 0x62fef4     (Address of p)
    cout<<"*p       : "<<*p<<endl;            //Output : *p    : 100          (Value at the address stored in ptr i.e. value of arr).
    cout<<"q        : "<<q<<endl;             //Output : q  : 0x62fefc        (Address of a)
    cout<<"&q       : "<<&q<<endl;            //Output : &q : 0x62fef0        (Address of q)
    cout<<"*q       : "<<*q<<endl;            //Output : *q : 200
    cout<<"(*p + 1) : "<<(*p + 1)<<endl;      //Output : (*p + 1) : 101
    cout<<"(*p + 2) : "<<(*p + 2)<<endl;      //Output : (*p + 2) : 102
    cout<<"*(p + 2) : "<<*(p + 2)<<endl;      //Output : *(p + 2) : 300
    cout<<"(*q + 2) : "<<(*q + 2)<<endl;      //Output : (*q + 2) : 202
    cout<<"*(q + 4) : "<<*(q + 4)<<endl;      //Output : *(q + 4) : 600
    */
    return 0;
}






