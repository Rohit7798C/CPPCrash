#include<iostream>
#include<vector>

using namespace std;

//Printing wave form of matrix.
void wavePrintOfMatrix(vector<vector<int>>arr){
    int row = arr.size();
    int col = arr[0].size();
    for(int j=0;j<col;j++){
        // Even number of column -> Top to Bottom
        if(j%2==0){
            for (int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        }
        // Odd number of column -> Bottom to Top
        else if(j%2!=0){
            for (int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout<<endl;
}

int main(){

    //if we doesn't explicitly specify the no. of rows and no. of columns, then we have to use resize().
    vector<vector<int>>arr;
    int numRows, numCols; 
    cout<<"Enter the number of rows : ";
    cin>>numRows;
    cout<<"Enter the number of cols : ";
    cin>>numCols;
    // Resize the outer vector to hold 'numRows' inner vectors
    arr.resize(numRows); 
    
    cout<<"Enter the elements (" << numRows << " rows, " << numCols << " columns): " << endl;
    for(int i = 0;i<numRows;i++){
        // For each row, resize the inner vector to hold 'numCols' elements
        arr[i].resize(numCols); 
        for(int j = 0;j<numCols;j++){
            cin>>arr[i][j];
        }
    }

    // vector<vector<int>>arr(3,vector<int>(4));
    // int n;
    // cout<<"Enter the elements : ";
    // cin>>n;

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    cout<<"Wave form is : ";
    wavePrintOfMatrix(arr);
    return 0;
}
