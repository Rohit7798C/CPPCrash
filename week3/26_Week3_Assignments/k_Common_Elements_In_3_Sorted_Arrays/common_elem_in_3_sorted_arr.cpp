//Q. Common element in 3 sorted arrays
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<unordered_set>

using namespace std;


//Time Complexity : O(N1logN1) + O(N2logN2) + O(N3logN3)
//Space Complexity : O(N1)
vector<int>findAllCommonElements(vector<int>arr1,vector<int>arr2,vector<int>arr3){
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    sort(arr3.begin(),arr3.end());

    int n1,n2,n3;
    n1 = arr1.size(), n2 = arr2.size(), n3 = arr3.size();

    vector<int>commonElements;
    set<int>st;
    for(int i=0;i<n1;){
        for(int j=0;j<n2;){
            for(int k=0;k<n3;){
                if((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])){
                    // commonElements.push_back(arr1[i]);
                    st.insert(arr1[i]);
                    i++,j++,k++;
                }
                else if(arr1[i]<arr2[j]){
                    i++;
                }
                else if(arr2[j]<arr3[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
        }
    }
    for(auto i : st){
        commonElements.push_back(i);
    }
    return commonElements;
}
// The above code is not 100% correct
// The correct code is given below

//Time Complexity : O(N1) + O(N2) + O(N3)
//Space Complexity : O(N1)
vector<int>findAllCommonElementsCorrect(vector<int>&arr1, vector<int>&arr2, vector<int>&arr3){
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    sort(arr3.begin(),arr3.end());
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n3 = arr3.size();
    
    vector<int>commonElements;
    unordered_set<int>s;
    int i = 0, j = 0, k = 0;
    while(i<n1 && j<n2 && k<n3){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
            s.insert(arr1[i]);
            i++,j++,k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    for(int i : s){
        commonElements.push_back(i);
    }
    return commonElements;
}


int main(){
    vector<int>arr1;
    int n1,n2,n3;
    cout<<"Enter the size of 1st array : ";
    cin>>n1;
    cout<<"Enter the elements of 1st array : ";
    for(int i=0;i<n1;i++){
        int d;
        cin>>d;
        arr1.push_back(d);
    }

    vector<int>arr2;
    cout<<"Enter the size of 2nd array : ";
    cin>>n2;
    cout<<"Enter the elements of 2nd array : ";
    for(int i=0;i<n2;i++){
        int d;
        cin>>d;
        arr2.push_back(d);
    }

    vector<int>arr3;
    cout<<"Enter the size of 3rd array : ";
    cin>>n3;
    cout<<"Enter the elements of 3rd array : ";
    for(int i=0;i<n3;i++){
        int d;
        cin>>d;
        arr3.push_back(d);
    }

    vector<int>ans = findAllCommonElements(arr1,arr2,arr3);
    int n = ans.size();
    cout<<"The common elements are : ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    vector<int>correctAns = findAllCommonElementsCorrect(arr1,arr2,arr3);
    cout<<"The common elements are : ";
    for(int i=0;i<n;i++){
        cout<<correctAns[i]<<" ";
    }
    return 0;
}
