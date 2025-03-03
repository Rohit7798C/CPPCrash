#include<iostream>
#include<climits>
#include<math.h>
#include<algorithm>
using namespace std;

int findMinValueIn2DArray(int arr[][4],int rowSize,int colSize){
    int minValue = INT_MAX;
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            // if(arr[row][col] < minValue){
            //     minValue = arr[row][col];
            // }
            minValue = min(minValue,arr[row][col]);
        }
    }
    //Overall Time Complexity : O(rowSize*colsize);
    //Overall Space Complexity : O(1) = Constant space;
    return minValue;
}

int findMaxValueIn2DArray(int arr[][4] ,int rowSize,int colSize){
    int maxValue = INT_MIN;
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            // if(arr[row][col]>maxValue){
            //     maxValue = arr[row][col];
            // }
            maxValue = max(maxValue,arr[row][col]);
        }
    }

    //Overall Time Complexity : O(rowSize*colsize);
    //Overall Space Complexity : O(1) = Constant space;
    return maxValue;
}

void printRowSum(int arr[][4],int rowSize,int colSize){
    
    //for row-0 => col-0 + col-1 + col-2 + col-3 =>printSum
    //for row-1 => col-0 + col-1 + col-2 + col-3 =>printSum
    //for row-2 => col-0 + col-1 + col-2 + col-3 =>printSum

    for(int row=0;row<rowSize;row++){
        int sum=0;
        //har row ke liye 'sum' starting mein 0 hai.
        for(int col=0;col<colSize;col++){
            sum = sum + arr[row][col];
        }
        //jab saare column ke elements add kar liye hai 
        //toh print kardo.
        cout<<"Sum for row-"<<row<<" is : "<<sum<<endl;

        //Overall Time Complexity : O(rowSize*colsize);
        //Overall Space Complexity : O(1) = Constant space;
    }
}

void printColSum(int arr[][4],int rowSize,int colSize){
    //for col-0 => row-0 + row-1 + row-2 =>printSum
    //for col-1 => row-0 + row-1 + row-2 =>printSum
    //for col-2 => row-0 + row-1 + row-2 =>printSum
    //for col-3 => row-0 + row-1 + row-2 =>printSum

    for(int col=0;col<colSize;col++){
        //har column ke liye mere pass sum 0 hona chahiye.
        int sum=0;
        for(int row=0;row<rowSize;row++){
            sum = sum + arr[row][col];
        }
        //har column ke liye sum print kardo.
        cout<<"Sum for col-"<<col<<" is : "<<sum<<endl;

        //Overall Time Complexity : O(rowSize*colsize);
        //Overall Space Complexity : O(1) = Constant space;
    }
}

void printDiagonalSum(int arr[][3],int rowSize,int colSize){
    int sum = 0;
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         if(row == col){
    //             sum = sum + arr[row][col];
    //         }
    //     }
    // }
    //Above two loops give time complexity of O(N^2)

    //But we can solve the problem in time complexity of O(N) using only single loop.
    for(int row=0;row<rowSize;row++){
        sum = sum + arr[row][row];
        //Time Complexity of O(N)
    }
    cout<<"Sum of diagonal is : "<<sum<<endl;
}

void printOppositeDiagonalSum(int arr[][3],int rowSize,int colSize){
    int sum = 0;
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            if(row+col == rowSize-1){
                sum = sum + arr[row][col];
            }
        }
    }
    cout<<"Sum of Opposite diagonal is : "<<sum<<endl;
}

void transposeOfMatrix(int arr[][3],int rowSize,int colSize){
    //Here swapping is done => arr[i][j] ==> arr[j][i]
    //So let's create an empty array in which we will insert arr[j][i].

    // int ans[100][100] = {0};

    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         ans[row][col] = arr[col][row];
    //     }
    // }
    // cout<<"Printing the answer array : "<<endl;
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         cout<<ans[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    //What if we are told to transpose the array in the same array , without using an external array?
    //When we use swap() function directly it covers all the elements of the array, and each and every element gets swapped,
    //because of which we get the same 2D-array.
    //So, we should ignore the indices of row and column which are swapped
    //This will create an upper triangular matrix.
    //So, for that we use the following loop 

    for(int row=0;row<rowSize;row++){
        for(int col=row;col<colSize;col++){
            swap(arr[row][col],arr[col][row]);
        }
    }
    cout<<"Printing the Transposed array : "<<endl;
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[3][3] = {
                {10,11,12},
                {20,21,22},
                {30,31,32}
    };
    int rowSize = 3;
    int colSize = 3;

    // int minValue = findMinValueIn2DArray(arr,rowSize,colSize);
    // cout<<"The minimum value is : "<<minValue<<endl;


    // int maxValue = findMaxValueIn2DArray(arr,rowSize,colSize);
    // cout<<"The maximum value is : "<<maxValue<<endl;

    
    // printRowSum(arr,rowSize,colSize);

    // printColSum(arr,rowSize,colSize);

    // printDiagonalSum(arr,rowSize,colSize);

    // printOppositeDiagonalSum(arr,rowSize,colSize);

    transposeOfMatrix(arr,rowSize,colSize);
    return 0;
}