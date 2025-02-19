#include<iostream>

using namespace std;

int main(){
    // 1) Full Pyramid 

    //r0 ->       *
    //r1 ->     *   *
    //r2 ->    *  *  *
    //r3 ->   *  *  *  * 
    //r4 ->  *  * *  *  * 

    // Rules
    // 1) total rows -> n = 5
    // 2) r0 -> 4sp, 1*    (n-r-1 = 5-0-1 = 4)(space), row+1 (*)
    //    r1 -> 3sp, 2*    (n-r-1 = 5-1-1 = 3)(space),
    //    r2 -> 2sp, 3*    (n-r-1 = 5-2-1 = 2)(space),
    //    r3 -> 1sp, 4*    (n-r-1 = 5-3-1 = 1)(space),
    //    r4 -> 0sp, 5*    (n-r-1 = 5-4-1 = 0)(space),

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    
    // for(int row = 0; row < n; row++){
    //     //For spaces
    //     for(int col = 0; col < n-row-1; col++){
    //         cout<<" ";
    //     }
    //     //For stars
    //     for(int col = 0; col < row+1 ; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // 2) Inverted Full Pyramid 

    //r0 ->  *  *  *  *  * 
    //r1 ->   *  *  *  * 
    //r2 ->    *  *  *
    //r3 ->     *   *
    //r4 ->       *

    // Rules
    // 1) total rows -> n = 5
    // 2) r0 -> 0sp, 5*    (n=r)(space), (n-r = 5-0 = 5) (*)
    //    r1 -> 1sp, 4*    (n=r)(space), (n-r = 5-1 = 4) (*)
    //    r2 -> 2sp, 3*    (n=r)(space), (n-r = 5-2 = 3) (*)
    //    r3 -> 3sp, 2*    (n=r)(space), (n-r = 5-3 = 2) (*)
    //    r4 -> 4sp, 1*    (n=r)(space), (n-r = 5-4 = 1) (*)

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    
    // //outer loop
    // for(int row=0;row<n;row++){
    //     //inner loops
    //     //spaces
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     } 
    //     cout<<endl;
    // }


    //3) Diamond Pattern (Full pyramid + Inverted Full Pyramid)

    //r0 ->       *
    //r1 ->     *   *
    //r2 ->    *  *  *
    //r3 ->   *  *  *  * 
    //r4 ->  *  * *  *  * 
    //r0 ->  *  *  *  *  * 
    //r1 ->   *  *  *  * 
    //r2 ->    *  *  *
    //r3 ->     *   *
    //r4 ->       *

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //4) Hollow Pyramid

    //r0 ->       *
    //r1 ->     *   *
    //r2 ->    *     *
    //r3 ->   *       * 
    //r4 ->  * *  *  * * 

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row = 0; row < n; row++){
    //     for(int col = 0 ;col <n-row-1; col++){
    //         cout<<" ";
    //     }
    //     for(int col = 0; col <row+1;col++){
    //         if(col == 0 || row == 0 || row == n-1 || col == row){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    

    // 5) Inverted Hollow Pyramid

    //r0 ->  *  *  *  *  * 
    //r1 ->   *         * 
    //r2 ->    *      *
    //r3 ->     *   *
    //r4 ->       *

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row = 0 ;row<n;row++){
    //     for(int col = 0 ; col < row;col++){
    //         cout<<" ";
    //     }
    //     for(int col = 0; col<n-row;col++){
    //         if(row==0||row==n-1||col == n-row-1||col==0){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // 6) Hollow Diamond
    
    //r0 ->       *
    //r1 ->     *   *
    //r2 ->    *     *
    //r3 ->   *       * 
    //r4 ->  *         * 
    //r0 ->  *         * 
    //r1 ->   *       * 
    //r2 ->    *     *
    //r3 ->     *   *
    //r4 ->       *
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;


    // for(int row = 0;row < n;row++){
    //     for(int col = 0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         if(col==0 || row==0 || col==row){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0; col<n-row;col++){
    //         if(row==n-1 || col==n-row-1 || col == 0){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    

    // 7) Mix Pyramid 

    
        //c0 c1  c2  c3  
// r0 ->  *   *   *   *  _  *   *   *   *
// r1 ->  *   *   *   _  _  _   *   *   *   
// r2 ->  *   *   _   _  _  _   _   *   *   
// r3 ->  *   _   _   _  _  _   _   _   *
// r0 ->  *   _   _   _  _  _   _   _   *
// r1 ->  *   *   _   _  _  _   _   *   *
// r2 ->  *   *   *   _  _  _   *   *   *  
// r3 ->  *   *   *   *  _  *   *   *   *


    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
// // Part-I
// // r0 ->  4* 1sp 4*  
// // r1 ->  3* 3sp 3*  
// // r2 ->  2* 5sp 2*  
// // r3 ->  1* 7sp 1*  

// // For stars we get col=n-row.
// // For spaces, we can see that these are odd numbers.
// // So, formula will be col = 2*row + 1.

    // for(int row = 0 ;row<n;row++){
    //     // I. stars
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     // II. spaces
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<"  ";
    //     }
    //     // for(int col=0;col<row+1;col++){
    //     //     cout<<"  ";
    //     // }

    //     // III. stars
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
// // Part-II
// // r0 ->  1* 7sp 1*  
// // r1 ->  2* 5sp 2*  
// // r2 ->  3* 3sp 3*  
// // r3 ->  4* 1sp 4*  

// // For stars we get col=n-row.
// // For spaces, we can see that these are odd numbers.
// // So, formula will be col = 2*row + 1.
    // for(int row=0;row<n;row++){
    //     // I. stars
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     // II. spaces
    //     for(int col=0;col<2*(n-row)-1;col++){
    //         cout<<"  ";
    //     }
    //     // for(int col=0;col<n-row;col++){
    //     //     cout<<"  ";
    //     // }
    //     // III. stars
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // 8) Fancy 12 Pattern

           //c0 c1 c2 c3 c4 c5 c6 c7 c8 
    // r0 -> 1 
    // r1 -> 2  *  2
    // r2 -> 3  *  3   *  3
    // r3 -> 4  *  4   *  4  *  4
    // r4 -> 5  *  5   *  5  *  5  *  5

// inner loop
// r0 -> 1 times
// r1 -> 3 times
// r2 -> 5 times
// r3 -> 7 times
// r4 -> 9 times

// For inner loop
// At even indexes : print number
// At odd indexes : print *
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<2*row+1;col++){
    //         if(col%2==0){
    //             cout<<row+1<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

        // 8) Full Fancy 12 Pattern

           //c0 c1 c2 c3 c4 c5 c6 c7 c8 
    // r0 -> 1 
    // r1 -> 2  *  2
    // r2 -> 3  *  3   *  3
    // r3 -> 4  *  4   *  4  *  4
    // r4 -> 5  *  5   *  5  *  5  *  5
    // r5 -> 4  *  4   *  4  *  4
    // r6 -> 3  *  3   *  3
    // r7 -> 2  *  2
    // r8 -> 1 

// inner loop
// r0 -> 1 times
// r1 -> 3 times
// r2 -> 5 times
// r3 -> 7 times
// r4 -> 9 times
// r0 -> 7 times
// r1 -> 5 times
// r2 -> 3 times
// r3 -> 1 times

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row = 0;row<n;row++){
    //     for(int col=0;col<2*row+1;col++){
    //         if(col%2==0){
    //             cout<<row+1<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // //This decrement is very IMP, because we are decreasing the value of 'n' for the lower inverted triangle.
    // n--;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<2*(n-row)-1;col++){
    //         if(col%2==0){
    //             cout<<n-row<<" ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // 10) ABCBA Pattern
// ASCII value of A is 65
// r0 -> A
// r1 -> A B A
// r2 -> A B C B A
// r3 -> A B C D C B A
// r4 -> A B C D E D C B A

// int n;
// cout<<"Enter the value of n : ";
// cin>>n;
 
//     for(int row=0;row<n;row++){
//         // char ch = 'A' - 1;    //initializing ch with 64 ASCII Value.

//         // We can also initialize ch as 
//         char ch = 'A';
//         for(int col=0;col<row+1;col++){
//             // ch++;             //ch again becomes 65(i.e. 'A').
//             // cout<<ch;         //printing 'A'.

//             cout<<ch;
//             ch++;
//         }
//         ch--;
//         while(ch >'A'){
//             ch--;
//             cout<<ch;
//         }

//         cout<<endl;
//     }
    return 0;
}
