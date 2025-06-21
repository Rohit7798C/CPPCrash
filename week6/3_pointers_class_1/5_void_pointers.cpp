/*
Declaring a Void Pointer
    void * ptr;

Using a void pointer
- We declared a void pointer named ptr.
- This pointer can be used to point to any type of data.
- But we cannot directly de-reference it, because the compiler doesn't know the data type it is pointing to.
- We cannot do this,
    int a = 10;
    void * ptr = &a;
    cout<<*ptr<<endl;
- This will give error, because here compiler doesn't know the datatype of the variable, the pointer is pointing to.
- We can use it as follows,
    void * ptr;
    int a = 10;
    ptr = &a;
    int * intPtr = static_cast<int*>(ptr);
    cout<<*intPtr<<endl;
- This will give output as 10.
- Here, we first declare a void pointer named 'ptr' and an integer variable named 'a'.
- We then assign the address of 'a' to the void pointer 'ptr'. 
- We then cast the void pointer 'ptr' to an 'int*' pointer using the static_cast operator.
- Which tells the compiler that the void pointer should be interpreted as a pointer to an integer.
- Finally, we de-reference the integer pointer 'intPtr' to get the value of x.

- Void pointers are commonly used in C++ for dynamic memory allocation using the new operator. 
- When we allocate memory dynamically using new, the type of the allocated memory is determined at runtime.
- We can use a void pointer to point to the dynamically allocated memory and then cast it to the appropriate data type when we need to use it.
- Here's an example of using a void pointer for dynamic memory allocation:

    int* ptr = new int;

    void* voidPtr = ptr;

    int* intPtr = static_cast<int*>(voidPtr);

    *intPtr = 10;

    cout << *ptr << endl; // prints 10

- In this example, we allocate memory for an integer using the new operator and assign the address of the allocated memory to an integer pointer ptr .
- We then assign the void pointer 'ptr' to 'voidPtr', which allows us to use the void pointer to point to the allocated memory.
- We then cast the void pointer voidPtr to an int* pointer using the static_cast operator and dereference it to set the value of the integer to 10.
- Finally, we print the value of the integer pointed to by 'ptr' to confirm that it has been changed.

- Meaning of static_cast<int*>
- In C++, static_cast is a casting operator that is used to convert a value from one data type to another.
- The syntax for using the static_cast operator is as follows:
                    static_cast<new_type>(expression)
- Here, new_type is the data type that we want to cast the expression to.
- The expression can be a variable, a literal, or any valid expression in C++.
- In the context of static_cast<int*> , the int* is the new data type that we want to cast the expression to.
- Specifically, it is a pointer to an integer. 
- In other words, we are casting a void pointer to an integer pointer.
- Note that 'static_cast' is a compile-time operator, which means that the conversion is done at compile time rather than at runtime.
- This can result in faster code execution since the compiler can optimize the code based on the specific data types that are being used.
- However, it also means that the cast can fail at runtime if the data types are not compatible.
- Overall, static_cast<int*> is a C++ casting operator that is used to cast a void pointer to an integer pointer.

*/



#include<bits/stdc++.h>

using namespace std;

int main(){
    // void * ptr;
    // int a = 10;
    // ptr = &a;
    // int * intPtr = static_cast<int*>(ptr);
    // cout<<*intPtr<<endl;

    return 0;
}