//Recursion : Jab ek badi problem, choti problem par dependent ho, tab humein recursion use karna chahiye.
//Bookish definition : When a function itself directly or indirectly it is called recursion.
/* 
   
    Magical line : 1 case hum solve karenge, aur baki recursion sambhal lega.
  
*/

/*
   
    Recursion
    5! =5x4x3x2x1, 
    6! = 6x5x4x3x2x1
    9! = 9x8x7x6x5x4x3x2x1 

    7! = 7x6x5x4x3x2x1

    7=7x6!

    for n=7, we can write

    fact(n) = n x fact (n-1).

    This is called Recursion (Callingitself).

    Ek badi problem(7!) , choti problem (6!) par dependent hai , toh isilye recursion ka istemal kar sakte hai
  

    Power :- 2^n 
    2^3 = 2 * 2 * 2
    2 ^ 7 = =2x2x2x2x2x2x2
    2 ^ 7 = 2 * 2^6
    Ek badi problem, choti problem par dependent hai

    power (7) = 2 *  power(6)

    These relations are called Recurrence or Recursive relations

    fact)=7* fact (6)

    factorial (n) = n *  factorial (n - 1) <-- chotti problem (recursion solve Karega)
         |          |                        
    (Big problem) (yeh main solve karunga)  

    power(7)  = 2 * power (6)

              = 2 * 64

              = 126

    - Chotti (recursion) Prob

    Recursion 3 components.

    1) Base Case/Condition (Mandatory)

    2) Recursive call (Mandatory)
    - The most important work is to find the relation between big prob and small prob(dependency).
    3) Processing (optional)

    - Base Case Batata hai ki rukna kab hai (Mandatory kai).
    - Recursive call is function calls (mandatory).
    - Processing (printing, computation, etc)(optional)
*/

/* We know that formula for factorial is 

factorial -> n! = n * (n-1) * (n-2) * (n-3) * ........ 3 * 2 * 1
                        |______________________________________|
                         |             
             n! = n *  (n-1)!

        fact(n) = n * fact(n-1) <--Small Problem
        Big Problem       

    
let n = 5
fact(5) = 5 * fact(4);
                 |
              fact(4) = 4 * fact(3);
                               |
                            fact(3) = 3 * fact(2);
                                             |
                                          fact(2) = 2 * fact(1);
                                                           |
                                                        fact(1) = 2 * fact(0);
                                                    This will go on continuously if we don't apply the base condition
                                                    And it occupy the entire stack space and there will be stack overflow(program crashes).
                                                    All these function calls are store in the function call stack.
        Here we know that the base condition is fact(0) = 1.
        So, we can apply it to stop the recursion.
*/


#include<bits/stdc++.h>

using namespace std;

void printCounting(int n){
    //H.W. : What is head recursion and tail recursion ? 
    //Ans : In Head recursion, recursion occurs first.
    //      In Tail recursion, processing occurs first.
    //base
    if(n==0){
        return;
    }
    //processing
    cout<<n<<" ";
    //recursive call
    printCounting(n-1);
    //Here it is tail recursion.
}
void reverseCounting(int n){
    if(n == 0){
        return;
    }
    reverseCounting(n-1);
    cout<<n<<" ";
}
int getFactorial(int n){
    //base case - mandatory
    if(n==0 || n==1){
        return 1;
    }

    //recursive call - fact(n-1) (mandatory)
    //fact(n) = n * fact(n-1)
    //big problem -> fact(n)
    //small problem -> fact(n-1)
    int recursionAns = getFactorial(n-1);
    int finalAns = n * recursionAns;
    return finalAns;
    //processing - optional

}
int pow(int n){
    //This code fails when n = 31
    //base case
    if(n==0){
        return 1;
    }
    //recursive relation
    //pow(n) = 2 * pow(n-1)
    int ans = 2 * pow(n-1);
    //processing
    return ans;
}
int fib(int n){
    //base
    if(n==0 || n == 1) {
        return n;
    }
    //recursive relation
    // fib(n) = fib(n-1) + fib(n-2);
    int ans = fib(n-1) + fib(n-2);
    //processing
    return ans;
}
int getSum(int n){
    //base case
    if(n == 0 || n==1){
        return n;
    }
    //recursive relation
    //sum(n) = n + sum(n-1);
    int ans = n + getSum(n-1);
    //processing
    return ans;
}
int main(){
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int ans = getFactorial(n);
    // cout<<"Factorial of "<<n<<" is : "<<ans<<endl;

    //Printing Count from n -> 1
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // printCounting(n);
    // reverseCounting(n);
    // int ans = pow(n);
    // cout<<n<<" power of 2 is : "<<ans<<endl;

    //fibonacci series
    // cout<<fib(9)<<" ";

    //sum upto n
    // cout<<getSum(5);
    return 0;
}