#include<iostream>
#include<vector>
using namespace std;
//If we use &arr here, it will be pass by reference
//Else it is pass by value.
//Here is is pass by value.
bool search2DArray(vector<vector<int>>arr,int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            if(arr[row][col]==target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    //Syntax for creating a 2D Array using Vector
    //  This creates 2D-array
    //  ________|__________
    //  |                 | 2 is no. of rows
        vector<vector<int>> arr (2,vector<int>(3,0));
    //                       |
    //             This is name of array
    //Here, 3 is the no. of columns.
    //This 2D array using Vector is initialized with 0.
    int rowSize = arr.size();
    int colSize = arr[0].size();

    //printing 
    // for(int row=0;row<rowSize;row++){
    //     for(int col=0;col<colSize;col++){
    //         cout<<arr[row][col]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Taking input
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            cin>>arr[row][col];
        }
    }
    int target = 23;
    bool ans = search2DArray(arr,target);
    if(ans){
        cout<<"element found!";
    }
    else{
        cout<<"element not found!";
    }

    return 0;
    //*** VIMP ***//
    //In case of array when we pass array into function, it is pass by reference
    //But in case of Vector, we can do both pass by reference(using &arr) or pass by value(arr).

}