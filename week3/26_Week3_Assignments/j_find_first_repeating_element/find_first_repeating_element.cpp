#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// Time Complexity : O(N)
// Space Complexity : O(1)
int indexOfFirstRepeatElement(vector<int>arr){
    if(arr.empty()){
        return -1;
    }
    int n = arr.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return i;
            }
        }
    }
    return -1;
}


// Time Complexity : O(N) + O(N) = O(N)    //because we are iterating the hash table twice (to insert and to check count).
// Space Complexity : O(N)                 //Worst case will that every element is unique ad we have to store every element in the hash table(total N elements).
int hashingMethod(vector<int>arr){
    int n = arr.size();
    unordered_map<int,int>hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;         //Hash is by default initialized by 0.
        //So, here hash[arr[i]] means, we are storing the element of array
        //And ++ means, we are storing the count of each element of array.
    }

    //Iterating the hash table to check the count of each element.
    for(int i=0;i<n;i++){
        if(hash[arr[i]] >1){
            return i;
        }
    }
    return -1;
}


int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        arr.push_back(d);
    }

    // int ans = indexOfFirstRepeatElement(arr);

    int ans = hashingMethod(arr);
    cout<<"The index of first repeating element in the array is : "<<ans;
    
    return 0;
}
