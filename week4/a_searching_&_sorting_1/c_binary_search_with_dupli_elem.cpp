//Finding First Occurence -> (index return).
//In general, we directly return the ans if found,
//But here we will be first "storing the ans" and simultaneously computing the operation.
//In short, 
//Agar hum ne answer dhundh liya hai, toh usey ek dabbe mein store karenge.
//Aur woh final answer ho bhi sakta hai aur nahin bhi ho sakta hai.
//Issey solve karne ke liye hum use karenge "Store & Compute" method.
//In this strategy we use the concept of "reference variable",
//because when we use reference variable, the value is changed in the actual variable, and not in the copy of it.
//so that we can directly compare, as the original value is never lost.

#include<iostream>

using namespace std;

void findFirstOccurence(int arr[],int n,int target,int &ansIndex){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == target){
            //ans found -> may or may not be the first occurence.
            //Here we will use "store and conquer" startegy.
            ansIndex = mid;
            //Kyon ki first occurence ki baat ho rahi hai
            //Toh batao left mein jaun ya right mein?
            //Left mein jao
            end = mid - 1;
        }
        if(target>arr[mid]){
            //right mein jao
            start = mid + 1;
        }
        if(target<arr[mid]){
            //left mein jao
            end = mid - 1; 
        }
        //Yeh mai bhul jata hu
        mid = start + (end-start)/2;
    }
}

int main(){
    int arr[] = {20,20,20,20,20,20,30,30,40,50,60};
    int n = 11;
    int target = 300;
    //-1 means target not found.
    int ansIndex = -1;

    //Binary search lagane jaa raha hu toh pakka array sorted hi hoga.
    findFirstOccurence(arr,n,target,ansIndex);
    cout<<"First Occurence Index : "<<ansIndex<<endl;

    return 0;
}