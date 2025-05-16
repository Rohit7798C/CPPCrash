#include<iostream>
#include<cstring>
using namespace std;

//Q1. Getting the length of the Character Array
// Time Complexity :- O(N)
// Space Complexity :- O(1)
    int getLength(char arr[],int size){
    int count = 0;
    // int index = 0;
    // Using While-loop
    // while(arr[index]!='\0'){
    //     //Jab tak array mein null character nahi milta 
    //     //Tak tak increment karo 
    //     //And aage badho
    //     count++;
    //     index++;
    // }

//     //Using for-loop
    for(int index = 0;index<size;index++){
        if(arr[index] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
//     //return kardo count ko
    return count;
}

//Q2. Replace Character
// Time Complexity :- O(N)
// Space Complexity :- O(1)
//original character -> '@'
//new character -> ' '
// void replaceCharacter(char originalChar, char newChar, char arr[],int size){
//     for(int i=0;i<size;i++){
//         if(arr[i] == originalChar){
//             arr[i] = newChar;
//         }
//     }
// }

//Q3. Converting Upper to Lower and Lower to Upper
//a) Lower to Upper
    void ConvertToUpperCase(char arr[],int size){
        int len = getLength(arr,size);
        for(int i=0;i<len;i++){
            char ch = arr[i];
            // If letter is a lowercase letter
            // then only convert it.
            // We can handle mix letters, by using following if-condition.
            if(ch>='a' && ch<='z'){
                ch = ch - 'a' + 'A';
            }
            arr[i] = ch;
        }
    }
//b) Upper to Lower 
    void ConvertToLowerCase(char arr[],int size){
        int len = getLength(arr,size);
        for(int i=0;i<len;i++){
            char ch = arr[i];
            // We can handle mix letters, by using following if-condition.
            if(ch>='A' && ch<='Z'){
                ch = ch - 'A' + 'a';
            }
            arr[i] = ch;
        }
    }


//Q4. Reversing an Array.
    void reverseCharacterArray(char arr[],int size){
        int n = getLength(arr,size);
        
        int start = 0,end = n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<"";
        }
    }


//Q5. Check Palindrome
    // bool validPalindrome(char arr[],int size){
    //     int n = getLength(arr,size);
    //     int start = 0, end = n-1;
    //     while(start<=end){
    //         if(arr[start] == arr[end]){
    //             start++;
    //             end--;
    //         }
    //         else{
    //             //not a palindrome
    //             return false;
    //         }
    //     }
    //     //agar mai yahan tak pohoch gaya
    //     //toh iska matlab saare characters check ho chuke hai
    //     //and different characters nahi mile
    //     //iska matlab vaid Palindrome hai
    //     //iska matlab return true kardo
    //     return true;
    // }



int main(){
    //Q1. Getting the length of character array
    // char arr[1000];         //Here 1000 is not the length, it is the size of array.
    // cin>>arr;
    // cout<<getLength(arr,1000);


    //Q2. Replace Character
    // char arr[100];
    // cin>>arr;
    // replaceCharacter('@',' ',arr,100);
    // cout<<arr<<endl;


    //Q3. Converting Upper to Lower and Lower to Upper
    // As we cannot remember the ASCII values directly, we can derive a formula 

        //1) Upper to Lower
        // Suppose we want to convert 'A' to 'a'.
        // So, here we will subtract 'A' from 'A' and add 'a' to it
        // Simply : ch = ch - 'A' + 'a'
        // Where 'ch' could be any character.
        // char arr[100];
        // cin>>arr;
        // ConvertToUpperCase(arr,100);
        // cout<<arr<<endl;

        //2) Lower to Upper
        // Suppose we want to convert 'a' to 'A'.
        // So, here we will subtract 'a' from 'a' and add 'A' to it
        // Simply : ch = ch - 'a' + 'A'
        // Where 'ch' could be any character.
        // char arr[100];
        // cin>>arr;
        // ConvertToLowerCase(arr,100);
        // cout<<arr<<endl;
    
    //Q4. Reversing an Array.
    // char arr[1000];
    // cout<<"Enter the Array : ";
    // cin>>arr;
    // cout<<"Before Reversal : "<<arr<<endl;
    // cout<<"After Reversal : ";
    // reverseCharacterArray(arr,1000);
    
    
    //Q5. Check Palindrome
    // Palindrome means String is same from Left to Right and Right to Left.
    // char arr[100];
    // cout<<"Enter the array : "<<endl;
    // cin>>arr;
    // bool ans = validPalindrome(arr,100);
    // if(ans){
    //     cout<<"It is a valid Palindrome";
    // }
    // else{
    //     cout<<"It is not a valid Palindrome";
    // }
    

    //Functions in Character Arrays.
    
    // 1) Appending two character arrays using strcat(arr1,arr2) function.
    char arr1[100];
    cout<<"Enter the input : ";
    cin>>arr1;
    char arr2[100];
    cout<<"Enter the input : ";
    cin>>arr2;
    cout<<strcat(arr1,arr2)<<endl;

    // 2) Getting the length of the character array using strlen() function.
    // char arr3[100];
    // cout<<"Enter the input : ";
    // cin>>arr3;
    // cout<<strlen(arr3)<<endl;

    // 3) Comparing two character arrays using strcmp(arr1,arr2) function.
    // char arr1[100];
    // cout<<"Enter the input : ";
    // cin>>arr1;
    // char arr2[100];
    // cout<<"Enter the input : ";
    // cin>>arr2;
    // cout<<strcmp(arr1,arr2)<<endl;
    //Returns 0 if both are equal.
    //Returns 1 if both are not equal.
    return 0;
}