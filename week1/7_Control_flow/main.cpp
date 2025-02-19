#include<iostream>

using namespace std;

int main(){
    // 1) if  & if-else Statement 
    // int budget;
    // cout<<"Enter your budget : "<<endl;
    // cin>>budget;

    // if(budget > 2000000){
    //     cout<<"You can buy Scorpio"<<endl;
    // }
    // else{
    //     cout<<"sorry you can't"<<endl;
    // }

    // int age = 19;

    // if(age>18){
    //     cout<<"You can vote"<<endl;
    // }
    // else{
    //     cout<<"You cannot vote"<<endl;
    // }

    // 2) if-else if statement

    // int marks = 65;
    // if(marks>90){
    //     cout<<'A'<<endl;
    // }
    // else if(marks>80){
    //     cout<<'B'<<endl;
    // }
    // else if(marks>70){
    //     cout<<'C'<<endl;
    // }
    // else if(marks>60){
    //     cout<<'D'<<endl;
    // }


    // 3) if-else if-else statement
    // int marks = 55;
    // if(marks>90){
    //     cout<<'A'<<endl;
    // }
    // else if(marks>80){
    //     cout<<'B'<<endl;
    // }
    // else if(marks>70){
    //     cout<<'C'<<endl;
    // }
    // else if(marks>60){
    //     cout<<'D'<<endl;
    // }
    // else{
    //     cout<<"you failed"<<endl;
    // }

    // 4) Nested-if

    int height;
    cout<<"Enter your height : "<<endl;
    cin>>height;

    int weight;
    cout<<"Enter your weight : "<<endl;
    cin>>weight;

    if(height>5){
        if(weight>70){
            cout<<"you got a good BMI"<<endl;
        }
        else{
            cout<<"Bhai tujhse na ho payega"<<endl;
        }
    }
    else{
        cout<<"complain dila du"<<endl;
    }

    return 0;
}