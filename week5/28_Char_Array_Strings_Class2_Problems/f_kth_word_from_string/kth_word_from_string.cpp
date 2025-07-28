#include<bits/stdc++.h>

using namespace std;

void printTheKthWord_stringstream(const string &str,int k){
    if(k<=0){
        cout<<"Invalid K Value!"<<endl;
        return;
    }
    
    stringstream ss(str);
    
    string word;
    int count = 0;
    
    while(ss>>word){
        count++;
        if(count == k){
            cout<<"The "<<k<<(k == 1 ? "st" : (k == 2 ? "nd" : (k == 3 ? "rd" : "th")))<<" word is : "<<word<<endl;
            return;
        }
    }
    cout<<"The "<<k<<(k == 1 ? "st" : (k == 2 ? "nd" : (k == 3 ? "rd" : "th")))<<" word NOT Found1"<<endl;
}

#include<bits/stdc++.h>

using namespace std;

string lastWord(string str, int k){
    if(k<=0 || k>str.length()){
        cout<<"Invalid K Value!";
    }
    string word;
    int count = 0;
    stringstream ss(str);
    string lastWord = "";
    while(ss>>word){
        lastWord = word;
    }
    return  lastWord;
}

int main(){
    string str = "Rohit Chauhan is a Good Boy and live in Nashik!";
    int k = 7;
    string ans = lastWord(str,k);
    cout<<ans<<endl;
    return 0;
}

int main(){
    string str = "Rohit is Good Boy";
    int k = 3;
    printTheKthWord_stringstream(str,k);
    return 0;
}

