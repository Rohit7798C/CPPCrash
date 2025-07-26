//Wave print of a matrix.

#include<bits/stdc++.h>

using namespace std;

void printInWaveForm(vector<vector<int>>arr){
    
    int row = arr.size();
    int col = arr[0].size();
    
    for(int j = 0;j<col;j++){
        if(j%2 == 0){
            for(int i = 0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else if(j%2 !=0){
            for(int i = row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>>arr;
    int rowSize;
    cout<<"Enter the number of rows : ";
    cin>>rowSize;
    int colSize;
    cout<<"Enter the number of cols : ";
    cin>>colSize;
    arr.resize(rowSize);
    cout<<"Enter the elements : ";
    for(int i = 0;i<rowSize;i++){
        arr[i].resize(colSize);
        for(int j=0;j<colSize;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The actual matrix is : "<<endl;
    for(int i=0;i<rowSize;i++){
        for(int j =0 ;j<colSize;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The wave form is : "<<endl;
    printInWaveForm(arr);
    return 0;
}