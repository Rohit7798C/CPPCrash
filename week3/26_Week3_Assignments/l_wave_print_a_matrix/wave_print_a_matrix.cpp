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
    vector<vector<int>>arr(3,vector<int>(4));
    // int n;
    cout<<"Enter the elements : ";
    // cin>>n;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Wave form is : ";
    wavePrintOfMatrix(arr);
    return 0;
}