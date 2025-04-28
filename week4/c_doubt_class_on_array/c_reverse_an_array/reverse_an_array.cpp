//Q. Rotate an Array using reverse method.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void rotateArray(vector<int>&arr,int k){
    //1.reversing all the elements
    reverse(arr.begin(),arr.end());
    //      [start_address, end_address + 1], where (end_address+1) is not included.

    //2.reversing first 'k' elements
    reverse(arr.begin(),arr.begin() + k);

    //3.reversing last 'n-k' elements
    reverse(arr.begin() + k,arr.end());
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    cout<<"After rotating the array by "<<k<<" is : "<<endl;
    rotateArray(arr,k);
    for(int i = 0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}