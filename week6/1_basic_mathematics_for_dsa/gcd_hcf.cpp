//GCD - Greatest Common Divisor
//HCF - Highest Common Factor
//Both are same.
//Suppose we have two numbers 'a' and 'b', so, it is the maximum number which can divide both 'a' and 'b'.
//In general we find it like this 
//If the two numbers are 24 and 72, then we will do like this
//Divide the number in terms of prime numbers, i.e
// 24 -> 1x2x2x2x3
// 72 -> 1x2x2x2x3x3
// Here taking the common of both, we get
// 1x2x2x2x3 = 24 , So the GCD or HCF will be 24 which divides both 24 and 72

//Euclid's Algorithm to find GCD is,
//Formula used for GCD is 
//dono ka diff and smallest of 'a' and 'b'.
// gcd(a,b) = gcd(a-b,b)   if a>b
//          = gcd(b-a,a)   if a<b
//We have to use this above formula until one of the parameters becomes 0.
//The other remaining non-zero one will be the gcd
//For example, gcd(72,24) = gcd(72-24, 24)
//                        = gcd(48, 24)
//                        = gcd(48-24, 24)
//                        = gcd(24, 24)
//                        = gcd(0, 24)
//So, remaining 24 will be the GCD
//Also, we have 
// gcd(a,b) = gcd(a%b,b)   if a>b

#include<bits/stdc++.h>

using namespace std;

int findGCD(int A, int B){
    if(A == 0){
        return B;
    }
    if(B == 0){
        return A;
    }
    while(A>0 && B>0){
        if(A>B){
            A = A-B;
        }
        else{
            B = B-A;
        }
    }
    return A == 0 ? B : A;
}
int findGCDRecursion(int A, int B){
    if(A == 0){
        return B;
    }
    if(B == 0){
        return A;
    }
    if(A<B){
        findGCD(A,B-A);
    }
    else{
        findGCD(A-B,B);
    }
}

//We can also find the LCM using the below formula
// We know that LCM(a,b) * GCD(a,b) = a*b
// so, we can get the LCM as 
//              LCM(a,b) = (a*b)/GCD(a,b)
int main(){
    int A = 72, B = 24;
    int ans = findGCD(A,B);
    cout<<"The GCD is "<<ans;
    return 0;
}