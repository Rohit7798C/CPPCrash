

// Heap Algorithm
// -> make_heap : Converts a range into a max-heap. O(N).
// -> push_heap : Inserts an element into a max-heap. O(log(N))
// -> pop_heap : Removes the largest element from a max-heap. O(1).
// -> sort_heap : Sorts a range that represents a max-heap. O(N).



#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(66);
    arr.push_back(77);

    //creating a heap from an array.
    make_heap(arr.begin(),arr.end());
    //This converting requires O(N) time.
    // for(int a : arr){
    //     cout<<a<<" ";                //Output : 77 66 55 22 11  (This is max-heap).
    // }
    // cout<<endl;

    arr.push_back(99);   
    // this pushing(inserting) after converting to heap breaks the property of heap
    // because the 99 is pushed at the last as,
    // Output : 77 66 55 22 11 99
    // To solve this problem, we have to use push_heap()
    push_heap(arr.begin(),arr.end());
    // /
    // cout<<endl;


    // deletion
    for(int a : arr){
        cout<< a << " ";
    }
    cout<<endl;
    // pop_heap(arr.begin(),arr.end());
    // pop_heap() doesn't remove the top element, it just throws it at the last.
    // But we also have to remove or pop it, so for that we have to use
    // arr.pop_back()
    // arr.pop_back();          //It removes the element from the vector.
    // cout<<endl;
    // for(int a : arr){
    //     cout<< a << " ";
    // }



    // sorting in Heap
    // sort_heap(arr.begin(),arr.end());
    // for(int a : arr){
    //     cout<< a << " ";            //Output : 11 22 55 66 77 99
    // }

    return 0;
}
