//Count Primes
#include<bits/stdc++.h>

using namespace std;

//Standard Method : Naive approach
//Time Complexity : O(n^2)
// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }


//Standard Method : Sqrt approach
//Time Complexity : O(n√n)
// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }


// Sieve of Eratosthenes : 1) Taking an array of elements and marking all of them Prime at the start.
// 2) Multiples of a Prime number are not prime, hence we will mark them one by one as non-prime
// Suppose we have 2 as prime, but it's multiples 4,6,8,10,12 are not prime.
// 3) Repeat 2) till (N-1) only for prime numbers
// 4) Rest elements marked as prime will be counted.
//Time Complexity : n * [n/2 + n/3 + n/5 + n/7 ...... + n/11]
//                : n * [1/2 + 1/3 + 1/5 + 1/7 ...... ]       This is Harmonic progression of prime numbers
//                                |-> Tailor's Series
//                : n[log(log(n))]
//                : O(n * loglog(n))
//                : O(nlog(log(n)))
int countPrimes(int n){
    if(n == 0){         //base case
        return 0;
    }
    vector<bool>prime(n, true);   //creating a vector and marking all the elements as prime
    prime[0] = prime[1] = false;
    int ans = 0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            int j = 2*i;
            while(j<n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return ans;
}

//Segmented Sieve (Finding the no. of primes between low and high)



int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // int count = 0;

    //1) Standard Method
    // for(int i=2;i<n;i++){
    //     if(isPrime(i)){
    //         count++;
    //     }
    // }
    
    //2) Sieve of Eratosthenes (Find the no. of primes between 0 and N).
    int count = countPrimes(n);

    //3) Segmented Sieve (Find the no. of primes between low and high)
    cout<<"the total number of primes are : "<<count;
    return 0;
}