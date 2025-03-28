//Positioning Method
// Time Complexity -> O(N)
// Space Complexity -> O(1)

#include<iostream>
#include<vector>

using namespace std;

int positioningMethod(vector<int>arr){
    while(arr[0] != arr[arr[0]]){
        swap(arr[0] , arr[arr[0]]);
    }
    return arr[0];    //Because all elements will be placed at their respective positions and duplicate extra element will be placed at index-0.
}

int main(){
    vector<int>arr = {1,3,3,3,3,3,4,2,};
    int ans = positioningMethod(arr);
    cout<<"the repeated element is : "<<ans;
    return 0;
}