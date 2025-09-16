#include<bits/stdc++.h>

using namespace std;

string findLastWord(const string &sentence){
    string lastWord = "";
    int n = sentence.length();

    for(int i = n-1;i>=0;i--){
        char current_char = sentence[i];

        if(current_char == ' '){
            if(!lastWord.empty()){
                break;
            }
        }
        else{
            lastWord.insert(lastWord.begin(),current_char);
        }
    }
    return lastWord;
}

int main(){
    string sentence1 = "This is a sample sentence";
    cout<<"Last word is : "<<findLastWord(sentence1);
    return 0;
}



// #include<bits/stdc++.h>

// using namespace std;

// string lastWord(string sentence, int n){
//     int len = sentence.length();
//     string ans = "";
//     for(int i = len;i>=0;i--){
//         if(sentence[i] == ' '){
//             return ans;
//         }else{
//             ans.insert(ans.begin(),sentence[i]);
//         }
//     }
//     return ans;
// }

// int main(){
//     string sentence = "Leetcode is very Easy to solve!";
//     int n = 6;
//     string ans = lastWord(sentence,n);
//     cout<<"The "<<n<<"th word is : "<<ans<<endl;
//     return 0;
// }
