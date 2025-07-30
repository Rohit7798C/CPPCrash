#include<iostream>

using namespace std;

int main(){
    // Both character-array and strings can store sequence of characters.
    // Strings are more safer.
    // String is Dynamic in Nature.
    // String Size can grow or shrink dynamically.
    // Strings have more functions available than character-arrays.
    // Also Strings have "null character" termination.

    // Operations in Strings
    // 1)Creation
    // string name;

    // 2)Insertion (Similar to vectors)
    // name.push_back('a');

    // 3)Deletion (Similar to vectors)
    // name.pop_back();

    // 4)Input
    // cin>>name;

    // 5)Output
    // cout<<name;

    // 6)Access 
    // name[3];


    // string sentence;
    // // cin>>sentence;
    // // getline(cin,sentence,'A');     //Here 'A' is the delimeter
    // getline(cin,sentence,'\n');     //Here '\n' is the delimeter
    // cout<<sentence<<endl;

    //Why getline(cin,arr,'\n')?
    //In case of (C language concept) character array, cin.getline(arr,100) expects a character as input.
    //In case of (C++ language concept) string, getline(cin,arr,'\n') expects a string as input.

    //Creation
    // string str;
    // str.push_back('l');
    // str.push_back('o');
    // str.push_back('v');
    // str.push_back('e');
    // str.pop_back();
    // cout<<str<<endl;

    // cout<<"Enter the input : ";
    // // input
    // cin>>str;
    // // output
    // cout<<"Str : "<<str<<endl;
    // cout<<str[0]<<endl;



    //Functions in Strings

    string name = "Maharana Pratap";
    // name.clear();                   //To clear the string    
    // cout<<name[0]<<endl;         //First Element
    // cout<<name.at(0)<<endl;      //First Element
    
    // cout<<name.front()<<endl;    //First Element
    // cout<<name.back()<<endl;     //Last Element
   
    // cout<<name.length()<<endl;   //Gives the length of the String including the space.

    //Creating an Interator
    // auto it = name.begin();

    // while(it!=name.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;

    //Checking for Empty and non-Empty
    // if(name.empty()){
    //     cout<<"String is Empty!";
    // }
    // else{
    //     cout<<"String is Not Empty!";
    // }
   
    // (Concatenation) Appending two Strings
    // string fName = "Rohit";
    // string lName = "Chauhan";
    // string fullName = fName +" " + lName;
    // cout<<fullName<<" ";

    // Finding the sub-string of the string using sub-str.
    string str = "Hello Ji Kaise ho Saare!";
    // Start from position and upto given length.
    // cout<<str.substr(0,5);
    // cout<<str.substr(5,5);

    // If we give only one input in substr(5), then it will start from 5 and go upto end of the string.
    // cout<<str.substr(5)<<"";

    // Find() function to find a particular word in a String.
    string word = "Kaise";

    // int ans = str.find(word);    
    // If present, it gives the start index of the word otherwise returns -1;
    // cout<<"ans : "<<ans<<endl;

    // Sometimes, we might also get to see, like this
    // if(name.find(word) != string::npos){
    //     //Found
    // }
    // else{
    //     //Not Found
    // }


    // String compare: 
    // Returns 0 -> If both strings are equal.
    // Returns < 0 -> If one string is Lexographically('a' comes before 'b') smaller than other.
    // Returns > 0 -> If one string is bigger than other.
    
    // string s1 = "Love";
    // // string s1 = "Love";      //-> Both are equal
    // string s2 = "Amit";         //-> Love comes later than Amit (Gives output as 1).
    // cout<<s1.compare(s2);    
    return 0;
}
