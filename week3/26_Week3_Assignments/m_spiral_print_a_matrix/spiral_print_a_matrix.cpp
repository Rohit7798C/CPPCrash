//Spiral print of a Matrix.

#include<iostream>
#include<vector>

using namespace std;

vector<int>spiralMatrix(vector<vector<int>>matrix){
    vector<int>ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int totalElements = row*col;
    int startingRow = 0;
    int endingCol = col-1;
    int endingRow = row-1;
    int startingCol = 0;

    int count=0;
    //We will stop the loop when count of elements is less than total number elements.

    while(count<totalElements){
        //print starting ka row.
        for(int i=startingCol;i<=endingCol && count<totalElements;i++){
            ans.push_back(matrix[startingRow][i]);
            count++;

            //this condition can be inserted in the for loop itself using &&. 
            // if(count>=totalElements){
            //     break;
            // }
        }
        startingRow++;

        //print ending ka col.
        for(int i=startingRow;i<=endingRow && count<totalElements;i++){
            ans.push_back(matrix[i][endingCol]
            );
            count++;
        }
        endingCol--;

        //print ending ka row.
        for(int i=endingCol;i>=startingCol && count<totalElements;i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
         
        //print starting ka col.
        for(int i=endingRow;i>=startingRow && count<totalElements;i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main(){
    
    int row ;
    int col ;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of cols : ";
    cin>>col;
    
    vector<vector<int>>arr(row,vector<int>(col));
    cout<<"Enter the elements of the matrix : ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    vector<int>ans = spiralMatrix(arr);
    int n = ans.size();
    cout<<"Printing the Spiral matrix : ";
    for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
    }

    return 0;
}



