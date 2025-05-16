// Character Array -> Stores Sequence of Characters
// Character takes 1 byte memory space.
// A bucket in which we can store multiple characters at contiguous memory locations is called character array.

//declaring the character array
// char arr[5];

// Accessing in character array
// arr[1];

//input -> cin>>arr[0];   (we can take input for all the spaces (blocks) in an array at once).

//output -> cout<<arr[0];  (we can print all the characters in character array at once).
// In integer array when we give output as "cout<<arr", -> it gives address
// But in character array, "cout<<arr" -> gives the data.

//The difference in integer array and character array is that, we took only one input at a time in an integer array
// But in character array we can take input for all the spaces (blocks) in an array.
// Also, when size of input is smaller than size of character array, then a null character(\0) array gets added at the remaining empty spaces.
// Like in our code semi-colon(;) represents termination of line, here in character array, null character(\0) represents end(termination) of character array.


#include<iostream>

using namespace std;

int main(){
    
    // //creation
    // char arr[100];

    // //input
    // cout<<"Enter your name : ";
    // // cin>>arr;                       //Takes characters all at a time

    // cin.getline(arr,100);              //To solve the issue of spaces between the words.
    // //Takes the entire statement as input.

    // //If we write the above line as,
    // // cin.getline(arr,8);                //It will print only 8 letters of the sentence.

    // //output
    // cout<<"Your name is : "<<arr<<endl;   //Prints characters all at a time

    // //Printing each character
    // cout<<arr[0]<<"-> "<<(int)arr[0]<<endl;
    // cout<<arr[1]<<"-> "<<(int)arr[1]<<endl;
    // cout<<arr[2]<<"-> "<<(int)arr[2]<<endl;
    // cout<<arr[3]<<"-> "<<(int)arr[3]<<endl;
    // cout<<arr[4]<<"-> "<<(int)arr[4]<<endl;     //prints null character

    // Printing the ASCII value of each character.
    // ASCII value of Null Character is 0(Zero).

    //In Character array : The default delimeter (kiske baad input lena rok dena hai) are 
                           // 1) enter -> '\n'
                           // 2) tab -> '\t'
                           // 3) space -> ' '
    // So whenever space comes while taking input , it stops taking the input 
    // Hence when we write Love Babbar, it stops after 'love', as there is a space after love.
    // Thus, Babbar doesn't get printed.

    // To solve this problem we can use cin.getline() function.

    // char arr[100];
    // cout<<"Enter the input : ";
    // cin>>arr;

    // cin.getline(arr,80,'\t');    // Here 80 is the size of the array.
    // So, here '\t' represents the delimeter which tells the 'cin.getline' function to stop taking input when 'tab is hit'.
    // so, it stops when tab is hit.
    // Otherwise it continues.

    // cin.getline(arr,80,'A');        //Here Character 'A' is the delimeter.
    //So, delimeter can be any character.

    // cin.getline(arr,80,'.');        //Here Character '.' is the delimeter.
    // cout<<arr;

    
    return 0;          
}






















