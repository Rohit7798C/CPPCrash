// Rule for Pattern Printing                      * * * * 
// 1) divide the rows and columns                 * * * * 
// 2) no. of rows -> 4 rows                       * * * *
// (stars are always printed in row-wise manner)  * * * * 
// 3) row 0 -> 4 star
//    row 1 -> 4 star
//    row 2 -> 4 star
//    row 3 -> 4 star

#include<iostream>

using namespace std;

int main(){

    // 1) SQUARE PATTERN

    // total rows = 4
    // every row -> 4 star

    // row -> outer
    // col -> inner 

    // outer loop -> 4 rows
    // for(int row=0;row<4;row++){
    //     // inner loop -> 4 star print
    //     // har ek row mein kya karna hai, woh inner loop batayega
    //     for(int col=0;col<4;col++){
    //         // har 1 single column mein, 1 star rakha hai
    //         cout<<"* ";
    //     }
    //     // 4 star print karane ke baad, next line mein aata hu
    //     cout<<endl;
    // }

    // Square with user input 

    // int side;
    // cout<<"Enter the length of Side of Square : ";
    // cin>>side;

    // for(int i=0;i<side;i++){
    //     for(int j=0;j<side;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // 2) RECTANGLE PATTERN
 
        // 1) no. of rows -> 3 rows                       * * * * * * 
        // (stars are always printed in row-wise manner)  * * * * * * 
        // 2) row 0 -> 5 star                             * * * * * * 
        //    row 1 -> 5 star                             
        //    row 2 -> 5 star
        // 3) no. of cols -> 5 cols 
        // total rows -> 3
        // every row -> 5 star

       
        // int length,width;
        // cout<<"Enter the length : ";
        // cin>>length;
        // cout<<"Enter the width : ";
        // cin>>width;


        // // outer 
        // for(int i=0;i<length;i++){
        //     // inner
        //     for(int j=0;j<width;j++){
        //         // har ek column mein 1 * print karna hai
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // }


        // 3) Hollow Rectangle
        //      * * * * * 
        //      *       * 
        //      *       *
        //      * * * * *

        // 1) Total rows -> 4
        // 2) row 0 -> 5 star
        //    row 1 -> 1 star 3 space 1 star
        //    row 2 -> 1 star 3 space 1 star
        //    row 3 -> 5 star

        // int length,width;
        // cout<<"Enter the length : ";
        // cin>>length;
        // cout<<"Enter the width : ";
        // cin>>width;
        
        // // outer
        // for(int row=0;row<length;row++){
        //     // inner
        //     for(int col=0;col<width;col++){
        //         // first and last row mein all stars
        //         if(row==0 || row==length-1){
        //             cout<<"* ";
        //         }
        //         else{
        //             // middle rows
        //             if(col==0 || col==width-1){
        //                 cout<<"* ";
        //             }
        //             else{
        //                 cout<<"  ";
        //             }
        //         }
        //     }
        //     cout<<endl;
        // }


        // 4) Hollow Square

            // * * * * 
            // *     * 
            // *     *
            // * * * *
        // int n;
        // cout<<"Enter the length of side of Square : ";
        // cin>>n;

        // //outer -> rows
        // for(int row=0;row<n;row++){
        //     //inner -> cols
        //     for(int col=0;col<n;col++){
        //         //logic
        //         // if(row==0||row==n-1){
        //         //     cout<<"* ";
        //         // }
        //         // else{
        //         //     //middle rows
        //         //     if(col == 0 || col == n-1){
        //         //         cout<<"* ";
        //         //     }
        //         //     //middle cols
        //         //     else{
        //         //         cout<<"  ";
        //         //     }
        //         // }

        //         //Another short-cut method 
        //         if(row==0||row==n-1||col==0||col==n-1||row==col){
        //             cout<<"* ";
        //         }
        //         else{
        //             cout<<"  ";
        //         }
        //     }
        //     //yeh main bhul jata hoon
        //     cout<<endl;
        // }
        
    // IMP
    // 1) Outer loop hamesha same tarike se likhenge.(jitni rows hongi)
    // 2) Inner loop, hamesha no. of columns count kare padenge, uss hisab se likhenge. Matlab inner loop hamesha same nahi rahega.
    // 3) No. of columns hamesha same nahi rahenge, woh change hote rahenge.
    // 4) No. of rows ka loop hamesha aise hi chalega, lekin No. of Columns ka loop mein varities hongi.


    //5) Half Pyramid
        //Is mein no. of columns simple nahi hoga
        //c0 c1 c2 c3 c4
//        |  |   |  |  | 
// r0 ->  *  |   |  |  |
// r1 ->  *  *   |  |  |
// r2 ->  *  *   *  |  |
// r3 ->  *  *   *  *  |
// r4 ->  *  *   *  *  *


// Rules to follow
// 1) total rows => n=5
// 2) find formula
// r0 -> 1*
// r1 -> 2*     => gives the formula:  No.(rows) => (row+1)stars
// r2 -> 3*
// r3 -> 4*
// r4 -> 5*

    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // //outer loop
    // for(int row=0;row<n;row++){
    //     //inner loop - columns
    //     for(int col=0;col<row+1;col++){
    //         //we can also use col=<row instead of col<row+1 (both are same).
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    

    //6) Inverted half Pyramid
        //c0  c1  c2  c3  
//r0 ->   *   *   *   *
//r1 ->   *   *   *   
//r2 ->   *   *   
//r3 ->   *   

//Tips:
//1) Sometimes we may get the formula directly, but sometimes it may be difficult to get it.
//2) For difficult case, we have to use "Hit & Trail" method.
//3) i|p    |    target
//  n=5,r=0 |      5
//  n+r = 5 or n-r=5 (Both are correct, so we have to try for other inputs)

//  n=5,r=1 |      4
//  n-r = 4 ,  n+r = 6 X(Wrong)

//  n=5,r=2 |      3
//  n-r = 3 |  n+r = 7 X(Wrong)

//  n=5,r=3 |      2
//  n-r = 2 |  n+r = 8 X(Wrong)

//  n=5,r=4 |      1
//  n-r = 1 |  n+r = 8 X(Wrong)

//So, here n-r formula gives the correct answer for all the inputs.

// Rules to follow
// 1) total rows -> n=4
// 2) r0 -> 4 -> n-row (4-0=4)
// 2) r1 -> 3 -> n-row (4-1=3)
// 2) r2 -> 2 -> n-row (4-2=2)
// 2) r3 -> 1 -> n-row (4-3=1)

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    //outer loop
    for(int row=0;row<n;row++){
        //inner loop - columns
        for(int col=0;col<n-row;col++){
            //col<n-r is same as col<=n-r-1
            cout<<"* ";
        }
        cout<<endl;
    }

    
    //7) Hollow half Pyramid

    //r0 ->  *           //all stars
    //r1 ->  * *         //all stars 
    //r2 ->  *   *       //stars in first and last columns
    //r3 ->  *     *     //stars in first and last columns
    //r4 ->  *       *   //stars in first and last columns
    //r5 ->  * * * * * * //all stars


    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     int totalColumns = row+1;
    //     for(int col=0;col<totalColumns; col++){
    //         // if(row==0 || row==1 || row==n-1){
    //         //     cout<<"* ";
    //         // }
    //         // else{
    //         //     //middle rows
    //         //     if(col==0 || col==totalColumns-1){
    //         //         cout<<"* ";
    //         //     }
    //         //     else{
    //         //         //middle columns
    //         //         cout<<"  ";
    //         //     }
    //         // }

    //         //shortcut logic
    //         if(row == 0 || row == 1 || row == n-1 || col == 0 || col==row){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //8) Inverted Hollow half Pyramid

    //r0 ->  * * * * * * //all stars
    //r1 ->  *       *   //stars in first and last columns
    //r2 ->  *     *     //stars in first and last columns
    //r3 ->  *   *       //stars in first and last columns
    //r4 ->  * *         //all stars
    //r5 ->  *           //all stars
    
   
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row = 0;row<n;row++){
    //     int totalColumns = n-row;
    //     for(int col = 0;col<n-row; col++){
    //         // if(row==0 || row==n-2 || row==n-1){
    //         //     cout<<"* ";
    //         // }
    //         // else{
    //         //     if(col==0 || col==totalColumns-1){
    //         //         cout<<"* ";
    //         //     }
    //         //     else{
    //         //         cout<<"  ";
    //         //     }
    //         // }

    //         if(row==0 || row == n-1 || col == 0 || row+col == n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    

    //9) Numeric Half Pyramid

        // c0 c1 c2 c3
        //  |  |  |  |
    //r0 -> 1  |  |  |
    //r1 -> 1  2  |  |
    //r3 -> 1  2  3  |
    //r4 -> 1  2  3  4
    
    // Rule to follow : 
    //1)total rows = 4
    //2) r0 -> 1number   (r0 + 1 = 1)
    //   r1 -> 2numbers  (r1 + 1 = 2)
    //   r2 -> 3numbers  (r2 + 1 = 3)
    //   r3 -> 4numbers  (r3 + 1 = 4)
    // So, formula becomes col = row + 1
    //3) c0 -> 1 -> c0 + 1 = 1 (in all the rows)
    //   c1 -> 2 -> c1 + 1 = 2 (in all the rows)
    //   c2 -> 3 -> c2 + 1 = 3 (in all the rows)
    //   c3 -> 4 -> c3 + 1 = 4 (in all the rows)
    //4) So, formula becomes cout<<col + 1. And for half pyramid formula is col = row+1.
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row = 0;row < n;row++){
    //     for(int col = 0; col<row+1;col++){
    //         cout<<col+1<<" ";
    //     }
    //     //yeh mai bhul jata hu.
    //     cout<<endl;
    // }


    // for(int row = 0; row < n; row++){
    //     int count = 1;
    //     for(int col = 0; col < row+1 ;col++,count++){
    //         cout<<count<<" ";
    //     }
    //     cout<<endl;
    // }


    //10) Inverted Numeric Half Pyramid
        // c0  c1 c2 c3 c4 
    //r0 -> 1  2  3  4  5
    //r1 -> 1  2  3  4
    //r2 -> 1  2  3
    //r3 -> 1  2
    //r4 -> 1

   //Rules to follow
   //1) total no of rows -> n = 5
   //2) r0 -> 5numbers     (n - row0 = 5)
   //   r1 -> 4numbers     (n - row1 = 4)
   //   r2 -> 3numbers     (n - row2 = 3)
   //   r3 -> 2numbers     (n - row3 = 2)
   //   r4 -> 1numbers     (n - row4 = 1)
   //3) So, formula becomes col = n-row.
    // int n;
    // cout<<"Enter the value of n : ";
    // cin>>n;

    // for(int row = 0; row <n; row++){
    //     for(int col = 0;col <n-row ;col++){
    //         cout<<col+1<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}