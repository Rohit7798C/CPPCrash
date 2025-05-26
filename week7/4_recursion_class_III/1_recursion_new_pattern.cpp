/*Recursion New Pattern
Include-Exclude Pattern
- Firstly we will include that thing and check for the answer
- Secondly we will exclude that thing and check for the answer
- Lastly we will choose the best answer from above both options.

*** Sub-String ***
- It is a continuos part of string(e.g. sub-string).

*** Sub-Sequence ***
- You can include or exclude any character.
- It is not necessary to be continuous.
- Only one condition -> Order should be maintained.
- E.g: LOVE , subsequence can be LOE -> O is after L and E is after L & O, so order is maintained.
- E.g: abc -> a, b, c, ab, bc, ac, abc, " ". -> Total Sub-sequences = 8 => 2^3
Where 3 is the number of characters in the original sequence.
- So if length of string = n -> Then number of sub-sequences will be 2^n.

*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void printSubsequence(string &str,int index,string output,vector<string>&ans){
    //base case
    int n = str.length();
    if(index == n){
        // cout<<output<<endl;
        //I don't want to print, but I want to store.
        ans.push_back(output);
        return;
    }
    //1 case mai karunga 
    char ch = str[index];
    //include ch
    printSubsequence(str,index+1,output+ch,ans);
    //exclude ch
    printSubsequence(str,index+1,output,ans);
}

int main(){
    string str = "abc";
    string output = "";
    int index=0;
    vector<string>ans;
    printSubsequence(str,index,output,ans);
    cout<<ans.size()<<" "<<endl;
    for(auto i : ans){
        cout<<i<<" "<<endl;
    }
    return 0;
}
