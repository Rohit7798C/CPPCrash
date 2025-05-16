#include<iostream>

using namespace std;

string removeAllDuplicates(string full,string pattern){

    // Time Complexity of s.find() is O(N/K)  , where K is length of pattern.
    // Time Complexity of s.erase() is O(N-K) , 
    // So total time complexity will be O(N/K * N-K).
    // Jab tak full string ke andar pattern string 
    // milti rahegi tab tak loop chalao

    // hum full ke andar pattern kar rahe hai, aur tab tak karenge jab tak not found naa aaye.
    while(full.find(pattern) != string::npos){    //npos matlab no position (matlab jab string ka last naa aaye).
        //full string mein se Erase akro
        //Erase function ke 2 arguments hai
        // First argument mein, pattern ka starting index dena hai
        // full.find(pattern), hume starting index of pattern inside 
        // full string provide kar raha hai
        // 2nd argument, ismein specify karna hai, ki kitne character
        // remove karna chahate ho starting index se.
        full.erase(full.find(pattern),pattern.length());
                //  start-index        
    }
    return full;
}

int main(){
    string str = "daabcbaabcbc";
    string ans = removeAllDuplicates(str,"abc");
    cout<<"The final string is : "<<ans;
    return 0;
}