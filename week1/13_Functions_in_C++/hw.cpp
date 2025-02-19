#include<iostream>
#include<math.h>
using namespace std;
// 1) Print from 1 to 100
// void printFrom1To100(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<" ";
//     }
// }


// 2) Find simple interest

int simpleInterest(int p,int r,int t){
    int si = (p*r*t)/100;
    return si;
}

// 3) print prime nos from 1 to 100

// void printPrimeNumbers(){
//     for(int i = 2;i<=100;i++){
//         bool isPrime = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j == 0){
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if(isPrime){
//             cout<< i << " ";
//         }
//     }
// }

// 4) Check whether someone is eligible to vote or not.

// void voting(int age){
//     if(age>=18){
//         cout<<"You are eligible to vote!";
//     }
//     else{
//         cout<<"You are eligible to vote!";
//     }
// }

// 5) SIP calculator 

int SIP(int Amt,int rate,int month){
    double futValue = Amt *((((pow((1+rate),month))-1)/rate)*(1+rate));
    return futValue;
}
int main(){
    // printFrom1To100();

    // int p,r,t;
    // cout<<"Enter the Principal Amount : ";
    // cin>>p;
    // cout<<"Enter the rate of interest : ";
    // cin>>r;
    // cout<<"Enter the time in years : ";
    // cin>>t;

    // int si = simpleInterest(p,r,t);
    // cout<<"simple interest is : "<<si;

    // printPrimeNumbers();

    // int age;
    // cout<<"Enter the age : ";
    // cin>>age;
    // voting(age);

    double sip = SIP(100,11,12);
    cout<<"SIP is : "<<sip;
    return 0;
}

