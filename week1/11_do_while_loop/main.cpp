#include<iostream>

using namespace std;

int main(){
    // for(int i=1;i<=5;i++){
    //     cout<<i<<" ";
    // }

    // cout<<endl;

    // int j=1;
    // while(j<=5){
    //     cout<<j<<" ";
    //     j++;
    // }

    // do-while loop : In this, first iteration will occur independent of the condition.
    // int i=1;
    // do{
    //     cout<<i<<" ";
    //     i++;
    // }while(i<=5);

    // cout<<endl;

    // int j=21;
    // do{
    //     cout<<j<<" ";
    //     j++;
    // }while(j<=5);

    // int count = 20;
    // int i=1;
    // do{
    //     cout<<"rohit ";
    //     i++;
    // }while(i<=count);


    // H.W Questions

    // 1) 
    // for(int i=1;i<=5;i++);{
    //     cout<<i<<" ";
    // }
    // Ans : Error occurs

    // 2) 
    // if(cout<<"Hii"){
    //     cout<<"rohit";       
    // }
    // Ans: Hiirohit

    // 3) 
    // int i;
    // if(cin>>i){
    //     cout<<"Rohit";
    // }
    // Ans : Rohit



    // *** Nested loops *** //

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout<<i<<""<<j<<" ";
    //         // cout<<endl;
    //     }
    //     cout<<endl;
    // }

    
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
