#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int arr []= {10,20,30,40,50,60,70,80,90};
    int n = 9;
    int target = 77;
    
    //Using in-built binary_search STL function.
    bool ans = binary_search(arr,arr+n,target);
    cout<<ans<<endl;
    return 0;
}