#include<iostream>

using namespace std;
        //pass by value
// void solve(int a){
//     a++;
//     cout<<"Function ke a ki value : "<<a<<endl;     //output -> 17
//     a++;
// }

        //pass by value
// void solve(int val){
//     val = val + 10;
//     return;
// }

        //pass by reference
// void solve1(int &a){
//     a=a+10;
//     return;
// }
       //pass by reference
// void solve2(int &number){
//     number = number / 2;
//     return;
// }

       //pass by reference
void solve3(int &x,int &y){
        x = x+10;
        y = y-5;
        return;
}
int main(){
    //A) Pass by Value -> Copy banti hai (Copy ka address alag hota hai original value ki address se).
    //A) Pass by Reference -> Actual value mein change hota hai.

    // int a = 15;
    // a++;
    // solve(a);
    // a++;
    // cout<<"Main ke a ki value : "<<a;     //output -> 17

    // int val = 10;
    // solve(val);
    // cout<<"Main ke val ki value : "<<val;


    // Reference Variable : Aadmi ek, naam Anek.
    // int age = 15;
    // int &love = age;     //Giving one more new name to the same memory location, means 15 is stored at a location having two names love and age.
    //Both love and age have same memory address(i.e. same memory location).
    //So, here love is called 'Reference variable'.


    // int age = 15;
    // int &demo = age;
    // age++;
    // cout<<demo;
    //Here demo is called "Reference Variable".

    // int a = 10;
    // int b = 20;
    // int &x = a;
    // int &y = b;
    // x--;
    // b++;
    // cout<<(a*b)<<" ";
    //Here, x and y are called "Reference Variable".

    //function call for reference variable.
    // int a = 10;
    // a++;
    // solve1(a);
    // a++;
    // cout<<"Value of a in Main function : "<<a<<endl;

    //function call for solve2.
    //int val = 10;
    //solve2(val);
    //val = val + 100;
    //cout<<val;

    //function call for solve3.
//     int a = 10;
//     int b = 10;
//     solve3(a,b);
//     a++;
//     b--;
//     cout<<(a*b);

//*** VVIMP ***//
//When to use "Pass by Value" and "Pass by Reference"?
// 1) Pass by Value     -> Normally use karte hai.
// 2) Pass by Reference -> Isey hum tabhi use karte hai, jab humein kisi "variable" ke andar "ans" ka "track" rakhna hota hai.
    return 0;
}