#include<iostream>
#include<algorithm>

using namespace std;

string cal_Sum(int *a, int n,int *b,int m){
    int carry = 0;
    string ans;
    int i = n-1;
    int j = m-1;

    while(i>=0 && j>=0){
        int x = a[i] + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--,j--;
    }
    while(i>=0){
        int x = a[i] +0+ carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        i--;
    }
    while(j>=0){
        int x = 0 + b[j] + carry;
        int digit = x%10;
        ans.push_back(digit + '0');
        carry = x/10;
        j--;
    }
    if(carry){
        ans.push_back(carry+'0');
    };

    while(ans[ans.size()-1] == '0'){
        ans.pop_back();
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n,m;
    cout<<"Enter the size of 1st array : ";
    cin>>n;
    cout<<"Enter the size of 2nd array : ";
    cin>>m;
    int a[n];
    int b[m];
    
    cout<<"Enter the number of first array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the number of second array : ";
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    string ans = cal_Sum(a,n,b,m);
    cout<<"The sum of two arrays is : "<<ans;
    return 0;
}