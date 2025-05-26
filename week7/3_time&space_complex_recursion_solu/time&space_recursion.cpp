//Time and Space Complexity of Recursive Solutions

//T(n) => Time taken as a function of input.

//Suppose the following

/*

main calls another func()
main(){
    func();
}

func() then performs some processing & then again calls itself.

suppose this is the function
func(){
   if(n==0){
   return;
   }
   int a,b,c;      //values of a,b,c are allocated everytime for new value of n.
   //processing
   func(n-1);      //calls itself
}

System understands the above in the form of "stack"(LIFO), 

f(n) -> calls f(n-1) -> calls f(n-2) -> and so on,
then f(n-1) waits for return value of f(n-2) and f(n) waits for return value of f(n-1)
as they all remain in the memory and wait for each other and doesn't get vanished.


*/

#include<bits/stdc++.h>

using namespace std;

void printArray(int a[],int n){
    //base case
    if(n==0){
        return;
    }
    //1 case mai karunga
    cout<<*a<<" ";
    printArray(a+1,n-1);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    printArray(arr,6);
    return 0;
}

/*
In the above program, some k processing is done and again function is called,
so the expression becomes.
k processing means checking if (n==0) and printing both together.
f(n) = k + f(n-1);

so, we can write 
T(n) = k + T(n-1);
T(n-1) = k + T(n-2);
T(n-2) = k + T(n-3);
.
.
.
T(1) = k + T(0);
T(0) = k1    , here n == 0 therefore only checking is done and no printing.
Here processing time is only k1 and nothing.
----------------------------------------- Adding all above 
T(n) = nk + k1

//This is formula based method of finding the time complexity, 

//Now we also have Recursive Tree method(Visual Method).

               PA(n)  --> k time--|
              /                   |
            PA(n-1)   --> k time  |
            /                     |
        PA(n-2)       --> k time  |
         /                        |  --> n times => kn
      PA(n-3)         --> k time  |
       /                          |
      .                           | 
     .                            |
    .                             |
 PA(1)                --> k time--|
  / 
PA(0)                 --> k1 time

So, total time complexity will be T(n) = kn + k1
So, T(n) = O(n), ignoring the constants.


*** Space Complexity ***
PA(n) = O(n) , because we are allocating the same variable n times and for 0th time there is no function call, but still there is allocation.
So, there is 1 extra allocation for the 0th call,
so, total space complexity becomes, O(n + 1) = O(n)
PA(n) = O(n).




//Time Complexity for Factorial function.
int fact(int n){
    if(n == 1){
        return 1;
    }
    return  n*fact(n-1);
}

T(n)   = k + T(n-1)
T(n-1) = k + T(n-2)
T(n-2) = k + T(n-3)
  .
  .
  .
T(1) = k
Function exits when n equals 1.
Adding all above we get
T(n) = nk          (n times k)
T(n) = O(nk)   
ignoring the constant
T(n) = O(n).

//We can also use the Recursive Tree method for finding the Time complexity of Factorial.

                f(n)  --> k time--|
              /                   |
             f(n-1)   --> k time  |
            /                     |
         f(n-2)       --> k time  |
         /                        |  --> n times => kn
       f(n-3)         --> k time  |
       /                          |
      .                           | 
     .                            |
    .                             |
  f(1)                --> k time--|

So, total time complexity will be T(n) = kn 
So, T(n) = O(n), ignoring the constant.

*** Space complexity ***
Since there are n entries and in the stack and each entry occupies m amount of space.
Sp, the space complexity will be O(n*m)
Ignoring the constant
Space complexity = O(n).




//Time complexity in Binary Search Using Recursion
F(n) = k + F(n/2);
k = some processing
F(n/2) = Again calling for n/2.

T(n) = k + T(n/2)
T(n/2) = k + T(n/4)
T(n/4) = k + T(n/8)
  .
  .
  .
T(2) = k + T(1)
T(1) = k
____________________________Adding all above 
T(n) = a*k

Now here we cannot directly write n*k, because n is not decreasing linearly
rather it is decreasing exponentially, so , we can write , 
    n = 2^a
    Taking log on both sides we get 
    log(n) = a    => a = log(n)
    Substituting above we get 
    T(n) = k * log(n)
    Now, ignoring the constant, we get
    O(log(n)).

    T(n) = O(log(n)).




//Time complexity in Fibonacci Series Using Recursion
//Making the formula is tough, So we will go with the recursive tree method.

                             fib(n)                        -> 2^0 * C time
                         /            \
                        /              \          
                   fib(n-1)             fib(n-2)           -> 2^1 * C time
                    /   \                /      \    
            fib(n-2)   fib(n-3)        fib(n-3)  fib(n-4)  -> 2^2 * C time
                 /      /   \             /  \  
        fib(n-3)  fib(n-4) fib(n-5)  fib(n-4) fib(n-5)     -> 2^3 * C time
            /       .         .          .         .           .
            .       .         .          .         .           .
            .       .         .          .         .           .
            .       .         .          .         .           .
                                                        T(n) = 2^(n-1) * C time
                                                        Taking log , we get
                                                        T(n) = O(2^(n-1) * C)
                                                        (ignoring the constants)
                                                        T(n) = O(2^n).
This complexity is very bad, because it is increasing exponentially.
T(n) is not always equal to 2^n, because there may some range of fibonacci, where the 
last line of child nodes may not be filled
So, we say that T(n) is always less than or equal to O(2^n).
For example we have fib(5) for which child nodes are completely filled.


***  Space Complexity for fibonacci series. ***
Space is equal to the depth of the stack filled.
For n we have n depth, so we can write,
Space complexity is O(n).









*/