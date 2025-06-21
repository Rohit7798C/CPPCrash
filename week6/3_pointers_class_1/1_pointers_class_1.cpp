//variables : named memory locations
//We can use these variables to refer to some data-stores.

//Pointers : Pointer is just a variable that stores address of another variable.
//If we say some entity as pointer or some memory block as memory block of pointer, then it is guarantee that it stores only address.
//Because it cannot store anything else, other than address.

//Whenever we declare a variable, suppose, int a = 5;
//then here we knew that this creates a memory in the system and gives that memory a name "a". And we access that memory with that name,
//but this isn't true.
//For accessing the memory location, we use a symbol table, which stores the memory address of that variable.
//Suppose the memory address of that variable is 104, then when we do a = a + 1;, the system doesn't know what is "a", so it adds 104+1,
//and then gives the output.
//So, in short here also we use the address of the variable only.

#include<bits/stdc++.h>

using namespace std;

int main(){
    //int a = 5;
    // cout<<a;
    // int b = a;          //no error
    // int c = &a;      //gives error
    //this line gives error, because we cannot directly use any integer type variable for storing an address,
    //For storing an address we must use pointer for storing an address.

    //int * ptr = &a;                                               //104
    //Here,                                                     .-->|5|
    //  &a     => a ka address                                  |   a(Value of a = 5)
    //  ptr    => variable name                        |104|--->|
    //  "="    => assignment operator                   ptr(stores address of variable a)
    //  int *  => Pointer which is pointing to an integer data.
    //  char *  => Pointer which is pointing to an character type data.
    //  long *  => Pointer which is pointing to an long type data.
    //  short * => Pointer which is pointing to an short type data.
    //  bool *  => Pointer which is pointing to an bool type data.

    //Suppose we have a custom data-type, named 'babbar'
    //And if we write babbar * ptr
    //then we can say that 'ptr' is a pointer pointing to 'babbar type data'.

    // int a = 5;
    // int * ptr = &a;      //104
            //         .-->|5|
            //         |   a(Value of a = 5)
            // |104|--->|
            // ptr(stores address of variable a)

    // cout<<a<<endl;            //Value of a
    // cout<<&a<<endl;           //Address of a
    // cout<<ptr<<endl;          //Address of a
    // cout<<&ptr<<endl;         //Address of ptr
    // cout<<*ptr<<endl;         //Value at address stored in ptr-> value at 104 -> Output : 5
    //*ptr => This is called De-reference operator.


    // int a = 5;
    // int * ptr = &a;
    // cout<<sizeof(ptr)<<endl;           //Output : 4
    
    // char ch = 'a';
    // char * cptr = &ch;
    // cout<<sizeof(cptr)<<endl;          //Output : 4
    
    // long l = 1040;
    // long * lptr = &l;
    // cout<<sizeof(lptr)<<endl;
    //Output of all the above is 4, irrespective of the datatype, because the pointers always stores the hexadecimal address only.

    // char ch = 'a';
    // char * cptr = &ch;
    // cout<< sizeof(cptr) <<endl;   //output : 4

    // float f = 1.4;
    // float * fptr = &f;
    // cout<< sizeof(fptr) <<endl;   //output : 4
    //So, we can see that size of pointer doesn't depend upon the datatype, rather it depends upon the system.

    // int *ptr;
    // cout<<*ptr;         //This throws out garbage value.
    // int a;
    // cout<<a;            //This throws out garbage value.
    //to avoid this, we must initialize a null pointer as,
    // int * ptr = 0;
    // cout<<*ptr;         //This will return nothing, because it is initialized with 0.

/*
    int a = 5;
    int * ptr = &a;
    cout<<a<<endl;          //Value of a
    cout<<&a<<endl;         //address of a 
    //cout<<*a<<endl;       //Error
    //We are trying to de-reference here, but we cannot de-reference a normal variable because it is not storing any address. 
    //we can de-reference only a pointer, which stores a address.
    cout<<ptr<<endl;        //address of a 
    cout<<&ptr<<endl;       //address of ptr
    cout<<*ptr<<endl;       //Value of a (Value at the address that is stored in pointer).
    //If there is 1 star, toh 1 baar aage jao value ke liye
    //If there is 2 star, toh 2 baar aage jao value ke liye (**ptr)
    //If there is 3 star, toh 3 baar aage jao value ke liye (***ptr)
    cout<<ptr+1<<endl;      //1 will be added in the value in the ptr.
    //Value in ptr is an address, so if the address is 104, then adding 1 will give 108
    //This is because 1 here means adding space of an integer i.e. 4 , so it will be 104 + 4 = 108.
    //Adding +1 means going on to the next location, for any datatype.
    cout<<(*ptr/2)<<endl;
    cout<<*ptr+ 1<<endl;
*/
/*
    int a = 10;
    int *ptr = &a;
    cout<<*ptr<<endl;      //Value of a => 10
    cout<<ptr+1<<endl;     //Adding 1 in the address of a which is stored in p.
    cout<<*ptr+1<<endl;    //Adding 1 to the value of a => 10 + 1 = 11.
    cout<<*ptr/2<<endl;    //Dividing the value of a => 10/2 = 5.
*/

/*
    int a = 10;
    int *p = &a;
    int *q = p;                //We have copied pointer p into pointer q 
    cout<<"a  : "<<a<<endl;
    cout<<"&a : "<<&a<<endl;
    // cout<<*a<<endl;         //Error
    cout<<"p  : "<<p<<endl;
    cout<<"&p : "<<&p<<endl;
    cout<<"*p : "<<*p<<endl;
    cout<<"q  : "<<q<<endl;
    cout<<"&q : "<<&q<<endl;
    cout<<"*q : "<<*q<<endl;
*/

    /*
    int a = 56;
    int *p = &a;                //Pointer p contains the address of a 
    int *q = p;                 //Pointer q points to pointer p
    int *r = q;                 //Pointer r points to pointer q
    cout<<"a  : "<<a<<endl;     //56
    cout<<"&a : "<<&a<<endl;    //&a : 0x62ff0c
    // cout<<*a<<endl;          //Error : We cannot use a de-reference operator with an integer, we can use it with pointer only.
    cout<<"p  : "<<p<<endl;     //p  : 0x62ff0c
    cout<<"&p : "<<&p<<endl;    //&p : 0x62ff08
    cout<<"*p : "<<*p<<endl;    // *p : 56                                          
    cout<<"q  : "<<q<<endl;     //q  : 0x62ff0c
    cout<<"&q : "<<&q<<endl;    //&q : 0x62ff04
    cout<<"*q : "<<*q<<endl;    // *q : 56
    cout<<"r  : "<<r<<endl;     //r : 0x62ff0c
    cout<<"&r : "<<&r<<endl;    //&r : 0x62ff00
    cout<<"*r : "<<*r<<endl;    // *r : 56  
    */
    
    return 0;
}