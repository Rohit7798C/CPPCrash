#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age : "<<endl;

    cin>>age;
    cout<<"Your age is : "<<age<<endl;

    // int marks;
    // cout<<"Enter your marks : "<<endl;

    // cin>>marks;
    // cout<<"Your Marks are : "<<marks<<endl;

    // char marks;
    // cout<<"Enter your marks : "<<endl;

    // cin>>marks;
    // cout<<"Your Marks are : "<<marks<<endl;

    bool marks;
    cout<<"Enter your marks : "<<endl;
    // Whenever we try to take input for a boolean variable , we cannot take input as 'true' or 'false'
    // we can only take either '0' or '1' as input

    // cin>>marks;
    // cout<<"Your Marks are : "<<marks<<endl;
    
    
    return 0;
}


// Questions:
// 1) what is cin.ignore()?
// Ans: cin.ignore() tells the program to ignore some characters from the input stream.
// 2) what is cin.fail()?
// #include<iostream>

// using namespace std;

// int main(){
//     int age;
//     cout<<"enter your age : ";
//     cin>>age;
    
//     if(cin.fail()){
//         cout<<"Please enter numeric value for the age"<<endl;
//         cin.clear();
//         cin.ignore(numeric_limits<streamsize>::max(), '\n');
//         (numeric_limits<streamsize>::max() - This is a special value that represents the maximum number of characters that can be ignored. 
//         In practical terms, it means "ignore as many characters as possible).
//         ('\n': This specifies that the ignoring should stop when a newline character (usually entered by pressing Enter) is encountered.)
//         cout<<"enter your age again : ";
//         cin>>age;
//     }
//     else{
//         cout<<"Your age is : "<<age<<endl;
//     }
//     return 0;
// }
// 3) what is getline(cin,10)?
// Ans: getline(): This is a function that reads a line of input from a specified input stream.
//      cin: This represents the standard input stream, which is usually the keyboard.

//      10: This is the maximum number of characters that will be read from the input stream
