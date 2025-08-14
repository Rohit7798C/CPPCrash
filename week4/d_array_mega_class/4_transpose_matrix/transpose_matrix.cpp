//This code is for finding the transpose of a Square Matrix
//For finding transpose of a general matrix, we have to use an external matrix.
#include<bits/stdc++.h>

using namespace std;

void transpose(vector<vector<int>>matrix){
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    cout<<"The matrix after transpose is : "<<endl;
    for(int i = 0;i<rowSize;i++){
        for(int j = i+1;j<rowSize;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int rowSize;
    cout<<"Enter the number of rows : ";
    cin>>rowSize;
    int colSize;
    cout<<"Enter the number of cols : ";
    cin>>colSize;
    vector<vector<int>>matrixForTranspose(rowSize,vector<int>(colSize));
    cout<<"Enter the elements for the matrix : "<<endl;
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            cin>>matrixForTranspose[i][j];
        }
    }
    cout<<"The actual matrix is : "<<endl;
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            cout<<matrixForTranspose[i][j]<<" ";
        }
        cout<<endl;
    }
    transpose(matrixForTranspose);
    return 0;
}