#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>printUniqueElementsOfArray(vector<int>arr){
    sort(arr.begin(),arr.end());
    int i = 0, n=arr.size();
    
    if(arr.empty()){
        return {};
    }
    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    arr.resize(i+1);
    return arr;
}

int main(){
    vector<int>arr = {0, 1, 2, 3, 0, 4, 5, 3, 2, 1};
    vector<int> ansOfUniqueElements = printUniqueElementsOfArray(arr);
    
    cout<<"Unique elements are : ";
    int n = ansOfUniqueElements.size();
    for(int i=0;i<n;i++){
        cout<<ansOfUniqueElements[i]<<" ";
    }
    cout<<endl;
    cout<<"The number of Unique elements are : "<<ansOfUniqueElements.size();
    return 0;
}