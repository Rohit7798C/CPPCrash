// Homework for Dry run using three pointer approach (for inplace sort).

#include<iostream>
#include<vector>

using namespace std;

void inplaceSort(vector<int>arr){
    int l=0,m=0,h=0;
    int n = arr.size();
    while(m<=h){
        if(arr[m] == 0){
            swap(arr[l],arr[m]);
            l++,m++;
        }
        else if(arr[m] == 1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    inplaceSort(arr);
    return 0;
}