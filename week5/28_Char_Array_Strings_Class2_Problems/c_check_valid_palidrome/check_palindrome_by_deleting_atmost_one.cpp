#include<iostream>

using namespace std;
// Time Complexity : O(N)
bool checkPalindrome(string str, int st, int end){
    while(st<=end){
        if(str[st] == str[end]){
            st++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool validPalindrome(string s){
    int n = s.length();
    int start = 0,end = s.length() - 1;
    while(start<=end){
        
        // same element
        if(s[start] == s[end]){
            start++;
            end--;
        }
        
        // different elements
        else{
            // s[i] != s[j]
            // iss case mein character delete karke dekho
            // 2 options
            // delete ith index wala character
            bool ansOne = checkPalindrome(s,start+1,end);
            bool ansTwo = checkPalindrome(s,start,end-1);
            bool finalAns = ansOne || ansTwo;
            return finalAns;
        }
    }
    //valid Palindrome,without any deletion
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