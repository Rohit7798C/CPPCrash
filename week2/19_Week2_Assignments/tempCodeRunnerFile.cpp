#include<iostream>
#include<assert.h>
using namespace std;

int main(){

    //Q1. Numeric Hollow Half Pyramid

    // 1
    // 1 2
    // 1   3  
    // 1     4
    // 1 2 3 4 5


    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    
    // for(int row=0;row<n;row++){
    //     for(int col = 0;col<row+1;col++){
    //         if(row==0 || row==n-1 || col==0|| col == row){
    //             cout<<col+1<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    
    //Q2. Numeric Hollow Inverted Half Pyramid

    // 1 2 3 4 5 
    // 2     5   
    // 3   5     
    // 4 5       
    // 5
     
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         // int total_Columns = n-row;
    //         if(row == 0){
    //             cout<<col+1<<" ";
    //         }
    //         else if(col == 0){
    //             cout<<row+1<<" ";
    //         }
    //         else if(col == n-row-1){
    //             cout<<n<<"  ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
    //     }
       
    //     cout<<endl;
    // }

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=row+1;col<=n;col++){
    //         if(col == row+1 || col == n || row == 0){
    //             cout<<col<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Q3. Numeric Palindrome Equilateral Pyramid

        //         1 
        //       1 2 1
        //     1 2 3 2 1
        //   1 2 3 4 3 2 1
        // 1 2 3 4 5 4 3 2 1
   
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=n-row-1;col>=1;col--){
    //         cout<<"  ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<col+1<<" ";
    //     }
    //     for(int col=row;col>=1;col--){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    //Alternative approach
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // int k=n;
    // for(int i=0;i<n;i++){
    //     int c = 1;
    //     for(int j=0;j<k;j++){
    //         if(j<n-i-1){
    //             cout<<" ";
    //         }
    //         else if(j<=n-1){
    //             cout<<c;
    //             c++;
    //         }
    //         else if(j==n){
    //             c = c-2;
    //             cout<<c;
    //             c--;
    //         }
    //         else{
    //             cout<<c;
    //             c--;
    //         }
    //     }
    //     k++;
    //     cout<<endl;
    // }
 

    //Q4. Solid Half Diamond
     
    // * 
    // * * 
    // * * * 
    // * * * * 
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     // for(int col=0;col<n-row-1;col++){
    //     //     cout<<"* ";
    //     // }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Alternative code :
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int i=0;i<2*n-1;i++){
    //     // int cond = 0;
    //     // if(i<n){
    //     //     cond = i;
    //     // }
    //     // else{
    //     //     cond = n - (i%n) - 2;
    //     // }

    //     int cond = i<n ? i: n-(i%n) - 2;   //Using Ternary operator for the condition 
    //     for(int j=0;j<=cond;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Q5. Fancy Pattern #1

        // ********1********
        // *******2*2*******
        // ******3*3*3******
        // *****4*4*4*4*****
        // ****5*5*5*5*5****
        // ***6*6*6*6*6*6***
        // **7*7*7*7*7*7*7**
        // *8*8*8*8*8*8*8*8*
        // 9*9*9*9*9*9*9*9*9
   

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    assert(n<=9);    //This line tells that code will not work for n>9.
    for(int row=0;row<n;row++){
        // for(int col=0;col<8-row;col++){
        //     cout<<"*";
        // }
        // for(int col=0;col<row+1;col++){
        //     cout<<row+1;
        //     //VERY IMP
        //     if(col<row){
        //         cout<<"*";
        //     }
        // }
        for(int col=8-row;col>0;col--){
            cout<<"*";
        }
        
        
        for(int col=0;col<2*row+1;col++){
            if(col%2==0){
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }
       
        for(int col=8-row;col>0;col--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
