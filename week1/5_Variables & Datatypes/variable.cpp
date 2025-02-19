/*
Variable : Name given to a memory block in the memory location.

Dataype : Specifies the size and type of (data)information the variable will store.

schema :- datatype variable_name = value;
            int  age  =  25; 


*/ 


#include<iostream>
using namespace std;

int main(){
    // Variable define
    // int age = 25;
    // cout<<"My age is : "<<age<<endl;     // variable access

    // **declaration**
    // int age;
    // cout<<age;
    
    // **definition**
    int age = 21;
    cout<<age<<endl;

    // **manipulation or updation**
    // age = 101;
    // cout<<age<<endl;

    
    // int 
    // int count = 5;

    // float 
    // float share = 3.14;

    // char
    // char alphabet = 'z';     //value assigned to character datatype is always inside single quotes('value').

    // double
    // double weight = 55.69887;

    // boolean
    // bool isMale = true;
    // bool isChild = 1;
    // bool isFemale = false;
    // bool isGirl = 0;
    
    // 1 & true both indicate 'true'.
    // 0 & false both indicate 'false'.


//     cout<<count<<endl;
//     cout<<share<<endl;
//     cout<<alphabet<<endl;
//     cout<<weight<<endl;            // Output : 55.6989
//     cout<<isMale<<endl;
//     cout<<isChild<<endl;


        // int age = 12;
        // cout<<sizeof(age)<<endl;
        //Output : 4 byte (32 bits).
    return 0;
}


/*
1) The output of double is rounded-off. Why so?
2) How data is stored in the memory (In binary form)?
 


*/