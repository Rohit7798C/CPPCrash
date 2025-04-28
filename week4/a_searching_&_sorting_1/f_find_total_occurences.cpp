#include<iostream>
#include<vector>

using namespace std;

void firstOccurence(vector<int>arr,int n,int target,int &ansIndex){
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    while(start<= end){
        if(arr[mid] == target){
            ansIndex = mid;
            end = mid - 1;
        }
        else if(target>arr[mid]){
            start = mid + 1;
        }
        else if(target<arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}
void lastOccurence(vector<int>arr,int n,int target,int &ansIndex){
    int start = 0, end = n-1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(arr[mid] == target){
            ansIndex = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
}

int main(){
    vector<int> arr = {20,20,20,20,20,20,30,30,40,50,60};
    int n = 11;
    int target = 20;
    //-1 means target not found.
    //Binary search lagane jaa raha hu toh pakka array sorted hi hoga.
    int firstOccurenceIndex = -1;
    firstOccurence(arr,n,target,firstOccurenceIndex);
    int lastOccurenceIndex = -1;
    lastOccurence(arr,n,target,lastOccurenceIndex);
    int totalOccurences = lastOccurenceIndex - firstOccurenceIndex + 1;
    cout<<"totalOccurences : "<<totalOccurences<<endl;
    return 0;
}