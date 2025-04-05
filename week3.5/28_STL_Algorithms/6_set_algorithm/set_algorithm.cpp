// Set Algorithm
// -> set_union : Computes the union of two sorted ranges.
// -> set_intersection : Computes the intersection of two sorted ranges.
// -> set_difference : Computes the difference of two sorted ranges.
// -> set_symmetric_difference : Computes the symmetric difference of two sorted ranges.


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    
    vector<int>first; 
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    
    vector<int>second; 
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);


    //set_union
    // vector<int>result;
    // set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // // Give the beginning and ending iterator of each of the two vectors for which we are finding the union.
    // // The last one is the "inserter function", where we want to insert the union of the two vectors.
    // // The name of the "inserter function" is "result" and we will be using the "result.begin()" iterator to insert the "union" result.
    
    // // Printing the result.
    // for(int a : result){
    //     cout<< a << "  ";                //Output : 1  2  3  4  5  6
    // }



    // // set_intersection
    // vector<int>result;
    // set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // // Printing the result.
    // for(int a : result){
    //     cout<< a << "  ";                  // Output : 3  4
    // }



    // set_difference : Common elements will cancel out each other.
    // v1 - v2 , will remove the common elements and the elements from v2.
    // it will return the remaining elements in "v1".

    // vector<int>result;
    // set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // // Printing the result.
    // for(int a : result){
    //     cout<< a << " ";                      //Output : 1  2  
    // }



    // // set_symmetric_difference : "v1 - v2", it will remove all the common elements and return the remaining elements from both ranges.
    // vector<int>result;
    // set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // // Printing the result.
    // for(int a : result){
    //     cout<< a << " ";                      //Output : 1  2  5  6
    // }
    return 0;
}