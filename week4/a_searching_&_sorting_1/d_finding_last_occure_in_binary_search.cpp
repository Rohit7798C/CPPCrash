//finding the last occurence in the array using binary search.
#include<iostream>
using namespace std;

void findLastOccurence(int arr[],int n,int target,int &ansIndex){
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == target){
            //mid element, target ke equal toh hai.
            //but may or may not be the last occurence
            //that's why we use "store and compute" strategy.
            ansIndex = mid;
            //right mein jao.
            start = mid+1;
            //The last occurence will always be on the right side of the mid element(if found).
            //that's why we are moving towards the right-side of mid.
        }
        if(target>arr[mid]){
            //right mein jao.
            start = mid + 1;
        }
        if(target<arr[mid]){
            //left mein jao.
            end = mid - 1;
        }
        //Yeh mai bhul jata hoon.
        mid = start + (end - start)/2;
    }
}

int main(){
    int arr[] = {20,20,20,20,20,20,30,30,40,50,60};
    int n = 11;
    int target = 30;
    //-1 means target not found.
    int ansIndex = -1;

    //Binary search lagane jaa raha hu toh pakka array sorted hi hoga.
    findLastOccurence(arr,n,target,ansIndex);
    cout<<"Last Occurence Index : "<<ansIndex<<endl;
    
    return 0;
}