#include<iostream>

using namespace std;

int main(){
    // IMPLICIT CASTING
    // 1) int to float
    // int n1 = 10;
    // float n2 = 5.5;

    // float result = n1 + n2;
    // // Implicit conversion of n1 from int to float 

    // cout<<result<< " "<<endl;

    // 2) char to int

    // char ch = 'A';     // this stores the character A as 65 which is its ASCII Value.
    // // int a = ch + 1;    // Implicit conversion from char to int 
    // char a = ch + 1;
    //     // 66 = 65 + 1
    //     // a = 66 // convert to char
    //     // a = B
    // cout<< a << " " <<endl;


    // 3) int to char
    // int a = 99;
    // char ch = a;             // Implicit conversion from int to char
    // cout<< ch << " " << endl;

    // char ch = 'B';
    // int g = ch;             // Implicit conversion from char to int
    // cout<<g<<endl;


    // EXPLICIT CASTING : Manual Type Conversion
    // We use Casting operator (paranthesis)
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + (int)num2;    // Explicit conversion from float to int
    // cout<<result<<endl;

    // 1) double to int 
    // double pi = 3.14159265;
    // int intPi = (int)pi;       // Explicit conversion from double to int
    // cout<<intPi<<endl;

    // 2) float to char
    // float floatingNumber = 65.35;
    // char charValue = (char)floatingNumber;  // Explicit conversion from float to char
    // cout<<charValue<<endl;

    // 3) int to float 
    // int a = 10;
    // int b = 3.0;
    // float c = a/b;    // Implicit TypeConversion from int to float 
    // cout<<c<<endl;    // output : 3

    // *** Bonus ***
    // int/int = int 
    // int/float = float
    // float/int = float 

    // int a = 10;
    // int b = 3.0;
    // float c = a/(float)b;       // Explicit TypeConversion from int to float 
    // cout<<c<<endl;              // output :  3.33333
    return 0;
}