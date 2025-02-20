#include<iostream>
#include<limits.h>
#include<algorithm>

using namespace std;

//Function to perform Linear Search
// bool findTarget(int arr[],int size,int target){
//     //traverse the entire array
//     for(int i=0;i<size;i++){
//         //int currentElement = arr[i];
//         if(arr[i] == target){
//             //target found
//             return true;
//         }
//     }
//     //agar aap yahan tak pohoch gaye ho toh
//     //iska matlab pura loop chal chuka hai
//     //iska matlab poore loop me kahin bhi target nahi mila
//     //iska matkab element not found
//     return false;
// }


//Function to find the maximum element using Linear Search.
// int findMax(int arr[],int size){
//     int maxAns = INT_MIN;
//     for(int i=0;i<size;i++){
//         //we can use an in-built max function
//         maxAns = max(arr[i],maxAns);

//         // if(arr[i]>maxAns){
//         //     maxAns = arr[i];
//         // }
//     }
//     return maxAns;
// }



//Function to find the total number of zeros and ones in an array
// void printZeroesAndOnes(int arr[],int size){
//     int zeroCount = 0,oneCount=0;
    
//     //traverse Array
//     for(int i=0;i<size;i++){
//         // int currentElement = arr[i];
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }
//     cout<<"Total Zeroes : "<<zeroCount<<endl;
//     cout<<"Total Ones : "<<oneCount<<endl;
// }


//Function for Extreme Printing
// void extremePrint(int arr[],int size){
//     int left=0;
//     int right=size-1;

//     while(left<=right){
//         if(left==right){
//             cout<<arr[left]<<" ";
//             break;
//         }
//         else{
//             cout<<arr[left]<<" ";
//             left++;
//             cout<<arr[right]<<" ";
//             right--;
//         }
//     }
// }

//Function to swap two numbers using third variable.
// void swapUsingVariable(int a,int b){
//     int temp = a;
//     a = b;
//     b=temp;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b;
// }


//Function to swap two numbers using Addition & Subtraction.
// void swapUsingArithmeticOpr(int a,int b){
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<"a is : "<<a<<endl;
//     cout<<"b is : "<<b;
// }

//Function to swap two numbers using Multiplication & Division.
// void swapUsingArithmeticOprMD(int a,int b){
//     a = a*b;
//     b = a/b;
//     a = a/b;
//     cout<<"a is : "<<a<<endl;
//     cout<<"b is : "<<b;
// }


//Function to swap two numbers using Bitwise XOR Operator.
// void swapUsingBitwiseXOR(int a,int b){
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     cout<<"a is : "<<a<<endl;
//     cout<<"b is : "<<b;
// }


//Function to reverse an array using 2-pointer approach.
// void reverseArray(int arr[],int size){
//     int left=0,right=size-1;
//     // while(left<right){
//     //     swap(arr[left],arr[right]);
//     //     left++;
//     //     right--;
//     // }

//     //Pro ki tarah Code 
//     while(left<right){
//         swap(arr[left++],arr[right--]);
//         //Firstly use then increment and decrement.
//     }
//     cout<<"Reversed Array : "<<endl;
// }


//Function to reverse an array using Bitwise XOR.
// void revArrayUsingBitwiseXOR(int arr[],int size){
//     int left=0,right=size-1;
//     while(left<right){
//         arr[left] = arr[left] ^ arr[right];
//         arr[right] = arr[right] ^ arr[left];
//         arr[left] = arr[left] ^ arr[right];
//         left++;
//         right--;
//     }

//     cout<<"Reversed Array : "<<endl;
// }

int main(){
    //A) Linear Search Algorithm
    // int arr[] = {10,20,30,40,50};
    // int size = 5;

    // int arr[100];
    // int size;
    // cout<<"Enter the number of elements : "<<endl;
    // cin>>size;

    // for(int i=0;i<size;i++){
    //     cout<<"Enter the value for index-"<<i<<endl;
    //     cin>>arr[i];
    // }
    // int target;
    // cout<<"Enter the value of target : "<<endl;
    // cin>>target;
    
    // bool ans = findTarget(arr,size,target);
    // cout<<"Ans : "<<ans<<endl;
    

    //B) Finding Maximum element using Linear Search.
    // We know that signed integer ranges from -2^31 -> 2^31-1
    // Here the lower limit is called INT_MIN = -2^31
    // Here the upper limit is called INT_MAX =  2^31-1

    //** Always initialize your answer with ans = INT_MIN, when you want to find the maximum element **/
    //**   And Vice-versa   **/

    // int arr[100];
    // int size;
    // cout<<"Enter the number of elements : "<<endl;
    // cin>>size;

    // for(int i=0;i<size;i++){
    //     cout<<"Enter the value for index-"<<i<<endl;
    //     cin>>arr[i];
    // }
    // int ans = findMax(arr,size);
    // cout<<"The maximum element is : "<<ans<<" "<<endl;



    //C)Finding the total number of zeros and ones in an array
    // int arr[100];
    // int size;
    // cout<<"Enter the number of elements : ";
    // cin>>size;
    
    // for(int i=0;i<size;i++){
    //     cout<<"Enter the element at index-"<<i<<" : ";
    //     cin>>arr[i];
    // }
    
    // printZeroesAndOnes(arr,size);


    //D) Extreme printing using Two Pointers.
    // int arr[] = {10,20,30,40,50,60,70};
    // int size = 7;
    // extremePrint(arr,size);


    //E)Swapping Two Numbers
        //a)Using third variable
        // int a,b;
        // cout<<"Enter first number a : ";
        // cin>>a;
        // cout<<"Enter second number b : ";
        // cin>>b;
        // cout<<"After Swapping"<<endl;
        // swapUsingVariable(a,b);

        //b)Using addition & Subtraction
        // int a,b;
        // cout<<"Enter first number a : ";
        // cin>>a;
        // cout<<"Enter second number b : ";
        // cin>>b;
        // cout<<"After Swapping"<<endl;
        // swapUsingArithmeticOpr(a,b);


        //c)Using Multiplication & Division
        // int a,b;
        // cout<<"Enter first number a : ";
        // cin>>a;
        // cout<<"Enter second number b : ";
        // cin>>b;
        // cout<<"After Swapping"<<endl;
        // swapUsingArithmeticOprMD(a,b);

        //d)Using Bitwise XOR Operator
        // int a,b;
        // cout<<"Enter first number a : ";
        // cin>>a;
        // cout<<"Enter second number b : ";
        // cin>>b;
        // cout<<"After Swapping"<<endl;
        // swapUsingBitwiseXOR(a,b);

        //e)Using standard swap() function.
        // int a,b;
        // cout<<"Enter first number a : ";
        // cin>>a;
        // cout<<"Enter second number b : ";
        // cin>>b;
        // cout<<"After Swapping"<<endl;
        // swap(a,b);
        // cout<<" a is : "<<a<<endl;
        // cout<<" b is : "<<b;

    //F) Reverse an Array
        //1) Method-1 : Simple reverse loop.
        // int n,arr[100];
        // cout<<"Enter the size of array : ";
        // cin>>n;
        // for(int i=0;i<n;i++){
        //     cout<<"Enter the element at index-"<<i<<" : ";
        //     cin>>arr[i];
        // }
        // for(int i=n-1;i>=0;i--){
        //     cout<<arr[i]<< " ";
        // }

        //2) Method-2, using two pointer approach.
        // int n,arr[100];
        // cout<<"Enter the number of elements : ";
        // cin>>n;
        // for(int i=0;i<n;i++){
        //     cout<<"Enter the element at index-"<<i<<" : ";
        //     cin>>arr[i];
        // }
        // reverseArray(arr,n);
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }

        //3) Method-STL, C++ library
        // int n,arr[100];
        // cout<<"Enter the number of elements : ";
        // cin>>n;
        // for(int i=0;i<n;i++){
        //     cout<<"Enter the element at index-"<<i<<" : ";
        //     cin>>arr[i];
        // }
        // reverse(arr,arr+n);         //this is a direct function in STL Library
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }

 
        //4) Without using swap and using Bitwise XOR
        // int n,arr[100];
        // cout<<"Enter the number of elements : ";
        // cin>>n;
        // for(int i=0;i<n;i++){
        //     cout<<"Enter the element at index-"<<i<<" : ";
        //     cin>>arr[i];
        // }
        // revArrayUsingBitwiseXOR(arr,n);
        // for(int i=0;i<n;i++){
        //     cout<<arr[i]<<" ";
        // }



        //** IMP **/
        //Any variable declared inside a function is it's local variable
        //Memory is allocated to those variables when function is called, and memory is deallocated when function scope finishes.
    return 0;
} 