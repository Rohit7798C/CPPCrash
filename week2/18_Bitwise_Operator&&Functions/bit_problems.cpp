#include<iostream>

using namespace std;

int main(){
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;

    // // 1) Even-Odd number
    // // if((n&1)==0){
    // //     cout<<"Even number";
    // // }
    // // else{
    // //     cout<<"Odd number";
    // // }

    // // Generally the above code is written as:

    // if(n&1){
    //     cout<<"Odd number";
    // }
    // else{
    //     cout<<"even number";
    // }

    // 2) Find the number of Set-bits in a number.
    // When 5 is represented as -> 000.....101 -> then number of Setbits is the No. of 1's in the number.
    // Whereas 0 can also be called as unSet-bit.
    // We cannot directly say the number of 1's in the number, but we can say whether the last bit is 1 or not.
    // We can do &1 with the number and it will give 1 for last bit, if it is 1.
    // Whereas &1 gives 0, if the last bit is 0.
    // Now, after finding the whether the last digit is 1 or 0, we have to check for other bits.
    // For next bit to the left, we do right shift, so that the bit which we have checked is lost, and now we have a new bit as the last bit.
    // Now again, we do &1 for the last bit and check whether it is 0 or 1. 
    // After checking, we again do right shift and check further.
    
    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // int setBitCount = 0;
    // while(n>0){
    //     int lastBit = n & 1;
    //     if(lastBit == 1){
    //         setBitCount += 1;
    //     }
    //     // right shift by one digit
    //     n = n>>1;
    // }
    // cout<<"Total SetBit count : "<<setBitCount<<" ";
    
    return 0;
}