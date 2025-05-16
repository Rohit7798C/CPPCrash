#include<iostream>

using namespace std;

string removingDuplicates(string s){
    // initialize ans string as an empty string.
    string ans = "";
    int n = s.length();
    for(int i=0;i<n;i++){
        char currChar = s[i];
        if(ans.empty()){
            // if ans is empty, seedha push karo
            ans.push_back(currChar);
        }
        // right-most character of ans = ans.back()
        else if(currChar == ans.back()){
            ans.pop_back();
        }
        else if(currChar!= ans.back()){
            ans.push_back(currChar);
        }
    }
    return ans;
}


int main(){
    //Q1. Remove all the adjacent duplicates in a String.
    // i/p -> string -> "abbaca"
    // o/p -> "ca"
    // Because first duplicates are "bb"
    // After removing it becomes "aaca".
    // Now here "aa" are duplicates. 
    // After removing it becomes "ca".   -> Final Output.


    string name = "azxxzy";
    string ans = removingDuplicates(name);
    cout<<ans;
    return 0;
}