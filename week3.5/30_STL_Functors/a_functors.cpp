// Functors : 
// -> Functors ,short for "function objects," are fundamental concept in C++ and play a significant role in the C++ Standard template library(STL). 
// -> Functors are objects that behave like functions and can be called with the same Syntax as regular functions.
// -> They are implemented as classes structs that overload the operator().
// -> In the context of the C++ STL, functors are often used as custom comparators or custom operations when working with various algorithms and containers.


// Usage in Algorithms : 
// -> Functors are commonly used as arguments to STL algorithm, providing custom behaviour for sorting, searching, and other operations.
// -> For example, when sorting a container of custom objects, you can provide a functor that defines the sorting criteria based on specific object attributes.


// Function call Operator "operator()":
// -> Functor define the behaviour of their function call operator "operator()".
// -> When Functor object is called like a function, the "operator()" is executed allowing you to encapsulate custom behaviour within the functor.



#include<iostream>

using namespace std;

class functorOne{
    public : 
        
        bool operator()(int a,int b){            //overloading the rounded bracket operator.
            //descending order mein compare karna chahate hain
            // if a>b -> true, it means 'a' should be placed before 'b'.
            // that's why yeh descending order banata hai.
            return a>b;
        }
};

int main(){
    //creating the object of functor.
    functorOne cmp;
    //Here, we have created a functor object "cmp",
    //but we are utilizing it as a function as shown below.
    //we are calling it as a function.

    //We are able to use this object as a function because, we have overloaded our rounded bracket operator above.
    if(cmp(10,5) == true){
        cout<<"10 is greater than 5!"<<endl;
    }
    else{
        cout<<"10 is less than 5!"<<endl;
    }
    return 0;
}