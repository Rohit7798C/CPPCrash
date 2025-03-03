#include<iostream>
#include<vector>
using namespace std;

//** IMP **/
//Vector utilizes more memory than Array.
int main(){
    //How to insert and delete in a Vector
    //A) INSERT
        //1) When size is not known.
        vector<int>arr;
        arr.push_back(10);         //using push_back() function.
        //1) When size is known.
        vector<int>arr(10);
        arr[3]=40;                 //same like array.
    
    //B) REMOVE
        vector<int>arr2;
        arr2.pop_back();           //Removes from the last.

    //C) TRAVERSAL IN VECTOR
        vector<int>arr3;
        arr3.push_back(1);
        arr3.push_back(2);
        arr3.push_back(3);
        arr3.push_back(4);
        int n = arr3.size();
        int target = 70;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return true;
            }
        }
    return 0;
}