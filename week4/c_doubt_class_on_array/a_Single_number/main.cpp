//Q. Finding a single number that is not repeated.
// Sol1 : Using Bitwise XOR
// Sol2 : Sorting and comparing the Adjacents.
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findUniqueElement(vector<int>arr){
    //first step is sorting
    sort(arr.begin(),arr.end());
    //Time complexity of sorting is : O(Nlog(N))
    int n = arr.size();
    int ans=-1;
    int i = 0;
    //Time complexity of this loop is : O(N)
    while(i<n){
        if(i+1<n && arr[i]==arr[i+1]){
            i+=2;
        }
        else{
            ans = arr[i];
            break;
        }
    }
    return ans;
}

int main(){
    //In using Sol2, 
    //What if the unique element is present at the last index?
    //We cannot compare i with i+1, because it goes out of bounds.
    //We have to handle that case also.
    vector<int>arr={1,1,2,2,3,3,4,5,5,6,6};
    int ans = findUniqueElement(arr);
    cout<<"The unique element is : "<<ans<<endl;
    return 0;
}