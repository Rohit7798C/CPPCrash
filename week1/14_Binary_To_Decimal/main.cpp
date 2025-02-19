#include<iostream>
#include<math.h>
using namespace std;

// void decimalToBinary(int n){
//     while(n>0){
//         int bit = n%2;
//         cout<< bit << "";
//         n = n/2;
//     }
// }

// void reverseNum(int n){
//     int ans = 0;
//     while(n>0){
//         int remain = n%10;
//         ans = n*10 + remain;
//         n=n/10;
//     }
//     cout<<ans<<" ";
// }

int binaryToDecimal(int n){
    int binaryNum = 0;
    int i=0;
    while(n>0){
        int bit = n%2;
        binaryNum = bit*pow(10,i++) + binaryNum;
        n = n/2;
    }
    return binaryNum;
}
int main(){
    int n;
    cout<< "Enter the number : ";
    cin>>n;
    // decimalToBinary(n);
    // cout<<endl;
    // reverseNum(n);
    cout<<endl;
    int ans = binaryToDecimal(n);
    cout<<ans;
    return 0;
}