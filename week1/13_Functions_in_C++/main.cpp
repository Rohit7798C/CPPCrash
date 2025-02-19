#include<iostream>
// functions : It is a block of code that performs some task. The code becomes easy to reuse , readable, maintainable, easy to understand.
// Order matters : The function should atleast be declared before calling.
using namespace std;

// void printCounting(){
//     for(int i=0;i<=5;i++){
//         cout<< i << " "; 
//     }
//     cout << endl;
// }

// function definition
// int sum(int a, int b){
//     int totalSum = a + b;
//     return totalSum;
// }

// void printName(){
//     cout<< "Rohit" << endl;
// }

// void printMyName();

int getMultiplication(int x,int y,int z){
    int result = x*y*z;
    return result;
}

void printMyNameTenTimes(){
    for(int i=1;i<=10;i++){
        cout<<"Rohit "<<endl;
    }
}

void printMultiples(int num){
    for(int i=1;i<=10;i++){
        cout<< i*num <<endl;
    }
}

int convertIntoCelsius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answer = ch -'a' +'A';
    return answer;
}
int main(){
    
    // printCounting();
    // cout<<"Rohit"<<endl;

    // printCounting();
    // int a;
    // cin >> a;

    // cout<< "Value of a : " << endl;
    // printCounting();

    
    // function call
    // Kyunki ye function kuch return kar raha hai, isilye iska return value kisi variable mein store karni padegi.
    // int ans = sum(5,10);
    // cout<< ans << endl;

    // // function call
    // printName();

    // printMyName();

    // int multiplicationAnswer = getMultiplication(5,4,3);
    // cout<<"Multiplication is "<<multiplicationAnswer;

    // printMyNameTenTimes();

    // printMultiples(5);

    // int celsius = convertIntoCelsius(32);
    // cout<<"Degree in celsius : "<<celsius;

    char answer = convertIntoUpperCase('r');
    cout<<answer << " ";
    return 0;
}

// This function is defined after main function, so it throws error. 
// So , Ordering matters.
// void printMyName(){
//     cout<< " Rohit " << endl;
// }

// to avoid such errors, we should declare the function before int main().