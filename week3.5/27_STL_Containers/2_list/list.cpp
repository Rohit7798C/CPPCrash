// Problem in Array
// Requires Contagious memory locations.


// list 
// -> Used to represent Linked List.
// -> Linked List is a collection of "nodes".
// -> Allows fast insertions and removal anywhere in the list.
// -> No random access like vectors.
// -> Can store the data at non-contagious memory locations.


// A Node can be represented as :                              
//               __________________    __________________      __________________     __________________
// Head-Node -> |_____|_____|_____| -> |_____|_____|_____| ->  |_____|_____|_____| -> |_____|_____|_____|  <- Tail Node
//                prev   data  next     prev   data  next       prev   data  next       prev   data  next
 
// All the nodes are linked with each other through "prev" and "next" pointers.


#include<iostream>
#include<list>

using namespace std;

int main(){
    //creation of list 
    list<int>myList;

    //insertion
    myList.push_back(10);
    //10 
    myList.push_back(20);
    //10 20 
    myList.push_back(30);
    //10 20 30
    myList.push_back(40);
    //10 20 30 40

    //In lists, we can insert the elements from both front and back.
    //Like we have used push_back(), to insert from the back.
    //We can use push_front(), to insert from the front.
    myList.push_front(100);      //100 is added in the front
    // 100->10->20->30->40

    myList.pop_back();           //popped an element from the last
    // 100->10->20->30

    myList.pop_front();           //popped an element from the start
    // 10->20->30->40


    //1) push_back(const T& value) : Adds an element to the end of the list.
    //2) pop_back() : Removes the last element from the list.
    //3) push_front(const T& value) : Adds an element to the beginning of the list.
    //4) pop_front() : Removes the first element from the list.

    // 5) size() : Returns the number of elements in the List.
    // cout<<myList.size()<<endl;  //Output : 3

    // 6) clear() : Removes all the elements from the list, which are destroyed, and leaves it with a size of 0.
    // cout<<myList.size()<<endl;      // Output : 3 (Before Clearing)
    // myList.clear();
    // cout<<myList.size()<<endl;      // Output : 0 (After Clearing)
    

    // 7) empty() : Checks if the list is empty(i.e., whether it's size is 0).
    // if(myList.empty() == true){
    //     cout<<"List is Empty!!"<<endl;
    // }
    // else{
    //     cout<<"List is NOT Empty!!"<<endl;
    // }

    
    // 8) front() : Accesses the first element in the list.
    // cout<<myList.front()<<endl;        //Output : 10


    // 9) back() : Accesses the last element in the list.
    // cout<<myList.back()<<endl;        //Output : 30


    // 10) a) begin() : Returns an iterator pointing to the first element in the list.
    //     b) end() : Returns an iterator pointing to the past-the-end element in the list. 
    //Iterator
    //-It is a Standard way of traversing over a Container.
    //-It is not exactly a pointer, but it is similar to working of a pointer
    //-It can behave like a pointer.

    // list<int>::iterator it = myList.begin();
    // while(it != myList.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }


    // 11) remove(const T& value) : Removes all elements from the list that are equal to the specified value.
    //Before removing anything we have the following list.
    // 10->20->30
    // Now we add one more 10 into the list.
    // myList.push_back(10);
    // So the list becomes.
    // 10->20->30->10
    // cout<<"Before Removing : "<<endl;
    // list<int>::iterator it = myList.begin();
    // while(it != myList.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;
    // myList.remove(10);                //Removing an element from the list
    // cout<<"Before Removing : "<<endl;
    // list<int>::iterator it2 = myList.begin();
    // while(it2 != myList.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }



    // 12) swap(list& x) : Swaps the contents of the list with those of another list of same type, including their sizes.
    list<int>first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    // 10->20->30

    // list<int>second;
    // second.push_back(100);
    // second.push_back(200);
    // second.push_back(300);
    // 100->200->300

    //Before Swapping
    // cout<<"Before Removing : "<<endl;
    // list<int>::iterator it1 = first.begin();
    // while(it1 != first.end()){
    //     cout<<*it1<<" ";
    //     it1++;
    // }
    // cout<<endl;
    //Swapping both the lists.
    //After Swapping
    // first.swap(second);
    // cout<<"After Swapping : "<<endl;
    // list<int>::iterator it2 = first.begin();
    // while(it2 != first.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }


    // 13) insert(iterator position, const T& value) : Inserts a new element before the specified position in the list.
    // list<int>first;
    // first.push_back(10);
    // first.push_back(20);
    // first.push_back(30);
    // 10->20->30

    // first.insert(first.begin(),100);
    // 100->10->20->30
    // list<int>::iterator it1 = first.begin();
    // while(it1 != first.end()){
    //     cout<<*it1<<" ";
    //     it1++;
    // }
    // cout<<endl;
    

    // 14) erase(iterator position) or erase(iterator first, iterator last) : Removes one or more elements from the list starting at the specified position.
    
    // Before Erasing
    // cout<<first.size()<<endl;                 //Output : 3
    // first.erase(first.begin(),first.end());
    // After Erasing
    // cout<<first.size()<<endl;                 //Output : 0
 

    return 0;
}