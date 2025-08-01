#include<bits/stdc++.h>

using namespace std;

void transposeOfMatrixGeneral(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();
    
    vector<vector<int>>transposeMatrix(col,vector<int>(row));
    
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            transposeMatrix[j][i] = arr[i][j];
        }
    }
    for(int i = 0;i<col;i++){
        for(int j = 0;j<row;j++){
            cout<<transposeMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>>arr(3,vector<int>(4,0));
    int row = 3, col = 4;
    cout<<"Enter the elements : "<<endl;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Normal Matrix : "<<endl;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose Of Matrix : "<<endl;
    transposeOfMatrixGeneral(arr);
    
    return 0;
}