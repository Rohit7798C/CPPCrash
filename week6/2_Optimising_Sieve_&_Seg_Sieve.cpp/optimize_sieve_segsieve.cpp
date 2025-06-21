#include<bits/stdc++.h>

using namespace std;

vector<bool> printPrime(int n){
    vector<bool>prime(n,true);
    prime[0] = prime[1] = false;
    //Time Complexity : O(nlog(log(n)))
    for(int i=2;i<sqrt(n);i++){
        //optimisation 2 : We will check until √n only  
        if(prime[i]){
            //optimisation 1 : first unmarked number would be i*i, 
            //as others have been marked by 2 to (i-1)
            //Matlab 
            //2 ne mark kiye : 2,4,6,8,10,12,14,16,18,20
            //3 ne mark kiye : 3,6,9,12,15,18,21,24
            //Yahan 6 already marked hai by 2, so 6 ko dubara mark karne ki jarurat nahi
            //Toh isiliye humne square of 3 se mark karna shuru kiya 
            //Similarly 5 ke liye hum 25 se start karenge, kyunki uske pehele sabhi numbers already marked ho gaye hai by 2 and 3.
            int j = i*i;         
            while(j<n){
                prime[j] = false;
                j+=i;
            }
        }
    }
    return prime;
}

int main(){
    int n = 25;
    vector<bool>ans = printPrime(n);
    int size = ans.size();
    for(int i=0;i<size;i++){
        if(ans[i]){
            cout<<i<<" ";
        }
    }
    return 0;
}