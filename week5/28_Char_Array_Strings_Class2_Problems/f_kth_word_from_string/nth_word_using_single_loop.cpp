#include<bits/stdc++.h>

using namespace std;

string nthWord(string sentence, int n){
    // int len = sentence.length();
    
    // if length is not known
    int start_ptr = 0, end_ptr = 0;
    int word_count = 0;
    while(sentence[end_ptr] != '\0'){
        if(sentence[end_ptr] == ' '){
            word_count++;
            if(word_count == n){
                string ans = "";
                for(int i = start_ptr; i<end_ptr; i++){
                    ans += sentence[i];
                }
                return ans;
            }
            start_ptr = end_ptr + 1;
        }
        end_ptr++;
    }
    word_count++;
    if(word_count == n){
        string ans = "";
        for(int i = start_ptr; i<end_ptr; i++){
            ans += sentence[i];
        }
        return ans;
    }
    return "Word Not Found!";
}

int main(){
    string sentence = "Leetcode is very Easy to solve!";
    int n = 6;
    string ans = nthWord(sentence,n);
    cout<<"The "<<n<<"th word is : "<<ans<<endl;
    return 0;
}