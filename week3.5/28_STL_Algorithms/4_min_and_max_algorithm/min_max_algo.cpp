// Min-Max Algorithm
// -> min : Returns the smaller of two values.
// -> max : Returns the larger of two values.
// -> min_element : Finds the smallest in a range.
// -> max_element : Finds the largest in a range.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    
    // 1) Using max() and min()
    // // Suppose we have two numbers and we have to compare them.
    // int a = 10;
    // int b = 15;
    // cout<<max(a,b) << endl;         //Ouptut : 15
    // // Returning the max of two values.
    // cout<<min(a,b) << endl;         //Ouptut : 10
    // // Returning the min of two values.


    // Now Suppose we have to find "min" or "max" from a container.
    // min/max in a range.
    // 2) Using min_element() and max_element()
    // vector<int>arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);
    // arr.push_back(40);
    // arr.push_back(50);

    // // It returns an iterator
    // auto it1 = min_element(arr.begin(),arr.end());
    // cout<<*it1<<endl;                   //Ouptut : 10

    // // It returns an iterator
    // auto it2 = max_element(arr.begin(),arr.end());
    // cout<<*it2<<endl;                   //Ouptut : 50



    
}