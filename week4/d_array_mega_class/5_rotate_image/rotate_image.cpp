//This code is for finding the rotation of a Square Matrix
//For finding rotation of a general matrix, we have to use an external matrix.

#include<bits/stdc++.h>

using namespace std;

//Rotating an Image by 90 degree.
//Rotation = Transpose + row-wise reverse.

//Transpose of Matrix
void transposeOfMatrix(vector<vector<int>>&image){
    int row = image.size();
    int col = image[0].size();
    for(int i=0;i<row;i++){
        for(int j = i+1;j<row;j++){
            swap(image[i][j], image[j][i]);
        }
    }
}

//row-wise reverse
void reverseRowWise(vector<vector<int>>&image){
    int row = image.size();
    int col = image[0].size();
    for(int i = 0;i<image.size();i++){
        // reverse(image[i].begin(),image[i].end());
        int start = 0;
        int end = col-1;
        while(start<end){
            swap(image[i][start], image[i][end]);
            start++;
            end--;
        }
    }
}

//final rotation
void rotate_img(vector<vector<int>>&image){
    transposeOfMatrix(image);
    reverseRowWise(image);
}

int main(){
    int rowSize,colSize;
    cout<<"Enter the number of rows : ";
    cin>>rowSize;
    cout<<"Enter the number of rcols : ";
    cin>>colSize;
    vector<vector<int>>originalMatrix(rowSize,vector<int>(colSize));

    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            cin>>originalMatrix[i][j];
        }
    }
    cout<<"Original Matrix is : "<<endl;
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            cout<<originalMatrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix after rotation is : "<<endl;
    rotate_img(originalMatrix);
    for(int i = 0;i<rowSize;i++){
        for(int j = 0;j<colSize;j++){
            cout<<originalMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}