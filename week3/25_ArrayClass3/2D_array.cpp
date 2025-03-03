#include<iostream>

using namespace std;
                    //*** 2D-Array ***//
int main(){
    //When we create a "static" 2D-array without initialization, we get garbage values in it.
    //But in case of 2D-"dynamic" array we get zeros(0), rather than garbage values.

    //       col-0 col-1 col-2 col-3 
    // row-0 (0,0) (0,1) (0,2) (0,3)         //These boxes are called cells.
    // row-1 (1,0) (1,1) (1,2) (1,3) 
    // row-2 (2,0) (2,1) (2,2) (2,3)
    // row-3 (3,0) (3,1) (3,2) (3,3)

    //(2,1) , Here 2 is row-index and 1 is column-index.

    //**2D-Array does not exist in real, in-fact it is like a 1D array in the memory**/
    //It is represented as :
    //  row0 elements of abv table, row1 elements of table, row2 elements of abv table  and so on.
    //      ________|_________      ________|_________     ________|_________
    //     |                  |     |                 |    |                 |       
    //   (0,0) (0,1) (0,2) (0,3) (1,0) (1,1) (1,2) (1,3) (2,0) (2,1) (2,2) (2,3) (3,0) (3,1) (3,2) (3,3)
    //     0     1     2     3     4     5     6     7     8     9     10    11    12    13    14    15
    //But here the indexing is of 2D array and we are saying it is 1D array in the memory, so how do we convert the 2D indexing into 1D indexing?
    //*** We use the formula ***/
    // 1D array index = c*i+j
    //where, c = total no. of columns
    //       i -> rowIndex
    //       j -> colIndex
    //e.g: arr[2,3] : Here rowIndex = 2, colIndex = 3

    //Suppose we check for (2,2)
    //e.g: arr[2,2] : Here rowIndex=i=2, colIndex=j=2 and c = 4
    //    i = 2, j = 2
    // So, 1D index = (c*i)+j
    //              = (4*2)+2 = 8+2 = 10
    // So, 1D index = 10 
    // So, the element at (2,2) in 2D-array will be present at index-10 in 1D-array.


    //1) 2D-array initialization.
        // int arr[4][3] = {
        //                     {10,20,30},
        //                     {11,12,13},
        //                     {15,16,17},
        //                     {20,21,22},
        //                 };

    //2) Access in 2D-Array.
        // arr[i][j] will give the element at ith row and jth column.

    //3) Printing in 2D-Array(Use Nested loops).
    // int n;                    //Where nxn is the size of 2D-array.
    // int arr[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<arr[i][j];
    //     }
    // }


    //*** Practicing 2D-Array ***//
    //1) Declaring 2D-array
        // int arr[4][3];

    //2) Initializaing 
        //Method-1
        // int arr[3][2] = {
        //                    {10,20},
        //                    {30,40},
        //                    {50,60}
        //                 };
        // cout<<arr[0][0]<<endl;        //10
        // cout<<arr[0][1]<<endl;        //20
        // cout<<arr[1][1]<<endl;        //40
        // cout<<arr[2][1]<<endl;        //60

        //Method-2
        // int arr[3][2] = {10,20,30,40,50,60};
        //Writing in one line.
        
   
        //When we insert less elements than specified, other elements become 0
        //int arr[3][2] = {10,20};
        //On printing we get output as : 
                // 10 20 
                // 0 0   
                // 0 0

    //3) Printing entire Array (traversing entire array).
        // int rowSize = 3;
        // int colSize = 2;
        // for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
        //     for(int colIndex = 0; colIndex < colSize; colIndex++){
        //         cout<<arr[rowIndex][colIndex]<<" ";
        //     }
        //     cout<<endl;
        // }

    //HW : How does the fill method work for 2D-array.
    //We have to use for-loop to use fill() function for 2D-array.
    //Fill each row individually (since fill() works on contiguous memory).
    // for(int i=1;i<3;i++){
    //     fill(arr[i],arr[i]+2,100);
           //here fill starts from 0th column and goes upto 1st column i.e (arr[i]+1) excluding (arr[i]+2) column.
           //Here, fill traverses the columns, while for loop traverses the rows.
    // }
    //Printing the array.
    // int rowSize = 3;
    //     int colSize = 2;
    //     for(int rowIndex = 0; rowIndex < rowSize; rowIndex++){
    //         for(int colIndex = 0; colIndex < colSize; colIndex++){
    //             cout<<arr[rowIndex][colIndex]<<" ";
    //         }
    //         cout<<endl;
    // }

    
    //Different ways of printing the 2D-Array.
    // int arr[3][3] = {
    //                 {10,20,30},
    //                 {40,50,60},
    //                 {70,80,90}
    //             };
    // int n=3;
    // int arr[3][2] = {
    //                 {10,20},
    //                 {30,40},
    //                 {50,60}
    //             };
    // int rowSize=3;
    // int colSize=2;

    //1)Method-I: Row-wise printing
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    //2)Method-II: Column-wise printing (column becomes row and row becomes column).
    // for(int row=0;row<rowSize;row++){
        //     for(int col=0;col<colSize;col++){
            //         cout<<arr[col][row]<<" ";         //Changing the position of row and col.
            //     }
            //     cout<<endl;
            // }
    //This code for column-wise only works for square-matrix.
    //So, let's do a general one.
    //We have to print every row for col-1 and col-2.
    //So, outer loop will be of column and inner loop will be of row.
    // for(int col=0;col<colSize;col++){
    //     for(int row=0;row<rowSize;row++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    //3)Method-III: Diagonal printing -> Square Matrix
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         if(row==col){
    //             cout<<arr[row][col]<<" ";    //Printing when row and col are equal
    //         }         
    //     }
    //     cout<<endl;
    // }
    //Above diagonal printing code gives O(N^2) complexity, but we can solve the diagonal printing using only one loop in O(N) time as:
    // for(int row=0;row<n;row++){
    //     cout<<arr[row][row]<<" ";
    // }

    //4)Method-III: Opposite Diagonal printing -> Square Matrix
    //row + col == rowSize - 1       //Condition for opposite diagonal
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         if(row+col == n-1){
    //             cout<<arr[row][col] << " ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Taking input in 2D-Array.
    int arr[2][3];
    int rowSize = 2;
    int colSize = 3;
    //Method-I: Row-wise input.
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize; col++){
    //         cout<<"Enter the value of ("<<row<<","<<col<<") : ";
    //         cin>>arr[row][col];
    //     }
    // }
    // cout<<"Printing 2D Array : "<<endl;
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}