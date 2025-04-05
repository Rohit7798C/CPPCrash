// Set
// -> Sorted collection of "unique" elements.
// -> Elements are stored in sorted order, and duplicates are automatically removed.
// -> Provides efficient insertion, deletion, and search operations.
// -> Types of Sets : 
// -> 1) unordered_set : Implementation under Arrays and Hash-table. 
//      -> All operations are performed in O(1) time.
// -> 2) ordered_set : Implementation under Self Balancing BST.
//      -> All operations are performed in O(log(N)) time.

#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){

    //creation
    // set<int>st;
    // All of the below operations will work correctly for ordered set also.

    unordered_set<int>st;
    
    //insertion
    st.insert(10);
    st.insert(15);
    st.insert(8);
    st.insert(4);

    //traverse
    // set<int>::iterator it = st.begin();


    // iterator;
    // unordered_set<int>::iterator it = st.begin();
    // while(it != st.end()){
    //     cout<<*it<<" ";
    //     it++;            
    //     // for ordered set                      // for unordered set
    //     // Output                               // Output 
    //     // 4 8 10 15                            // 4 8 15 10
    //     // Gives sorted elements                // Gives elements in any order.
    // }
    // cout<<endl;


    // clear()
    // cout<<st.size()<<endl;                      // Output : 4
    // st.clear();                                 // cleared the set.
    // cout<<st.size()<<endl;                      // Output : 0

    
    // //empty()
    // if(st.empty() == true) {
    //     cout<<"Set is Empty!";
    // }
    // else{
    //     cout<<"Set is NOT Empty!";
    // }


    //erase();
    // st.erase(st.begin(),st.end());
    // cout<<st.size()<<endl;                        // Output : 0


    //find(const T& key) : Returns an iterator to the element with the given key, or end() if the key is not found.
    // if(st.find(155) != st.end()){
    //     cout<<"Found!";
    // }
    // else{
    //     cout<<"NOT Found!";
    // }


    //count(const T& key) : Returns the number of elements with the specified key (1 or 0, since std::set does not allow duplicate keys).
    if(st.count(155) == 1){
        cout<<"Found!!"<<endl;
    }
    else{
        cout<<"NOT Found!!"<<endl;
    }
    return 0;
}