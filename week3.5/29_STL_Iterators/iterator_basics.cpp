#include<iostream>
#include<vector>
#include<forward_list>
#include<list>

using namespace std;

int main(){
    // creating vector of integer.
    // vector<int>arr;
    // arr.push_back(10);
    // arr.push_back(20);
    // arr.push_back(30);

    // traversal using iterator
    // creating iterator
    // vector<int> :: iterator it = arr.begin();
    // while(it!=arr.end()){
    //     cout<<*it<<" ";                       //Output : 10 20 30 
    //     it++;
    // }

    
    // A) iterator operations
    // 1) *itr : Returns the element on the current position

    // 2) itr->m : Returns the member value of the object pointed by the iterator and is equivalent to (*itr).m
    // Whenever we point iterator to a variable, then we can get the value of the variable as *itr.
    // But In case of iterating a map, we are iterating over the key-value pairs.
    // So, we cannot directly get the value of pairs using *itr.
    // For that, we have to create a pair as pair<int ,int>p = *itr, and assign the iterator to the pair.
    // Now we can get the values of pairs as p.first and p.second.
    // But this is a lengthy process, so we can directly use, (*itr).first OR itr->first.
    // Without the need of creating a pair.

    // 3) ++itr : Moves iterator to the next position.

    // 4) ++itr : Moves iterator to the previous position.

    // 5) itr + i : Moves iterator by i positions.

    // 6) itr1 == itr2 : returns true, if the positions pointed by the iterators are the same.

    // 7) itr1 != itr2 : returns true, if the positions pointed by the iterators are NOT the same.

    // 8) itr = itr1 : assigns the position pointed by "itr1" to the "itr" iterator.




    // B) Types of Iterators
    // 1) Input Iterator (reading only, forward moving)
    // -> These iterators can only be used for reading values from a container in a forward direction.
    // -> They are typically used for algorithms that need to read data from a container, such as std::find or std::for_each.
    
        // create an input iterator to read values from cin
        // istream_iterator<int>input_itr(cin).


    // 2) Output Iterator (write only, forward moving)
    // -> These iterators can only be used for writing values to a container in a forward direction.
    // -> They are less commonly used compared to other iterators.

        // create an output iterator to write integers to the console.
        // ostream_iterator<int>output_itr(cout, " ");


    // 3) Forward Iterator (read/write, forward moving).
    // -> These iterators combine the capabilities of both input and output iterators. They allow reading and writing values in a forward direction.
    // -> Many container types, like lists, support forward iterators.

    // List is based on doubly linked-list, whereas forward-list is baased on singly-linked list.
        // forward_list<int>nums {1,2,3,4};
        // initializing an iteratir to point
        // to beginning of a forward list
        // forward_list<int>::iterator itr = nums.begin();

        //Example: 
        // forward_list<int> list;

        // list.push_front(10);
        // list.push_front(20);
        // list.push_front(30);
        
        // // traverse using iterator
        // forward_list<int>::iterator it = list.begin();

        // while(it!=list.end()){
        //     // cout<<*it<< " ";            //this is reading using iterator 
        //     // We can start writing in it as,
        //     (*it) = (*it) + 5;               //this is writing or adding 5 to each value
        //     it++;                          //this is moving forward
        // }
        
        // // again printing after writing into it.
        // it = list.begin();
        // while(it!=list.end()){
        //     cout<<*it<< " ";               //this is reading using iterator 
        //     it++;                          //this is moving forward
        //     // Output : 35 25 15 
        // }
         

        //let's try moving backward (Not Possible).
        // forward_list<int>::iterator it = list.end();
        // Nodes in Singly linked list does not have previous node address, we cannot move backwrd in it.
        // Since forward list is based on singly linked-list, we cannot traverse forward_list in backward direction.
        // while(it!=list.begin()){
        //     cout<<*it<<" ";
        //     // --it;              //This line gives error.
        // }



    // 4) Bidirectional Iterator (read/write, forward/backward moving).
    // -> These iterators can move both forward and backward within a container. They are supported by containers like lists and double-ended queues (deques).
    // -> Because "list" is based on Doubly-linked list, we have both previous and next pointer to move in both direction.

            //initialize iterator to point to beginning of nums
            // list<int>::iterator itr = nums.begin();

            // Example : 
            // list<int>myList;
            // myList.push_back(10);
            // myList.push_back(20);
            // myList.push_back(30);
            
            // // traverse using iterator
            // list<int>::iterator it = myList.begin();
            
            // while(it!=myList.end()){
            //     //writing
            //     (*it) = (*it) + 2;
            //     //reading
            //     cout<<*it<< " ";              //Output : 12 22 32
            //     //forward move 
            //     it++;
            // }


            // // let's try moving backward in list
            // list<int>::iterator it = myList.end();
            // //since we know that there is nothing at the "end pointer" in the list
            // //so we have to first move the iterator one step back from the "end".
            // //that's why we are firstly performing "it--;".
            // while(it!=myList.begin()){
            //     //backward movement.
            //     it--;
            //     //writing
            //     *it = *it + 5;
            //     //printing
            //     cout<<*it<<" ";                  //Output : 35 25 15 
            // }



    // 5) Random Access iterator (read/write, forward/backward, random access)
    // -> These iterators offer full navigation capabilities, allowing you to move to any element within a container in constant time.
    // -> Vectors, arrays, and deques provide Random Access iterators.

            // create iterators to point to the first and the last elements
            // vector<int>:: iterator itr_first = vec.begin();
            // vector<int>:: iterator itr_last = vec.end() - 1;


            //Example
            vector<int>arr = {10,20,30,40,50};

            // //traversing using iterator.
            // vector<int>::iterator it = arr.begin();

            // while(it!=arr.end()){
            //     //write
            //     (*it) = (*it) + 7;
            //     //reading
            //     cout<<*it<<" ";          //Output : 17 27 37 47
            //     //forward move
            //     it++;
            // }


            // // let's try moving backward in vector iterator
            // vector<int>::iterator it = arr.end();
            // while(it!=arr.begin()){
            //     //pehele piche jaunga -> backward movement.
            //     it--;
            //     //phir print karunga
            //     cout<<*it<< " ";           //Output : 40 30 20 10
            // }


            //Random Access iterator
            // vector<int>::iterator it = arr.begin() + 3;
            // cout<<*it<<" ";                   //Output : 40



    return 0;
}