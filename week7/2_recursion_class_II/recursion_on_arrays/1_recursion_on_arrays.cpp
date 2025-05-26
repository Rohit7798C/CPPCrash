//Recursion on Arrays
#include<bits/stdc++.h>

using namespace std;

void printingArray(int arr[],int size,int index){
    //base case : When the printing reaches the last index, we will go out of the array.
    if(index == size){
        //array se bahar aa gaye ho
        return;
    }

    //recursive relation
    //ek case mai solve karunga
    cout<<arr[index]<<" ";

    //processing
    printingArray(arr,size,index+1);
    //kyunki mai index = 0 ki value print kar chuka hu, toh ab recursion index + 1 ki value print karega.
}
bool searchInArray(int arr[],int size,int index,int target){
    //base case
    //2 base cases
    //Not found base case
    if(index == size){
        //invalid index -> Out of bounds of array
        return false;
    }
    //Found Case -> 1 case maine kiya
    if(arr[index] == target){
        return true;
    }
    //recursive relation -> Baki cases recursion kar raha hai
    bool ans = searchInArray(arr,size,index+1,target);
    return ans;
}
//After performing printing and search, we got to know that,
//We are performing linear search only but recursively
//In general we perform linear search iteratively but here we are using recursion.
void maxInArray(int arr[],int size,int index,int& maxi){
    //base case
    if(index == size){
        //entire array traverse kar chuka hu
        return;
    }
    //recursive relation
    //1 case mera
    maxi = max(maxi,arr[index]);
    //aur baaki sab tera -> recursion
    maxInArray(arr,size,index+1,maxi);
}
void minInArray(int arr[],int size,int index,int &mini){
    //base case
    if(index == size){
        return;
    }
    //mera kaam
    mini = min(mini,arr[index]);
    //recursion ka kaam
    minInArray(arr,size,index+1,mini);
}

void printAllOddInArray(int arr[],int size,int index){
    //base case
    if(index == size){
        return;
    }
        /*
        if(n&1==0){
           it is an even number 
        }
        if(n&1==1){
           it is an odd number 
        }
         */
    //1 case mai karunga
    if(arr[index]&1){       //so, this will execute when arr[index] == 1
        cout<<arr[index] << " ";
    }
    //baki recursion karega
    printAllOddInArray(arr,size,index+1);
}
void  printAllEvenInArray(int arr[],int size,int index){
    //base case
    if(index == size){
        return;
    }
    //1 case mai karunga
    if(!(arr[index]&1)){
        cout<<arr[index]<<" ";
    }
    //baaki recursion karega
    printAllEvenInArray(arr,size,index+1);
}

void storeAllOddFromArrayIntoVector(int arr[],int size,int index,vector<int>&ans){
    //base case
    if(index == size){
        return;
    }
        /*
        if(n&1==0){
           it is an even number 
        }
        if(n&1==1){
           it is an odd number 
        }
         */
    //1 case mai karunga
    if(arr[index]&1){       //so, this will execute when arr[index] == 1
        // cout<<arr[index] << " ";
        ans.push_back(arr[index]);
    }
    //baki recursion karega
    storeAllOddFromArrayIntoVector(arr,size,index+1,ans);
}


int main(){
    int arr[] = {10,11,12,13,14,15};
    int size = 6;
    int index = 0;

    //Printing an Array
    // int target = 500;
    // printingArray(arr,size,index);

    //Searching in Array
    // bool ans = searchInArray(arr,size,index,target);
    // cout<<ans<<" ";

    //Maximum number in an array
    // int maxi = INT_MIN;
    // maxInArray(arr,size,index,maxi);
    // cout<<maxi<<" ";

    //Minimum number in an array
    // int mini = INT_MAX;
    // minInArray(arr,size,index,mini);
    // cout<<mini<<" ";

    //Print All odd in Array
    // printAllOddInArray(arr,size,index);
    
    //Print All Even in Array
    // printAllEvenInArray(arr,size,index);

    //Storing all the Odd numbers from array into Vector
    // vector<int>ans;
    // storeAllOddFromArrayIntoVector(arr,size,index,ans);
    // for(auto num : ans){
    //     cout<<num<<" ";
    // }
    return 0;
}

//Jab bhi tum kisi function ke andar koi variable send karo jisme answer store karte ho, har function call ke saath, so you have to make sure 
//ki tum usse by reference pass karo