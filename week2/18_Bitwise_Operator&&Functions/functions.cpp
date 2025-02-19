#include<iostream>

using namespace std;
   
// void -> Returns nothing
// void sayMyName(){
//     cout<<"Rohit"<<endl;
// }

// int -> returns integer
// int solve(int a,int b){
//     int sum = a+b;
//     return sum;
// }

// void solve();
// void hello();

//Here n -> Input Parameter.
// void printNKaTable(int n){
//     for(int i=1;i<=10;i++){
//         cout<<n*i<<endl;
//     }
// }

// first declare the function then call it.

// Q. Function to check whether eligible to vote or not.
// bool checkAge(int age){
//     if(age>=18){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// Q. Function to calculate a to the power of b.

// int calculatePower(int a,int b){
//     //a to the power b -> a*a*a*a*...... b times.
//     int ans = 1;
//     for(int i=1;i<=b;i++){
//         ans = ans*a;
//     }
//     return ans;
// }

// Q. To find the sum of all the terms of an A.P.

// float calculateTotalSum(int a, int l, int n){
//     float ans = (n*(a+l))/2.0;
//     return ans;
// }

// bool isPrime(int n){
//     for(int i=2;i<=n-1;i++){
//         if(n%i==0){
//             //not prime
//             return false;
//         }
//     }
//     //agar aap yahan tak aa gaye ho
//     //toh iska matlab kisi se bhi remainder 0 nahi aaya 
//     //iska matlab aap prime ho
//     //iska matlab return true
//     return true;
// }

// Q. To print all the even numbers within a given range.

// void printEvenInsideRange(int start,int end){
//     for(int i=start;i<=end;i++){
//         if((i&1)){
//             cout<<i<<" ";
//             //if(i&1 == 1 i.e. true) -> It is an odd number.(i&1)
//             //if(i&1 == 0 i.e. false) -> It is an even number.(!(i&1)).
//         }
//     }
// }


// Q. Calculate the total percentage of the subjects.

// float calculatePercentage(int sb1, int sb2, int sb3, int sb4, int sb5){
//     int sum = sb1 + sb2 + sb3 + sb4 + sb5;
//     int totalMarks = 500;

//     float percentage = (sum * 100.0) / totalMarks;
//     return percentage;
// }

int main(){
    

    // Syntax of function
                            //(parameter may or may not be used)
    /* return_type function_name (input_parameter){
          
        // function-body/logic/definition
        
       }
    */

    // a) Function declaration
            // int solve();

    // b) Function definition
            // int solve(){
                
                // function body
            
            // }

    // *** IMP ***
    // Always try to make sure that the definition of the function should be above the line having the function call.
    // Not below the function call line.
 
    // function use -> function call.
    // sayMyName();

    
    // function calls are managed by function call stack.
    // The 1st function which is called compulsoryly is the main function, so the 1st entry in the function call stack is of main function.
    // Function call works on the Data structure called Stack (LIFO).

    // int a=5,b=10;

    // int ans = solve(a,b);

    // cout<<ans << " ";

    // E.g of Call Stack

    // cout<<1<<endl;
    // solve();
    // cout<<2<<endl;

    //function call
    // 5 -> argument
    // printNKaTable(15);

    //function call
    // int finalAns = calculatePower(2,5);
    // cout<< finalAns << " ";

    // int age;
    // cout<<"Enter the age : ";
    // cin>>age;
    
    //function call
    // if(checkAge(age)){
    //     cout<<"You can vote!";
    // }
    // else{
    //     cout<<"You cannot vote!";
    // }

    //function call to find sum of terms in an A.P
    // float ans = calculateTotalSum(1,5,3);
    // cout<<ans<<endl;

    //check prime function call
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // bool ans = isPrime(n);
    // if(ans == true){
    //     cout<<n<<" is Prime number!";
    // }
    // else{
    //     cout<<n<<" is not a Prime number!";
    // }


    //Even number within range function call.
    // int start,end;
    // cout<<"Enter the starting point : ";
    // cin>>start;
    // cout<<"Enter the ending point : ";
    // cin>>end;
    // printEvenInsideRange(start,end);


    //calculatePercentage function call.
    //cout<<"Total percentage is : "<<calculatePercentage(95,95,95,99,88)<<"%";




    return 0;
}

// void solve(){
//     cout<<3<<endl;
//     hello();
//     cout<<4<<endl;
// }

// void hello(){
//     cout<<9<<endl;
//     //return;     // return without any value means go back to the place from where the function was called.
// }

// Output is 1 3 9 4 2