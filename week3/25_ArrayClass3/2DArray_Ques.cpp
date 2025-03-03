#include<iostream>

using namespace std;
//Performing Linear Search on 2D-array.
//2D-array with functions.

//Here it is very IMP to specify the no. of columns, because of the below formula.
bool search2DArray(int arr[][4],int rowSize,int colSize,int target){
    for(int row=0;row<rowSize;row++){
        for(int col=0;col<colSize;col++){
            if(arr[row][col]==target){
                return true;
            }
        }
    }
    //agar line 15 tak pohoch gaye
    //toh iska matlab dono loop traverse kar chuke ho
    //iska matlab entire array traverse kar chuke ho
    //iska matlab entire array mein target nahi mila
    //iska matlab target not found.
    //iska matlab return false

    //Overall Time Complexity : O(rowSize*colsize);
    //Overall Space Complexity : O(1) = Constant space;
    return false;
}

int main(){
    //We know the formula 1D index = c*i+j;
    //c = no. of columns
    //i = row Index
    //j = column Index

    //To traverse a 2D-array and find a target element.
    int arr[3][4] = {
                {10,11,12,13},
                {20,21,22,23},
                {31,32,44,55}
    };
    int rowSize = 3, colSize = 4,target = 43;
    bool ans = search2DArray(arr,rowSize,colSize,target);
    if(ans){
        cout<<"element found";
    }
    else{
        cout<<"Not Found!";
    }
    return 0;
}