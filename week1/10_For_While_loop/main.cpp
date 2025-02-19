#include<iostream>
using namespace std;

int main(){
    // 1) for-loop 

    // for(initialization: condition : updation){
    //     // code to be executed in each iteration.
           // None of the above three points is mandatory.
    // }

    // This below code will also work
    // for(;;){
    //     cout<<"hii"<<endl;
    // }
 
    // 2) break keyword : When used , it throws us outside the loop.

    for(int i = 1;i<=10;i++){
        // agar pehele likha toh 5 tak print hoga.
        // cout<<i<<" ";
        if(i==5){
            break;
            // jumps outside the loop.
        }
        // agar baad mein likha yahan toh 4 tak hi print hoga.
        // cout<<i<<" ";
    }

    // 3) Continue keyword : continue skips only one iteration at once.
    // for(int i=1;i<=10;i++){
    //     // cout<<i<<" ";
    //     // agar yahan likha (continue ke pehele) toh kuch bhi skip nahi hoga.
    //     // skip karne ke liye baad mein likhna hota hai.
    //     if(i==5){
    //         continue;
    //     }
    //     cout<<i<<" ";
    // }

    // 4) while loop
    // int i=1;
    // while(i<=5){
    //     cout<<i<<" ";
    //     i=i+1;
    // }

    // H.W questions
    // 1) 1 to 100 counting
    // for(int i=1;i<=100;i++){
    //     cout<<i<<" ";
    // }

    // 2) 100 to 1 counting
    // for(int i=100;i>=1;i--){
    //     cout<<i<<" ";
    // }

    // 3) Print your Name 50 times 
    // for(int i=1;i<=50;i++){
    //     cout<<"Rohit"<<" ";
    // }

    // 4) 0 to -10 counting
    // for(int i=0;i>=-10;i--){
    //     cout<<i<<" ";
    // }
    // return 0;

    // 5) 7 ka table
    // for(int i=1;i<=10;i++){
    //     cout<<"7X"<<i<<" : "<<7*i<<endl;
    // }

    // 6) A -> Z alphabet

    // for(char ch = 'A';ch <='Z';ch++){
    //     cout<<ch<<" ";
    // }

    // 6) a -> z alphabet

    // for(char ch='a';ch<='z';ch++){
    //     cout<<ch<<" ";
    // }
}