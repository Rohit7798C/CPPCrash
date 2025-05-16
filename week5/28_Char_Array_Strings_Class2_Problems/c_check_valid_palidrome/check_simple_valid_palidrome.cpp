#include<iostream>

using namespace std;

bool validPalindrome(string s){
    int n = s.length();
    int start = 0,end = s.length() - 1;
    while(start<=end){
        
        if(s[start] == s[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    string name = "rohit";
    bool ans = validPalindrome(name);
    if(ans){
        cout<<"It is a valid Palindrome";
    }
    else{
        cout<<"It is NOT a valid Palindrome";
    }
    return 0;
}