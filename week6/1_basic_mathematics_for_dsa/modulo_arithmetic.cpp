/*
A) Modulo Arithmetic
Whenever we take the modula of any number we get the values as, 0,1,2,3 and so on upto n-1.
1) (a % n) -> [0,1,2,3,4,......,n-1]
2) Generally, to avoid overflow while storing integer we do modulo with a large number.
    i) (a+b) % M = a%M + b%M
    ii) a%M - b%M = (a-b) % M
    iii) ((a%M)%M) %M = a%M
    iv) a%M * b%M = (a*b)%M
*/

/*
B) Fast Exponentiation
i) Normal Solution to find a^b -> O(b).
ii) Better solution a^b -> O(log(b)).
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// i) Normal Solution to find a^b -> O(b)
int slowExponentiation(int a ,int b){
    int ans = 1;
    for(int i=1;i<=b;i++){
        ans*=a;
    }
    return ans;
    //O(b)
}

// ii) Better solution a^b -> O(log(b))
// if b is even then we can write it is a^b = (a^((b/2)*2))
// if b is odd then we can write it is a^b = (a^((b/2)*2)) * a
// dividing the power again and again.
// e.g : 2^5 = (2^4) * 2
//           = (2^2 * 2^2) * 2
//           = ((2^1) * (2^1)) * 2 
// int fastExponentiation(int a,int b){
//     int ans = 1;
//     while(b>0){
//         if(b&1){
//             ans = ans*a;
//         }
//         a = a*a;
//         b = b/2 ;
//     }
//     return ans;
// }

int main(){
    int ans = slowExponentiation(5,3);
    // cout<<"Slow Exponentiation : "<<ans<<endl;
    // cout<<"Fast Exponentiation : "<<fastExponentiation(5,3);
    return 0;
}


