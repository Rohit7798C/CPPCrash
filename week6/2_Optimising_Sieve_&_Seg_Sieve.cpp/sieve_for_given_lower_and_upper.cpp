//If we are given two limits : one upper and one lower and told to find the prime numbers betw them.
//We can find the prime nos betw 0 to upper limit and find out where the lower limit lie betw 0 and upper.
//And then remove the prime nos from 0 to lower limit and get the prime nos from lower limit to upper limit
//     0 ..... 3456 ....... 9876

//But this method is not feasible for large nos, such as 10^9.
//Because we cannot store the number 10^9 in an array.
//As the maximum capacity of an array for any data-type is 10^6.
//This capacity differs system to system.

//It is given that, 
//   if,  0 <= L,R <= 10^9
//   and (R-L) <= 10^6, Maximum size for a system
//then instead of creating the entire sieve from 0 to 10^9, 
//we would be creating a segmented sieve from 10^6 to 10^9.
//For example we have, L = 110 and R = 130
//Algorithm
//1) Generate all the primes responsible to mark segmented sieve.
//   Using simple sieve algorithm N = √R
//                                N = √130
//                                N = 11
//These primes will help to mark segmented sieve. 
//2) Base prime = {2,3,5,7,11}
// find first index to start marking.


#include<bits/stdc++.h>

using namespace std;

vector<bool>Sieve(int n){
    //Create a sieve array of N Size telling isPrime
    vector<bool>sieve(n+1,true);
    sieve[0] = sieve[1] = false;

    for(int i=0;i*i<=n;i++){
        if(sieve[i] == true){
            int j = i*i;
            while(j<=n){
                sieve[j] = false;
                j+=i;
            }
        }
    }
    return sieve;
}

vector<bool> segSieve(int L,int R){
    //get me prime array, and I will use it to mark segmented sieve
    vector<bool>sieve = Sieve(sqrt(R));
    vector<int>basePrimes;
    int n = sieve.size();
    for(int i=0;i<n;i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }
    vector<bool>segSieve(R-L+1,true);
    if(L==1 || L == 0){
        segSieve[L] = false;
    }
    for(auto prime : basePrimes){
        int first_mul = (L/prime) * prime;
        if(first_mul < L){
            first_mul += prime;
        }
        int j = max(first_mul,prime*prime);
        while(j<=R){
            segSieve[j-L] = false;
            j+=prime;
        }
    }
    return segSieve;
}

int main(){
    int L = 110, R = 130;
    vector<bool>ss = segSieve(L,R);
    int n = ss.size();
    for(int i=0;i<n;i++){
        if(ss[i]){
            cout<<i + L<<" ";
        }
    }
    return 0;
}