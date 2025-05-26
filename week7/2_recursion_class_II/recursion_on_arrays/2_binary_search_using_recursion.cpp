#include<bits/stdc++.h>

using namespace std;

//iterative - loop
int binarySearch(int arr[],int size,int target){
    int start = 0,end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target<arr[mid]){
            //left
            end = mid - 1;
        }
        else if(target>mid){
            //right
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
//recursive
//since every step has it's own start and end, we will pass start, end along with target.
int binarySearchUsingRecursion(int arr[],int size,int start,int end,int target){
    //base case (start, end se aage nikal chuka hai, matlab answer nahin mila hai)
    if(start>end){
        return -1;
    }
    int mid = start + (end - start)/2;
    //1 case mai karunga
    if(arr[mid] == target){
        return mid;
    }
    //Aur baki recursion karega
    //arr[mid] agar target ke equal nahi hai
    //iska matlab ya toh target bada hai,
    //ya toh target chota hai.
    if(target>arr[mid]){
        //right mein jao
        // start = mid + 1;
        return binarySearchUsingRecursion(arr,size,mid+1,end,target);
    }
    else{
        //left
        // end = mid-1;
        return binarySearchUsingRecursion(arr,size,start,mid-1,target);
    }
}
void printDigits(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    // printDigits(n/10);
 
    int newNumber  = n / 10;
    printDigits(newNumber);

    //1 case mai karunga 
    int digit = n%10;
    cout<<digit<< " ";

    //baki recursion karega
    // int newNumber  = n / 10;
    // printDigits(newNumber);        //It gives the number in reverse.
    //recursive relation
    //So, to solve this thing in any situation we just have to adjust the position of printing and recursion call.
    //Above and below.
}
bool arraySorted(int arr[],int size,int index){
    //base case
    if(index==size-1){
        //single element wala array is treated as sorted array
        return true;
    }
    bool currAns = false;
    bool recursionKaAns = false;
    //1 mai karunga
    if(arr[index+1]>arr[index]){
        currAns = true;
    }

    //baki recursion karega
    //recursive relation
    recursionKaAns = arraySorted(arr,size,index+1);

    return (currAns && recursionKaAns);

    // if(currAns == true || recursionKaAns == true){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

int main(){
    // int arr[] = {10,20,30,40,50,60,70};
    // int size = 7;
    // int target = 10;
    // int ans = binarySearch(arr,size,target);
    // cout<<ans<<" ";

    // int start = 0, end = size-1;
    // int ansRecursive = binarySearchUsingRecursion(arr,size,start,end,target);
    // cout<<ansRecursive<<" ";

    // int n = 0;
    // printDigits(n);

    //check whether array is sorted or not
    int start = 0;
    int arr[] = {10,20,30,40,45};
    int size = 5;
    bool ans = arraySorted(arr,size,start);
    if(ans){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is NOT Sorted";
    }
    return 0;
}