//This code only works for square matrices (in-place transpose)
#include<bits/stdc++.h>

using namespace std;

void transposeOfMatrix(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();
    
    for(int i = 0;i<row;i++){
        for(int j = i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>>arr(3,vector<int>(3,0));
    int row = 3, col = 3;
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
    transposeOfMatrix(arr);
    
    return 0;
}