#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//writing this comparator to sort the elements in descending order.
class comparator{
    public:
        bool operator()(int a,int b){
            return a>b;
        }
};

int main(){
    vector<int>arr;

    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);
    
    //sorts in ascending order : 10 15 20 
    // sort(arr.begin(),arr.end());
    //to sort in descending order, we have to write a functor as below
    sort(arr.begin(),arr.end(),comparator());           //Output : 20 15 10
    //print
    for(int a: arr){
        cout<<a<<" ";
    }
    cout<<endl;
    return 0;
}